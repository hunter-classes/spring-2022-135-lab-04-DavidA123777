#include <iostream>
#include "tasks.h"
int main(){
int width = 5;
int height = 6;
//Task A
std::cout << "Task A making a box using a width of 5 and height of 6:" << std::endl;
box(5,6);
std::cout << "\n";

int width2 = 12;
int height2 = 8;
//Task B
std::cout << "Task B making a chekerboard pattern using a width of 12 and a height of 8:" << std::endl;
checkerboard(width2, height2);
std::cout << "\n";

int size = 6;
//Task C
std::cout << "Task C creating a cross with size length 6:" << std::endl;
cross(size);
int size2 = 10;
std::cout << "Task C creating a cross with size length 10:" << std::endl;
cross(size2);
std::cout << "\n";


int side_length = 5;
//Task D
std::cout << "Task D creating a lower triangle with side length of 5:" << std::endl;
lower(side_length);
int side_length2 = 10;
std::cout << "Task D creating a lower triangle with side length of 10:" << std::endl;
lower(side_length2);
std::cout << std::endl;






int side_length3 = 4;
//Task E
std::cout << "Task E creating an upper triangle with side length of 4:" << std::endl;
upper(side_length3);
int side_length4 = 8;
std::cout << "Task E creating an upper triangle with side length of 8:" << std::endl;
upper(side_length4);
std::cout << std::endl;



int width3 = 8;
int height4 = 4;
//Task F
std::cout << "Task F creating an upside down trapezoid with a width of 8 and a height of 4" << std::endl;
trapezoid(width3, height4);
std::cout << "\n";

int width5 = 6;
int height5 = 5;
std::cout << "Task F showing that my program works and outputs Impossible Shape if the height is too large relative to the width using 6 as the width and 5 as the height: \n" << std::endl;
trapezoid(width5, height5);
std::cout << "\n";

//Task G
int widthG = 12;
int heightG = 12;
std::cout << "Task G creating a 3*3 checkerboard using a width of 12 and a height of 12: \n";
checkerboard3(widthG, heightG);
std::cout << "\n";
widthG = 13;
heightG = 13;
std::cout << "Task G creating a 3*3 checkerboard using a width of 13 and a height of 13: \n";
checkerboard3(widthG, heightG);
std::cout << "\n";




  return 0;
}
