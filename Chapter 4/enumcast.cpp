/* 2018 Fundamentals of C++ Programming 
*  Exercise 4.3
*  enumcast.cpp
*/

#include <iostream>

int main() {
    enum class Color { Red, Orange, Yellow, Green, Blue, Violet };
    std::cout << static_cast<int>(Color::Orange) << " "
              << static_cast<int>(Color::Green) << '\n';
}