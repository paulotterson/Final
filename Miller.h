#pragma once
#include <string>


class Miller

{
public:
	Miller(std::string Bad);
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

