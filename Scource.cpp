#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Position {
	float x;
	float y;
};
//--------------------*-----Player--------*----------------------------------//
class Player {
private:
	string name = "Player";
	float health{ 100.0 };
	Position position{ 0.0, 0.0 };
	float damage{ 10.0 };
	float luck{ 1.0 };
public:
	Player(string new_name): name(new_name)
	{ }

	friend class Game;
};
//--------------------*-----Game----------*----------------------------------//
class Game {
private:
	Player player;
	int level = 0;
	vector<int> floor{ NULL };
public:
	Game(string new_name, int new_level): 
		player(new_name), level(new_level)
	{ }
};
//--------------------*-----Monster-------*----------------------------------//
class Monster {
private:
	int level{ 0 };
public:
	Monster(int new_level): level(new_level) 
	{ }
};
//--------------------*-----Map-----------*----------------------------------//
class Map {
private:
	int level{ 0 };
public:
	Map(int new_level): level(new_level)
	{ }
};
//---------------------------------------------------------------------------//
int main() {

}