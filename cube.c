#include <math.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

float A, B, C;

float cubeWidth = 20;
int width = 160, height = 44;
float zBuffer[160 * 44];
char buffer[160 * 44];
int backgroundASCIICode = '.';
int distanceFromCam = 100;
float horizontalOffset;
float K1 = 40;

float incrementSpeed = 0.6;

float x, y, z;
float ooz;
int xp, yp;
int idx;

float calculateX(int i, int j, intk) {
    return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
}

float calculateY(int i, int j, int k) {
    
}