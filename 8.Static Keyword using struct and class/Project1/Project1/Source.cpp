#include <iostream>

struct Entity {

	static int x;
	static int y;


	void Print() {
		std::cout << x << "," << y << std::endl;
	}

}; 



////basic struct


////Declaring the static variables again in the global scope


int Entity::x;
int Entity::y;



int main() {
	Entity e1;
	Entity e2;



	e1.x = 2;
	e1.y = 3;

	//e2 = { 5,3 };    ///used this before but not now
	e2.x = 5;
	e2.y = 3;

	e1.Print();
	e2.Print();
	


	return 0;
}




/////Before without static keyword
/*
Output:

2,3
5,3




*/


/*



After: 

Outuput:
5,8
5,8
*/


///Static Memeber is same for all the instance


///in other words Static attribute is same for all objects