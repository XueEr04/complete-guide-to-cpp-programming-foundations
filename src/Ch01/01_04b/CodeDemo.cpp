// Complete Guide to C++ Programming Foundations
// Exercise 01_04
// Functions, by Eduardo Corpeño 

#include <iostream>

// Function declaration
int add(int a, int b){
    return a + b;
}

int main(){
    int result = add(5, 3);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}