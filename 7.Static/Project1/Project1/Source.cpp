#include <iostream>
//extern int somevariable = 10;   ///extern means it will specify to use the variable that is declared in the other file other than this Source.cpp file


//int main() {

	//std::cout << somevariable << std::endl;


//}


void exampleFunction() {
    int count = 0; // Static variable declaration
    count++;
    std::cout << "Count: " << count << std::endl;
}

int main() {
    exampleFunction(); // Count: 1
    exampleFunction(); // Count: 2
    exampleFunction(); // Count: 3
    return 0;
}