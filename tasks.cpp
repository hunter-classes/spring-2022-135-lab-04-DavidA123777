#include <iostream>
#include <cstring>
#include "tasks.h"

void box(int width, int height){
  std::string a = "";
  std::cout << "Shape:" << std::endl;
  for (int x = 0; x < width; x++){
    a = a + "*";
  }
  for (int i = 0; i < height; i++){
    std::cout << a << std::endl;

  }
}


void checkerboard(int width, int height){
  std::string a = "";
  std::string b = "";
  std::cout << "Shape: " << std::endl;
  for (int x = 0; x < width; x++){
  if (x % 2 == 0){
  a = a + " ";

  }
  else if (x % 2 == 1){
    a = a + "*";
  }}

  for (int x = 0; x < width; x++){
  if (x % 2 == 0){
    b = b + "*";

  }
  else if (x % 2 == 1){
    b = b + " ";
  }}

  for (int i = 0; i < height; i++){
    if (i % 2 == 0){
      std::cout << b << std::endl;
    }
    if (i % 2 == 1){
      std::cout << a << std::endl;
    }
  }
}

void cross(int size_length){

  int b = size_length;

  int c = 0;
  for (int row = 1; row <= b; row++){

    for (int d = 1; d <= b; d++){
      if ((d == row) || (d == b + 1 - row)){
        std::cout << "*";
      }
      else{
        std::cout << " ";
      }

    }
std::cout << "\n";
  }
}

void lower(int side_length){
   int a = side_length;
   for (int row = 1; row <= a; row++){



     for (int b = 1; b <= a; b++ ){
       if ((b <= row)){
         std::cout << "*";
       }
       else{
         std::cout << " ";
       }
     }
     std::cout << "\n";
   }

}

void upper(int side_length){
   int a = side_length;
   for (int row = 1; row <= a; row++){



     for (int b = 1; b <= a; b++ ){
       if ((b >= row)){
         std::cout << "*";
       }
       else{
         std::cout << " ";
       }
     }
     std::cout << "\n";
   }

}


void trapezoid(int width, int height){
  int spaces = 0;
  int stars = width;
  for (int i = 0; i < height; i++){
    spaces += 1;
    stars -= 2;

      }
  if (stars < 0){
    std::cout << "Impossible Shape!";
    return;
  }
  stars = width;
  spaces = 0;

  for (int i = 0; i < height; i++){

    for (int x = 0; x < width; x++){
      if (x == spaces){
        for (int y = 0; y < stars; y++){
            std::cout << "*";
        }
      }
      else{
        std::cout << " ";
      }

      }
      spaces += 1;
      stars -= 2;

std::cout << "\n";
    }

  }








 void checkerboard3(int width, int height){
   int stars = 0;

   int spaces = 0;
   for (int row = 0; row < height; row++){




     for (int column = 0; column < width; column++){

       if ((column % 6 < 3 && row % 6 < 3) || (column % 6 >= 3 && row % 6 >= 3)){


         if (stars < 3){
           std::cout << "*";
         }

         stars = stars + 1;
         if (stars == 3){
           stars = 0;
         }
       }
       else{

         if (spaces < 3){
           std::cout << " ";
         }

         spaces = spaces + 1;

         if (spaces == 3){
           spaces = 0;
         }
       }

     }
      std::cout << "\n";
}





     }
