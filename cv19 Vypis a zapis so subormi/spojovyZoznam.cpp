#include<iostream>
#include <fstream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class list
{
private:
    node *head, *tail;
public:
    list()
    {
        head=NULL;
        tail=NULL;
    }
    void createnode(int value)
    {
        node *temp=new node;
        temp->data=value;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            temp=NULL;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    void display()
    {
        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
    void insert_start(int value)
    {
        node *temp=new node;
        temp->data=value;
        temp->next=head;
        head=temp;
    }
    void insert_position(int pos, int value)
    {
        node *pre=new node;
        node *cur=new node;
        node *temp=new node;
        cur=head;
        for(int i=1;i<pos;i++)
        {
            pre=cur;
            cur=cur->next;
        }
        temp->data=value;
        pre->next=temp;
        temp->next=cur;
    }
    void delete_first()
    {
        node *temp=new node;
        temp=head;
        head=head->next;
        delete temp;
    }
    void delete_last()
    {
        node *current=new node;
        node *previous=new node;
        current=head;
        while(current->next!=NULL)
        {
            previous=current;
            current=current->next;
        }
        tail=previous;
        previous->next=NULL;
        delete current;
    }
    void delete_position(int pos)
    {
        node *current=new node;
        node *previous=new node;
        current=head;
        for(int i=1;i<pos;i++)
        {
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
    }
    void fillListFromTxt(string link)
    {
        node *current=new node;
        node *previous=new node;
        current=head;
        string line;
        ifstream myfile ("example.txt");

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                if (line.compare("-----")==0 )
                {
                    //some logic for more complex data stored in linkedList
                }
                else
                {
                    createnode(stoi(line));
                 //this will also be more complex
                }

            }
            myfile.close();

        }
        else
            cout << "Unable to open file";
    }
};
int main()
{
    list obj;
    obj.fillListFromTxt("example.txt");
    obj.display();


    return 0;
}