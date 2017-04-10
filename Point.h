/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.h
 * Author: nugroho
 *
 * Created on April 10, 2017, 2:40 PM
 */

#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point();
    Point(double, double);
    Point(const Point& orig);
    virtual ~Point();
    double x,y;
};

#endif /* POINT_H */

