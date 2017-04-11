#include <GL/glut.h>
#include <iostream>

#define ymaks 1000

using namespace std;

// Paha kanan part 1
int pka1 [] = {
	420, 534,
	420, 590,
	426, 488,
	432, 512,
	454, 531,
	449, 543,
	451, 570,
	411, 647,
	405, 578
};

// Paha kanan part 2
int pka2[] = {
	411, 647,
	429, 604,
	431, 633,
	440, 675,
	441, 696

};
// Paha kanan part 3
int pka3[] = {
	435, 691,
	411, 647,
	441, 696,
	439, 703,
	435, 701
};

int ski1[] = {
	349, 211,
	421, 164,
	467, 147,
	440, 248,
	369, 215
};

int ski2[] = {
	467, 147,
	625, 132,
	688, 133,
	718, 138,
	744, 145,
	602, 149,
	490, 164,
	458, 171
};

int ski3[] = {
	590, 219,
	455, 190,
	450, 211,
	512, 219,
	572, 242,
	638, 264,
	735, 297,
	685, 261
};

int ski4[] = {
	573, 276,
	451, 211,
	441, 229,
	513, 268,
	590, 332,
	637, 362,
	682, 410,
	703, 433,
	698, 410,
	656, 356
};

int ski5[] = {
	511, 349,
	518, 334,
	514, 315,
	479, 256,
	444, 233,
	440, 248,
	479, 308,
	477, 323,
	401, 320,
	394, 336,
	425, 357,
	490, 359,
	511, 349,
	581, 440,
	579, 408,
	551, 345,
	539, 329,
	528, 321,
	523, 334,
	517, 336

};

int ski6[] = {
	379, 378,
	394, 336,
	383, 330,
	372, 332,
	321, 337,
	306, 348,
	347, 368,
	358, 379,
	341, 379,
	341, 388,
	357, 392,
	362, 411,
	373, 422,
	391, 438,
	410, 446,
	421, 446,
	412, 425,
	417, 406,
	402, 390,
	417, 397,
	399, 377,
	425, 357,
	394, 336
};

int ski7[] = {
	290, 361,
	307, 348,
	340, 364,
	317, 365,
	311, 368,
	311, 376,
	320, 385,
	304, 384,
	291, 376
};

int tail_tri1[] = {
	379,702,
	375,726,
	315,755,
	304,765,
	379,702,
	287,747
};

int tail_strip1[] = {
	287,747,
	304,765,
	262,773,
	272,815,
	243,824
};

int tail_fan1[] = {
	272,815,
	243,824,
	253,858,
	271,881
};

int tail_tri2[] = {
	273,834,
	297,900,
	271,881
};

int tail_strip2[] = {
	297,900,
	280,852,
	331,905,
	347,884,
	390,924,
	403,907,
	438,941
};

int tail_fan2[] = {
	438,941,
	390,924,
	435,940,
	451,981
};


// Drawing tail
void tail(){
	cout << "masuk tail" << endl;
	glBegin(GL_TRIANGLES);
	int j=0;
	for (int i=0;i<6;i++){
		cout << tail_tri1[j] << "," << tail_tri1[j+1]<< endl;
		glVertex2f(tail_tri1[j],ymaks-tail_tri1[j+1]);
		j+=2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	j=0;
	for (int i=0;i<5;i++){
		glVertex2f(tail_strip1[j],ymaks-tail_strip1[j+1]);
		j+=2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	j=0;
	for (int i=0;i<4;i++){
		glVertex2f(tail_fan1[j],ymaks-tail_fan1[j+1]);
		j+=2;
	}
	glEnd();

	glBegin(GL_TRIANGLES);
	j=0;
	for (int i=0;i<3;i++){
		glVertex2f(tail_tri2[j],ymaks-tail_tri2[j+1]);
		j+=2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	j=0;
	for (int i=0;i<7;i++){
		glVertex2f(tail_strip2[j],ymaks-tail_strip2[j+1]);
		j+=2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	j=0;
	for (int i=0;i<4;i++){
		glVertex2f(tail_fan2[j],ymaks-tail_fan2[j+1]);
		j+=2;
	}
	glEnd();
}

// Menggambarkan paha kanan
void pahakanan(){
	glBegin(GL_TRIANGLE_FAN);

	int j = 0;

	for (int i = 0; i < 9; i++){
		glVertex2f(pka1[j],1000-pka1[j+1]);
		j = j + 2;
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 5; i++){
		glVertex2f(pka2[j], 1000-pka2[j + 1]);
		j = j + 2;
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 3; i++){
		glVertex2f(pka3[j], 1000-pka3[j + 1]);
		j = j + 2;
	}

	glEnd();
}


//Menggambarkan sayap kiri
void sayapkiri(){
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

// Menggambarkan keseluruhan komponen
void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	pahakanan();
	sayapkiri();
	tail();
	glFlush();
}

//Inisialisasi OpenGL
void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 800, 0 , 1000, -2, 2);
	glEnable(GL_COLOR_MATERIAL);
}



int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 1000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Gambar Naga");
	Initialize();
	cout << "Semangat" << endl << endl;
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
