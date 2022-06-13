#pragma once
#include <string>


class Busch

{
public:
	Busch(std::string NoGood);
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

