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
