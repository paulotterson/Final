#pragma once
#include <string>


class Bud_Light

{
public:
	Bud_Light(std::string Awful);
	void loseHealth(int hit);
	int attack();
	std::string ht;
	std::string getName();
	int getHealth();
private:
	std::string name;
	int health;
protected:
	
	int hp;
};

