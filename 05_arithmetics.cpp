#include <iostream>

/*
arithmetic operators:
return the results of a specific arithmetic operation (+ - * /)
code also follows pemdas (parathensis, exponents, multiply, division, add, subtract)
*/

int main6() {
   int students = 20;

   students = students + 1;
   students+=1;
   students++;

   students = students - 2;
   students-=2;
   students--;

   students = students * 2;
   students*=2;
   
   students = students / 2;
   students/=2;

   std::cout << students;

   int remainder = students % 3;
   std::cout << remainder;

   return 0;
}