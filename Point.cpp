/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.cpp
 * Author: nugroho
 * 
 * Created on April 10, 2017, 2:40 PM
 */

#include "Point.h"

Point::Point(){
    x=0;y=0;
}

Point::Point(double _x, double _y) {
    x = _x;
    y = _y;
}

Point::Point(const Point& orig) {
}

Point::~Point() {
}

