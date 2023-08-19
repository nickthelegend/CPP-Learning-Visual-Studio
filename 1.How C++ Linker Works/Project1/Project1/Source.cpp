#include <iostream>
#include "Header.h"



int Multiply(int a,int b) {

	Log("Multiply");


	//Step 3 is to use it.
	return a * b;

}



int main() {

	int result = Multiply(5, 7);
	return 0;
}