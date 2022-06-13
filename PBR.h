#pragma once
#include <string>


class PBR

{
public:
	PBR(std::string Best);
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

