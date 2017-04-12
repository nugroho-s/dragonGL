#include <GL/glut.h>
#include <iostream>

#define ymaks 1000

using namespace std;

// Paha kanan part 1
int pka1[] = {
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

int ska1[] = {
	99, 279,
	176, 257,
	173, 272,
	211, 300,
	171, 298,
	161, 302,
	140, 315,
	121, 328,
	107, 343,
	98, 358,
	93, 313
};

int ska2[] = {
	160, 121,
	178, 102,
	201, 81,
	243, 59,
	260, 54,
	224, 78,
	192, 109,
	163, 150,
	139, 198,
	123, 240,
	122, 252,
	120, 277,
	99, 279,
	115, 222,
	137, 174
};

int ska3[] = {
	185, 162,
	156, 208,
	120, 279,
	146, 266,
	173, 212,
	200, 172,
	279, 79,
	308, 55,
	278, 69,
	243, 95
};

int ska4[] = {
	281, 133,
	227, 179,
	146, 266,
	175, 257,
	228, 200,
	300, 144,
	366, 105,
	439, 69,
	370, 89,
	340, 101
};

int ska5[] = {
	210, 299,
	172, 273,
	224, 256,
	223, 269,
	231, 281,
	245, 291,
	225, 328

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

int pki1[] = {
	436, 433,
	448, 428,
	463, 428,
	479, 440,
	496, 456,
	513, 482,
	497, 478,
	483, 479,
	479, 490,
	488, 508,
	507, 534,
	485, 531,
	458, 518,
	425, 484,
	423, 464
};

int pki2[] = {
	505, 523,
	503, 517,
	483, 508,
	506, 534,
	532, 534
};

int pu1[] = {
	514, 416,
	484, 389,
	464, 374,
	441, 364,
	418, 363,
	422, 395,
	427, 413,
	462, 415,
	493, 437,
	517, 467,
	525, 491,
	562, 562,
	560, 532,
	554, 492,
	545, 471,
	528, 438
};

int pu2[] = {
	557, 602,
	561, 583,
	562, 551,
	534, 510,
	542, 539,
	540, 577,
	525, 617,
	508, 622,
	499, 653,
	462, 686,
	450, 705,
	450, 715,
	458, 718,
	475, 710,
	501, 693,
	529, 664,
	545, 638
};

int pu3[] = {
	529, 493,
	505, 489,
	498, 493,
	500, 506,
	514, 514,
	540, 517
};


int tail_tri1[] = {
	379, 702,
	375, 726,
	315, 755,
	304, 765,
	379, 702,
	287, 747
};

int tail_strip1[] = {
	287, 747,
	304, 765,
	262, 773,
	272, 815,
	243, 824
};

int tail_fan1[] = {
	272, 815,
	243, 824,
	253, 858,
	271, 881
};

int tail_tri2[] = {
	273, 834,
	297, 900,
	271, 881
};

int tail_strip2[] = {
	297, 900,
	280, 852,
	331, 905,
	347, 884,
	390, 924,
	403, 907,
	438, 941
};

int tail_fan2[] = {
	438, 941,
	390, 924,
	435, 940,
	451, 981
};

int head_tri1[] = {
	322, 331,
	366, 326,
	328, 319,
	275, 311,
	320, 330,
	334, 309
};

int head_fan1[] = {
	352, 273,
	300, 311,
	333, 309,
	345, 290,
	375, 273
};

int head_fan2[] = {
	304, 274,
	276, 311,
	298, 311,
	302, 292,
	329, 261
};

int head_fan3[] = {
	254, 292,
	230, 341,
	259, 322,
	258, 311,
	277, 274
};

int head_fan4[] = {
	230, 341,
	275, 311,
	320, 330,
	295, 345,
	281, 377,
	267, 386,
	258, 410,
	230, 406,
	210, 357
};

int head_tri2[] = {
	212, 361,
	188, 450,
	249, 450,
	212, 361,
	206, 382,
	197, 357,
	197, 357,
	212, 361,
	209, 348,
	197, 357,
	206, 382,
	197, 398,
	187, 414,
	206, 382,
	188, 450,
	188, 450,
	249, 450,
	260, 559
};

int head_fan5[] = {
	286, 506,
	261, 567,
	249, 458,
	312, 459,
	334, 537
};

int head_strip1[] = {
	176, 503,
	200, 517,
	195, 529,
	223, 520,
	246, 544,
	231, 517
};

int head_tri3[] = {
	246, 544,
	231, 517,
	255, 552,
	222, 537,
	238, 540,
	211, 541
};

int head_fan6[] = {
	304, 552,
	280, 548,
	281, 523,
	303, 520,
	310, 521,
	335, 554,
	322, 566
};

int head_fan7[] = {
	278, 575,
	281, 517,
	262, 565,
	288, 603,
	294, 585,
	287, 566,
	279, 564
};

int head_tri4[] = {
	288, 603,
	294, 585,
	311, 589
};

int head_tri5[] = {
	312, 560,
	306, 571,
	322, 565,
	322, 565,
	329, 569,
	322, 577
};

int head_tri6[] = {
	340, 550,
	320, 566,
	342, 574,
	341, 544,
	342, 574,
	361, 565
};

int head_fan8[] = {
	334, 539,
	361, 566,
	369, 545,
	353, 518,
	345, 526,
	329, 518
};

int head_fan9[] = {
	322, 499,
	328, 517,
	333, 512,
	333, 505,
	328, 492,
	318, 481
};

int head_tri7[] = {
	248, 458,
	275, 458,
	248, 449,
	275, 458,
	248, 449,
	256, 420,
	252, 436,
	240, 414,
	256, 420,
	275, 458,
	298, 454,
	313, 459,
	298, 454,
	313, 459,
	297, 429,
	298, 454,
	275, 458,
	267, 418,
	310, 522,
	334, 554,
	336, 536
};

int llegs_fan1[] = {
	413,710,
	422,684,
	430,708,
	444,759,
	425,729,
	409,714
};

int llegs_fan2[] = {
	409,714,
	425,729,
	397,740,
	388,726
};

int llegs_fan3[] = {
	378,741,
	388,726,
	397,740,
	391,748,
	385,751,
	377,763
};

int llegs_fan4[] = {
	426,728,
	411,734,
	414,736,
	444,760
};

int llegs_fan5[] = {
	401,749,
	412,734,
	424,743,
	417,761,
	408,766,
	396,768
};

int llegs_tri1[] = {
	408,766,
	396,768,
	400,787,
	444,760,
	426,759,
	428,747,
	430,710,
	442,717,
	435,733
};

int llegs_fan6[] = {
	426,759,
	444,760,
	434,770,
	430,780,
	422,779
};

int llegs_tri2[] = {
	430,780,
	422,779,
	427,793
};

int hlegs_fan1[] = {
	511,542,
	529,539,
	516,562,
	484,562,
	491,558,
	488,555,
	492,556,
	473,540,
	495,540,
	500,538
};

int hlegs_tri1[] = {
	473,540,
	473,555,
	492,556,
	473,540,
	479,540,
	473,532,
	473,532,
	473,545,
	452,542
};

int hlegs_fan2[] = {
	466,563,
	517,561,
	481,577,
	460,579
};

int hlegs_tri2[] = {
	460,579,
	473,579,
	458,592,
	492,604,
	499,601,
	499,611
};

int hlegs_strip1[] = {
	515,561,
	499,569,
	511,575,
	499,578
};

int hlegs_fan3[] = {
	490,581,
	511,575,
	509,590,
	499,601,
	492,604
};

int eye_tri[] = {
	284,505,
	307,520,
	279,523
};

//draw triangles
/* mode
t: GL_TRIANGLES
s: GL_TRIANGLE_STRIP
f: GL_TRIANGLE_FAN
*/
void drawTriangles(int* arr, int len, char mode){
	if (mode == 't')
		glBegin(GL_TRIANGLES);
	else if (mode == 's')
		glBegin(GL_TRIANGLE_STRIP);
	else if (mode == 'f')
		glBegin(GL_TRIANGLE_FAN);
	int j = 0;
	for (int i = 0; i<len; i++){
		//cout << arr[j] << "," << arr[j+1]<< endl;
		glVertex2f(arr[j], ymaks - arr[j + 1]);
		j += 2;
	}
	glEnd();
};

// menggambar telapak kaki
void legs(){
	//telapak kaki bawah
	drawTriangles(llegs_fan1,6,'f');
	drawTriangles(llegs_fan2,4,'f');
	drawTriangles(llegs_fan3,6,'f');
	drawTriangles(llegs_fan4,4,'f');
	drawTriangles(llegs_fan5,6,'f');
	drawTriangles(llegs_tri1,9,'t');
	drawTriangles(llegs_fan6,5,'f');
	drawTriangles(llegs_tri2,3,'t');

	//telapak kaki atas
	drawTriangles(hlegs_fan1,10,'f');
	drawTriangles(hlegs_tri1,9,'t');
	drawTriangles(hlegs_fan2,4,'f');
	drawTriangles(hlegs_tri2,6,'t');
	drawTriangles(hlegs_strip1,4,'s');
	drawTriangles(hlegs_fan3,5,'f');
};

// Drawing head
void head(){
	drawTriangles(head_tri1, 6, 't');
	drawTriangles(head_fan1, 5, 'f');
	drawTriangles(head_fan2, 5, 'f');
	drawTriangles(head_fan3, 5, 'f');
	drawTriangles(head_fan4, 9, 'f');
	drawTriangles(head_tri2, 18, 't');
	drawTriangles(head_fan5, 5, 'f');
	drawTriangles(head_strip1, 6, 's');
	drawTriangles(head_tri3, 6, 't');
	drawTriangles(head_fan6, 7, 'f');
	drawTriangles(head_fan7, 7, 'f');
	drawTriangles(head_tri4, 3, 't');
	drawTriangles(head_tri5, 6, 't');
	drawTriangles(head_tri6, 6, 't');
	drawTriangles(head_fan8, 6, 'f');
	drawTriangles(head_fan9, 6, 'f');
	drawTriangles(head_tri7, 21, 't');
};

void eye(){
	drawTriangles(eye_tri,3,'t');
};

// Drawing tail
void tail(){
	glBegin(GL_TRIANGLES);
	int j = 0;
	for (int i = 0; i<6; i++){
		glVertex2f(tail_tri1[j], ymaks - tail_tri1[j + 1]);
		j += 2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	j = 0;
	for (int i = 0; i<5; i++){
		glVertex2f(tail_strip1[j], ymaks - tail_strip1[j + 1]);
		j += 2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	j = 0;
	for (int i = 0; i<4; i++){
		glVertex2f(tail_fan1[j], ymaks - tail_fan1[j + 1]);
		j += 2;
	}
	glEnd();

	glBegin(GL_TRIANGLES);
	j = 0;
	for (int i = 0; i<3; i++){
		glVertex2f(tail_tri2[j], ymaks - tail_tri2[j + 1]);
		j += 2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	j = 0;
	for (int i = 0; i<7; i++){
		glVertex2f(tail_strip2[j], ymaks - tail_strip2[j + 1]);
		j += 2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	j = 0;
	for (int i = 0; i<4; i++){
		glVertex2f(tail_fan2[j], ymaks - tail_fan2[j + 1]);
		j += 2;
	}
	glEnd();
}

//Menggambarkan punggung
void punggung(){

	glBegin(GL_TRIANGLE_FAN);

	int j = 0;

	for (int i = 0; i < 16; i++){
		glVertex2f(pu1[j], 1000 - pu1[j + 1]);
		j = j + 2;
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 17; i++){
		glVertex2f(pu2[j], 1000 - pu2[j + 1]);
		j = j + 2;
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 6; i++){
		glVertex2f(pu3[j], 1000 - pu3[j + 1]);
		j = j + 2;
	}
	glEnd();

}


// Menggambarkan paha kanan
void pahakanan(){
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

void pahakiri(){

	glBegin(GL_TRIANGLE_FAN);

	int j = 0;

	for (int i = 0; i < 15; i++){
		glVertex2f(pki1[j], 1000 - pki1[j + 1]);
		j = j + 2;
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 5; i++){
		glVertex2f(pki2[j], 1000 - pki2[j + 1]);
		j = j + 2;
	}
	glEnd();

}


//Menggambarkan sayap kanan

void sayapkanan(){
	glBegin(GL_TRIANGLE_FAN);

	int j = 0;

	for (int i = 0; i < 11; i++){
		glVertex2f(ska1[j], 1000 - ska1[j + 1]);
		j = j + 2;
	}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 15; i++){
		glVertex2f(ska2[j], 1000 - ska2[j + 1]);
		j = j + 2;
	}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 10; i++){
		glVertex2f(ska3[j], 1000 - ska3[j + 1]);
		j = j + 2;
	}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 10; i++){
		glVertex2f(ska4[j], 1000 - ska4[j + 1]);
		j = j + 2;
	}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);

	j = 0;

	for (int i = 0; i < 7; i++){
		glVertex2f(ska5[j], 1000 - ska5[j + 1]);
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
	glColor3ub(255, 0, 0);
	head();
	pahakanan();
	pahakiri();
	sayapkiri();
	sayapkanan();
	punggung();
	tail();
	legs();
	glColor3ub(255, 215, 0);
	eye();
	glFlush();
}

//Inisialisasi OpenGL
void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 800, 0, 1000, -2, 2);
	glEnable(GL_COLOR_MATERIAL);
}



int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 1000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Blood Dragon");
	Initialize();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
