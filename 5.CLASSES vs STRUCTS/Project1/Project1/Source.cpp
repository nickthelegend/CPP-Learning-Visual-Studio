#include <iostream>
#define LOG(x) std::cout<<x<<std::endl;

struct
	Player {

	//int x, y;
	//int speed;  ////Private member / attribute by default


//public: //visibility public
	int x, y;
	int speed;

};

void Move(Player& player, int xa, int ya) {


	player.x += xa * player.speed;
	player.y += ya * player.speed;
}

int main(){



	return 0;
}