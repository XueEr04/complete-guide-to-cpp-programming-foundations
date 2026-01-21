// Complete Guide to C++ Programming Foundations
// Exercise 01_04
// Functions, by Eduardo Corpeño 

#include <iostream>

// Function declaration
int add(int a, int b){
    return a + b;
}

int doubleNumber(int num){
    return num * 2;
}

void printMessage(){
    std::cout << "Understand void return type: " << std::endl;
}

int main(){
    int result = add(5, 3);
    int result02 = doubleNumber(5);
    std::cout << "The sum is: " << result << std::endl;
    std::cout << "The double number is: " << result02 << std::endl;
    return 0;
}