// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream> //include the libraries we'll use
                    //a pre-processor directive
                    //<iostream> is a part of the C++ standard library
                    //contains objects and functions to print text to the screen 
                    //and to receive text from the keyboard
                    //preprocessor directives do not end with a semicolon

int main(){         //main entry point of our programme,
                    //a function that is executed by default
                    //'main' function must return an integer denoted by 
                    //the 'int' keyword
                    //eg. int <name of the function> <list of parameters>
                    //the main function may receive either nothing or a set of strings
                    //that come from the command line,
                    //just the way you run command with arguments.
                    //In this case, we'll use an empty list of parameters
                    //which is enclosed by parentheses.

//The body of the function is a block of code and blocks are delimited by curly brackets, symbolizing the beginning and end of the block.
//using an object from the iostream file, which is a member of the standard library denoted by std. This membership is represented by the scope resolution operator, double colon. The object is called 'cout', which is short for character output. This represents the terminal and we must send some text to it. 
//We do that with the left bound insertion operator or double less than characters. To the right of it, we enter whatever we what to send to the object at the left, and we may use the operator consecutively. Insert your message here. After that, I'll send a new line character, which is available by another standard library symbol 'endl', which is short for end line.

    std::cout << "Hi there" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;

//We finish almost every line of code with a semicolon, but there are exceptions. For example, the lines that end in a closing curly bracket. 
//Finally, since 'main()' is a function that returns an integer, we'll return zero with the 'return' keyword. 
//The reason I returned zero is because zero is traditionally used to mean that no errors came in the program. Other values useally represent error codes, which you're expected todetail in your documentation. 

//The debugger prints the messages below the output, reporting that execution is done. But it's difficult for me to tell where my output ends and where the debugger's exit message begins.
//Hence, right before returning, print out two end line characters to seperate my output from the debugger's exit message. 
}




//A C++ program is composed of several source files that contain statements acting as intructions to perform tasks. These statements are organized in sequence inside functions. 
//Line 5: we have a compiler directive named include. Directives always start with a hash character and they tell the compiler about operations we want it to perform on the source code. In this case, we want the compiler to include the code of the header file <iostream>. This iostream header file is a library that contains objects and functions that will allows us to print data to the screen and read data from the keyboard. 
//In C++, every line of executable code must be a part of a function. Functions are blocks of code that perform specific tasks and can return values. Functions are defined with a return type, name and parameters.

//Line 12: we have a function named 'main'. Every C++ program must have a main function, because it is the starting point of the program. The word 'int' is the return type, and it means that the function will return an integer value. This is a requirement for the 'main' function. 
//The code inside the curly brackets following 'main' is the body of the function, where the program's instructions are executed. The curly brackets act as markers for the beginning and end of the function, but they are also used to delimit blocks of code in statements like if, else, and loops.

//Line 27: we have our first statement. All statements in C++ end with a semicolon. This is very important and it's usually a source of bugs for beginners. In this line, we use std::cout to send the string 'Hi there' to the standard output, which is typically the screen. The double less than operator is used to direct the string to std::cout. 
//std::endl is used to insert a new line character and flash the output buffer. It would be like hitting enter on the terminal.

//Line 29: std::cout is used again, but this time it's directing std::endl twice to insert two new line characters , creating a blank line. 

//Line 30: the return zero statement ends the main function. Returning zero typically indicates that the program has executed successfully. Non-zero values are usually used to identify an error. 



/*
#include <cstdio>

int main(){
    printf("Hey there \n");
    return 0;
}
*/

//Line 60: this directive includes the <cstdio> header file, which provides functionalities for C-style input and output operations. 
//Line 63: uses 'printf' function to print the string "Hey there" followed by a new line character encoded by \n. This is one of the most widely used escape sequences inside strings in C and C++.
//Pay attention to how we call functions in C++. We use the name of the funciton, followed by a list of arguments between parentheses. In this case, we are calling the 'printf' function sending one single argument, which is a string enclosed by double quotes. 



/*
#include <iostream>

int main(int argc, char* argv[]){
    std::cout << "Hi there" << std::endl;
    return 0;
}
*/

//Line 75-80: what we have here is a classic command line program that produces an executable just like the ones you may have used in the Linux or Windows command lines to make new directories, list files, change directories, or manipulate a Git repository. 
//Line 77: here we define the main function , but this time it takes two arguments -- 'int argc' and 'char* argv[]'. Here, 'argc' is an integer that represents the number of command line arguments passed to the program, and 'argv' is an array of C-style strings representing those arguments. The command line interface will write into these arguments according to the arguments you type in the command line after the executable name. 