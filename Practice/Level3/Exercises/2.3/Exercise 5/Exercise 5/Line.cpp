//
//  Line.cpp
//  Exercise 5
//
//  Created by Changheng Chen on 12/8/16.
//  Copyright © 2016 Changheng Chen. All rights reserved.
//

#include "Line.hpp"
#include <iostream>   // std::cout
#include <sstream>    // std::stringstream

// (0) Constructors and destructor
Line::Line() : startPoint(), endPoint()   // Default constructor; OR Line::Line() : startPoint(0,0), endPoint(0,0)
{ // Line default constructor should not be creating two new Point objects (these just get destroyed once the function returns).

    // Point startPoint; // Initialize as (0,0), not declaration of variable!!
    // Point endPoint;   // Initialize as (0,0), not declaration of variable!!
    cout << "Line default constructor: Hello my line...\n";
}

Line::Line(const Point& p1, const Point& p2) : startPoint(p1), endPoint(p2)
{
    // startPoint = p1;
    // endPoint = p2;
    
    cout << "Line constructor: Hello my line...\n";
}

Line::Line(const Line& l) : startPoint(l.startPoint), endPoint(l.endPoint)
{ // Copy from Line l (letter l not numerber 1!)
    
    // startPoint = l.startPoint;
    // endPoint = l.endPoint;
    
    cout << "Line copy constructor: Hello my line...\n";
}

Line::~Line()
{
    cout << "Bye my line...\n";
}


// (1) Getter and setter functions
Point Line::P1() const    // Start point
{
    return startPoint;
}

Point Line::P2() const    // End point
{
    return endPoint;
}

void Line::P1(const Point& pt)
{
    startPoint = pt;
}

void Line::P2(const Point& pt)
{
    endPoint = pt;
}


// (2) String description function
string Line::ToString() const
{ // Delegation: using X() and Y() on embedded Point objects
    
    stringstream ss;
    ss << "Line: startPoint(" << startPoint.X() << "," << startPoint.Y() << "), " << "endPoint(" << endPoint.X() << "," << endPoint.Y() << ")";
    
    return ss.str();   // Retrieve the string from the string buffer
}


// (3) Length function
double Line::Length() const
{ // Delegation: using Distance() on embedded Point objects
    
    return startPoint.Distance(endPoint);
}


// (4) Midpoint function
Point Line::midPoint() const
{ // Delegation: using X() and Y() on embedded Point objects
    
    return Point((startPoint.X() + endPoint.X())/2,(startPoint.Y() + endPoint.Y())/2);
}


