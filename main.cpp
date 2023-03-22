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

int main()
{
    std::cout << "-------------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "invert() " << std::endl;
    invert("image1.pgm");//Task A
    std::cout << "invert() completed" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------" << std::endl;

    std::cout << "invert_half() " << std::endl;
    invert_half("inImage.pgm");
    std::cout << "invert_half() completed" << std::endl;
        std::cout << "-------------------------------------------------------------------------------------------------------------" << std::endl;

    std::cout << "box() " << std::endl;
    box("image2.pgm");
    std::cout << "-> box() completed" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------" << std::endl;

    std::cout << "frame() " << std::endl;
    frame("image1.pgm");
    std::cout << "-> frame() completed" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------" << std::endl;

    std::cout << "scale() " << std::endl;
    scale("inImage.pgm");
    std::cout << "scale() completed" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------" << std::endl;

    std::cout << "pixelate() " << std::endl;
    pixelate("inImage.pgm");
    std::cout << "pixelate() completed" << std::endl;
    std::cout << "-------------------------------------------------------------------------------------------------------------" << std::endl;

    std::cout << "Everything has finished compiling" << std::endl;

    return 0;
}