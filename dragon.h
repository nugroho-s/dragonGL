/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dragon.h
 * Author: nugroho
 *
 * Created on April 10, 2017, 2:24 PM
 */

#ifndef DRAGON_H
#define DRAGON_H

#include <GL/glut.h>
#include <iostream>
#include "Point.h"

using namespace std;

class dragon {
public:
    dragon(int*, char**);
    dragon(const dragon& orig);
    virtual ~dragon();
    void drawWings();
private:
    double wings[34] = { 
	97, 359,
	91, 318,
	107, 244,
	122, 196,
	130, 183,
	154, 145,
	155, 134,
	167, 113,
	184, 94,
	236, 62,
	260, 54,
	235, 70,
	194, 105,
	151, 168,
	118, 254,
	116, 258,
	121, 269
    };
    int wingsLen;
    Point* wingsPoint;
};

inline Point* floattopoint(double* x, int len){
    int i = 0;
    int j = 0;
    cout << len << endl;
    Point* ret = new Point[len/2];
    for (i = 0; i < len/2; i++){
            ret[i].x = x[j]; j++;
            ret[i].y = (1000-x[j]); j++;
            cout << x[j-2] << "," << x[j-1] << endl;
    }
    return ret;
}

#endif /* DRAGON_H */