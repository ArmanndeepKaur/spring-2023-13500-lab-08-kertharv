/** 
* Spring 2023 - Lab 08
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include <iostream>
#include "imageio.h"
#include "funcs.h"
#include <cstdlib>
#include <cmath>

//Task A
void invert(std::string filename)
{
    int height, width;
    int image[MAX_H][MAX_W];
    readImage(filename, image, height, width);
    for(int row = 0; row < MAX_H; row++)
    {
        for(int col = 0; col < MAX_W; col++)
        {
            image[row][col] = abs(255 - image[row][col]);
        }
    }

    writeImage("taskA.pgm", image, height, width);
}


//Task B
void invert_half(std::string filename)
{
    int height, width;
    int image[MAX_H][MAX_W];
    readImage(filename, image, height, width);

    for(int row = 0; row < MAX_H; row++)
    {
        for(int col = width/2; col < MAX_W; col++)
        {
            image[row][col] = abs(255 - image[row][col]);
        }
    }

     writeImage("taskB.pgm", image, height, width);
}


//Task C
void box(std::string filename)
{
    int height, width;
    int image[MAX_H][MAX_W];
    readImage(filename, image, height, width);

    for(int row = height/4; row < height * 3/4; row++)
    {
        for(int col = width/4; col < width * 3/4; col++)
        {
            image[row][col] = 255;
        }
    }
    writeImage("taskC.pgm", image, height, width);
}


//Task D
void frame(std::string filename)
{
    int height, width;
    int image[MAX_H][MAX_W];
    readImage(filename, image, height, width);

    for(int row = height/4; row < height * 3/4; row++)
    {
        for(int col = width/4; col < width * 3/4; col++)
        {
            if(row == height / 4 || row == height * 3/4 - 1 || col == width/4 || col == width * 3/4 - 1)
            {
                image[row][col] = 255;
            }
        }

    }
    writeImage("taskD.pgm", image, height, width);
}

//Task E
void scale(std::string filename)
{
    int height, width;
    int image[MAX_H][MAX_W];
    int outimage[MAX_H][MAX_W];
    readImage(filename, image, height, width);

    for(int row = 0; row < height; row++)
    {
        for(int col = 0; col < width; col++)
        {
            outimage[row * 2][col * 2] = image[row][col];
            outimage[row * 2][col * 2 + 1] = image[row][col];
            outimage[row * 2 + 1][col * 2] = image[row][col];
            outimage[row * 2 + 1][col * 2 + 1] = image[row][col];
        }
    }
    height = height * 2;
    width = width * 2;
    writeImage("taskE.pgm", outimage, height, width);
}

//Task F
void pixelate(std::string filename)
{
    
    int height, width, averagedSquare;
    int image[MAX_H][MAX_W];
    readImage(filename, image, height, width);

    for(int row = 0; row < height; row+=2)
    {
        for(int col = 0; col < width; col+=2)
        {
            averagedSquare = round((image[row * 2][col * 2] + image[row * 2][col * 2 + 1] + image[row * 2 + 1][col * 2] + image[row * 2 + 1][col * 2 + 1])/ 4);
            image[row * 2][col * 2] = averagedSquare;
            image[row * 2][col * 2 + 1] = averagedSquare;
            image[row * 2 + 1][col * 2] = averagedSquare;
            image[row * 2 + 1][col * 2 + 1] = averagedSquare;
        }
    }


    writeImage("taskF.pgm", image, height, width);

}