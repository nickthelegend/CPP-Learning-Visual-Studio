#include <iostream>

void Log(const char* message) {

	std::cout << "Logging Message" <<std::endl;

}

int Multiply(int a,int b) {

	Log("Multiply");
	return a * b;

}



int main() {

	int result = Multiply(5, 7);
	return 0;
}