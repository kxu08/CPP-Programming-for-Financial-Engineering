//
//  Point.hpp
//  Exercise 1
//
//  Created by Changheng Chen on 12/8/16.
//  Copyright © 2016 Changheng Chen. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <string>
using namespace std;

class Point
{
private:
    // Data members
    double m_x;               // X coordinate
    double m_y;               // Y coordinate
    
public:
    // Member functions
    
    // Constructors, copy constructor, and destructor
    Point();
    Point(double xval, double yval);
    Point(const Point& p);
    ~Point();
    
    // Getter functions
    double GetX();            // Access the x-coordinate
    double GetY();            // Access the y-coordinate
    
    // Setter functions
    void SetX(double newX);   // Set the x-coordinate
    void SetY(double newY);   // Set the y-coordinate
    
    // String description function
    string ToString();
    
    // Distance functions
    double DistanceOrigin();  // Calculate distance to origin (0,0)
    double Distance(Point p); // Calculate distance between two points; call by value
};

#endif /* Point_hpp */
