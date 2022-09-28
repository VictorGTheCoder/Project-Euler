#include <string.h>
#include <math.h>
#include <unistd.h>
#include <stdio.h>


float A,B,C;
float x,y,z;
float cubeWidth = 10;
int width = 160;
int height = 44;
float zBuffer[160 * 44];
char buffer[160 * 44];
int background = ' ';
float speed = 0.5;
float K1 = 40;
int distanceFromCam = 60;
float ooz;
int xp, yp;
int idx;

float calculateX(int i, int j, int k)
{
    return  j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
            j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
}

float calculateY(int i, int j, int k)
{
    return  j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) +
            k * cos(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k)
{
    return  k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

void calculateSurface(float cubeX, float cubeY, float cubeZ, int ch)
{
    x = calculateX(cubeX, cubeY, cubeZ);
    y = calculateY(cubeX, cubeY, cubeZ);
    z = calculateZ(cubeX, cubeY, cubeZ) + distanceFromCam;

    ooz = 1 / z;

    xp = (int)(width / 2 + K1 * ooz * x * 2);
    yp = (int)(height / 2 + K1 * ooz * y);

    idx = xp + yp * width;
    if (idx>= 0 && idx < width * height)
    {
        if (ooz > zBuffer[idx])
        {
            zBuffer[idx] = ooz;
            buffer[idx] = ch; 
        }
        
    }    
}
int main(int argc, char const *argv[])
{
    printf("\x1b[2j");
    while (1)
    {
        memset(buffer, background, width * height);
        memset(zBuffer, 0, width * height * 4);
        for (float cubeX = 0; cubeX < cubeWidth; cubeX += speed)
        {
            for (float cubeY = 0; cubeY < cubeWidth; cubeY += speed)
            {
                calculateSurface(cubeX, cubeY, -cubeWidth, '#');
            }
        }
        printf("\x1b[H");
        for (int k = 0; k < width * height; k++)
        {
            putchar(k * width ? buffer[k] : 10);
        }
        A += 0.5;
        B += 0.5;
    }
    return 0;
}
