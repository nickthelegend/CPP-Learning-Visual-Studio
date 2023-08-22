#include <iostream>
#define LOG(x) std::cout<<x<<std::endl;
int Increment(int &num) 
{
	return num++;



}




int main() {
	int number = 10;
	Increment(number);
	LOG(number);



	int somenumber = 5;
	int sad = somenumber;
	sad = sad++;
	LOG(sad);
}