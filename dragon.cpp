/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dragon.cpp
 * Author: nugroho
 * 
 * Created on April 10, 2017, 2:24 PM
 */

#include "dragon.h"

dragon::dragon(int* argc,char**args) {
    glutInit(argc, args);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 1000);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("DRAGON");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0 , 800.0 , 0.0 , 1000.0, -10.0 , 10.0);
    glEnable(GL_COLOR_MATERIAL);
    wingsLen = 34;
    wingsPoint = floattopoint(wings,wingsLen);
}

dragon::dragon(const dragon& orig) {
}

dragon::~dragon() {
}

void dragon::drawWings(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < wingsLen/2; i++){
            glVertex2d(wingsPoint[i].x, wingsPoint[i].y);
    }

    glEnd();
    glFlush();
}