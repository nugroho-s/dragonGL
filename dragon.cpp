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
    glBegin(GL_POLYGON);
    for (int i = 0; i < wingsLen/2; i++){
            glVertex2d(wingsPoint[i].x, wingsPoint[i].y);
    }

    glEnd();
}

void dragon::pahakanan(){
	glBegin(GL_TRIANGLE_FAN);

	int j = 0;

	for (int i = 0; i < 9; i++){
		glVertex2f(pka1[j], 1000 - pka1[j + 1]);
		j = j + 2;
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 5; i++){
		glVertex2f(pka2[j], 1000 - pka2[j + 1]);
		j = j + 2;
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 3; i++){
		glVertex2f(pka3[j], 1000 - pka3[j + 1]);
		j = j + 2;
	}

	glEnd();
}


//Menggambarkan sayap kiri
void dragon::sayapkiri(){
	glBegin(GL_TRIANGLE_FAN);

	int j = 0;

	for (int i = 0; i < 5; i++){
		glVertex2f(ski1[j], 1000 - ski1[j + 1]);
		j = j + 2;
	}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 8; i++){
		glVertex2f(ski2[j], 1000 - ski2[j + 1]);
		j = j + 2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	j = 0;

	for (int i = 0; i < 8; i++){
		glVertex2f(ski3[j], 1000 - ski3[j + 1]);
		j = j + 2;
	}
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	j = 0;

	for (int i = 0; i < 10; i++){
		glVertex2f(ski4[j], 1000 - ski4[j + 1]);
		j = j + 2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	j = 0;

	for (int i = 0; i < 20; i++){
		glVertex2f(ski5[j], 1000 - ski5[j + 1]);
		j = j + 2;
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	j = 0;


	for (int i = 0; i < 23; i++){
		glVertex2f(ski6[j], 1000 - ski6[j + 1]);
		j = j + 2;
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	j = 0;

	for (int i = 0; i < 9; i++){
		glVertex2f(ski7[j], 1000 - ski7[j + 1]);
		j = j + 2;
	}
	glEnd();



}
