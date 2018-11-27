// contents:  class Point
//	space to insert class Rectangle
//	main() to test classes

#include <iostream>
using namespace std;


// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
    // default class constructor (with no arguments):
    Point();

    // class constructor that sets the coordinates x, y to the values xval,
    // yval:
    Point(int xval, int yval);

    // member function for moving a point by dx, dy:
    void Move(int dx, int dy);

    // member functions for getting values of x, y:
    int Get_X() const;
    int Get_Y() const;

    // member functions for setting x, y to xval, yval respectively
    void Set_X(int xval);
    void Set_Y(int yval);

//exercise 1. Add declaration of member function Print here:
    void Print();

// private data members x, y represent coordinates of the point:
private:
    int X;
    int Y;
};


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
    X = 0;
    Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
    X = xval;
    Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
    X += dx;
    Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
    return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
    return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
    X = xval;
}

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
    Y = yval;
}


//exercise 1. Add definition of member function print:
void Point::Print()
{
    cout << "(" << X << "," << Y << ")";
}

// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//exercise 2, 3: Add class Rectangle declaration HERE:

class Rectangle
{
public:
    // default class constructor (with no arguments):
    Rectangle();

    // class constructor that sets the points LD, RD, LU, RU to the values leftDown, rightDown,
    Rectangle(Point leftDown, Point rightDown);

    //member function to print points of Rectangle
    void Print();

// private data members x, y represent coordinates of the point:
private:
    Point LD;
    Point RD;
    Point LU;
    Point RU;


};




// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************


// class constructor sets X, Y to zero when no values are specified:
Rectangle::Rectangle()
{
    //set LD to (0,0):
    LD.Set_X(0);
    LD.Set_Y(0);
    //set LU to (0,1):
    LU.Set_Y(1);
    LU.Set_X(0);
    //set RD to (1,0):
    RD.Set_X(1);
    RD.Set_Y(0);
    //set RU to (1,1):
    RU.Set_X(1);
    RU.Set_Y(1);

}

// class constructor sets X, Y to given values xval, yval:
Rectangle::Rectangle(Point leftDown, Point rightUp)
{
    //set LD to (leftDown.X,leftDown.Y)
    LD.Set_X(leftDown.Get_X());
    LD.Set_Y(leftDown.Get_Y());
    //set LU to (leftDown.X,rightUp.Y)
    LU.Set_X(leftDown.Get_X());
    LU.Set_Y(rightUp.Get_Y());
    //set RD to (rightUp.X, leftDown.Y)
    RD.Set_X(rightUp.Get_X());
    RD.Set_Y(leftDown.Get_Y());
    //set RU to (rightUp.X, rightUp.Y)
    RU.Set_X(rightUp.Get_X());
    RU.Set_Y(rightUp.Get_Y());
}
//exercise 2, 3. Add class Rectangle methods HERE:
void Rectangle::Print()
{
    LD.Print();
    cout<< ", ";
    RD.Print();
    cout<< ", ";
    RU.Print();
    cout<< ", ";
    LU.Print();
}


// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
    Point p1;

    cout<< "The x value for p1 is " << p1.Get_X() << endl;
    cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
    Point p2(2, 3);
    cout<< "The x value for p2 is " << p2.Get_X() << endl;
    cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
    p2.Move(1, -1);
    cout<< "After the move:" << endl;
    cout<< "The x value for p2 is " << p2.Get_X() << endl;
    cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//exercise 1. Test member function print on points p1, p2:
    cout<< "test of Print member function for p1: ";
    p1.Print();
    cout << endl;

    cout<<"test of Print member function for p2: ";
    p2.Print();
    cout << endl;


//exercises 2, 3. Testing of the class Rectangle goes here:

    // Declaring a rectangle using default class constructor:
    Rectangle r1;
    cout<< "test of Rectangle member function for r1 + default constructor: ";
    r1.Print();
    cout << endl;

    // Declaring a rectangle using points p1 and p2:
    Rectangle r2(p1, p2);
    cout<< "test of Rectangle member function for r2 + constructor: ";
    r2.Print();
    cout << endl;

    return 0;
}