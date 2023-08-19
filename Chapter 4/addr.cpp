/* 2018 Fundamentals of C++ Programming 
*  Exercise 4.1
*  addr.cpp
*/

#include <iostream>

int main() {
    int value1, value2, sum;
    std::cout << "Please enter two integer values: ";
    std::cin >> value1 >> value2;
    sum = value1 + value2;
    std::cout << value1 << " + " << value2 << " = " << sum << '\n';
}