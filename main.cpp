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

double arrayHead[] = {
    236,326,
    218,350,
    262,391,
    283,377
};

int ukuranvertex;

Point* vertex;



Point* floattopoint(double* x, int len){
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
}



int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 1000);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Contoh Gan ");
	Initialize();
	cout << "Semangat" <<endl<<endl;
        int len = sizeof(arrayfloat)/sizeof(arrayfloat[0]);
        cout << len << endl;
        vertex = floattopoint(arrayfloat,len);
        ukuranvertex=len/2;
	for (int i = 0; i < ukuranvertex; i++){
		cout << "Vertex " <<i<< " = " << vertex[i].x << " , " << vertex[i].y << endl;
	}
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}