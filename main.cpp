#include <GL/glut.h>
#include <iostream>

using namespace std;

struct Point
{
	double x;
	double y;
};


double arrayfloat[] = { 
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

int ukuranvertex = 17;

Point vertex[17];



void floattopoint(){
	int i = 0;
	int j = 0;
	for (i = 0; i < ukuranvertex; i++){
		vertex[i].x = arrayfloat[j]; j++;
		vertex[i].y = (1000-arrayfloat[j]); j++;
	}
}

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	
	for (int i = 0; i < ukuranvertex; i++){
		glVertex2d(vertex[i].x, vertex[i].y);
	}

	glEnd();
	glFlush();
}



void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0 , 800.0 , 0.0 , 1000.0, -10.0 , 10.0);
	glEnable(GL_COLOR_MATERIAL);
	floattopoint();
}



int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 1000);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Contoh Gan ");
	Initialize();
	cout << "Semangat" <<endl<<endl;

	for (int i = 0; i < ukuranvertex; i++){
		cout << "Vertex " <<i<< " = " << vertex[i].x << " , " << vertex[i].y << endl;
	}
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}