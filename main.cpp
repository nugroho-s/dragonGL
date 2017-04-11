#include <GL/glut.h>
#include <iostream>
#include "dragon.h"

using namespace std;

double arrayHead[] = {
    236,326,
    218,350,
    262,391,
    283,377
};

int ukuranvertex;

Point* vertex;



void Draw(dragon x) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	x.pahakanan();
	x.sayapkiri();
	x.drawWings();
	glFlush();
}



void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0 , 800.0 , 0.0 , 1000.0, -10.0 , 10.0);
	glEnable(GL_COLOR_MATERIAL);
}



int main(int iArgc, char** cppArgv) {
    dragon x(&iArgc,cppArgv);
    cout << "Semangat" <<endl<<endl;
    Draw(x);
    glutMainLoop();
    return 0;
}