/* 2018 Fundamentals of C++ Programming 
*  Exercise 3.23
*  print an ascii table.cpp
*/

#include <iostream>

int main() {
    int count = 0;
    while (count <= 127) {
        std::cout << char(count) << '\n';
        count++;
    }
}