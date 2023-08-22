#include <iostream>

#define LOG(x) std::cout << x << std::endl


int main() {
	int num = 8;
	//void* ptr = nullptr; ///this is a null pointer
	int* ptr = &num; //this ptr variable will store a adress of num;
	*ptr = 10;
	LOG(num); //num is changed to 10 cause you know *ptr holds the memory address of num you dereference it and put number

	/////Heapp memory

	////First Step is to allocate memory

	char* buffer = new char[8]; ////allocates 8 bytes of memory in the address 
	memset(buffer, 0, 8); ///this sets all the memory in the address of the 8 bytes to 0 int;

	char** ptrToBuffer = &buffer;


	delete[] buffer;
	std::cin.get();




}