#include "stdafx.h"
#include <gl/glut.h>
#include <iostream>

using namespace std;

struct Point
{
	int x;
	int y;
};


float arrayfloat[] = { 
	0.0, 0.0,
	0.1, 0.1
};

int ukuranvertex = 2;

Point vertex[2];

/*
void floattopoint(){
	int i = 0;
	int j = 0;
	for (i = 0; i < ukuranvertex; i++){
		vertex[i].x = arrayfloat[j]; j++;
		vertex[i].y = arrayfloat[j]; j++;
	}
}
*/
void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	
	
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.6, 0.6, 0.0);
	glVertex3f(0.7, 0.8, 0.0);
	glVertex3f(0.2, 0.8, 0.0);
	
	glEnd();
	glFlush();
}



void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
	glEnable(GL_COLOR_MATERIAL);
}



int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Contoh Gan ");
	Initialize();
	cout << "Semangat";
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}