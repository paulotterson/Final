#include "PBR.h"

PBR::PBR(std::string name) {
	this->name = name;
	this->health = 500;
	this->hp = 25;
}

 void PBR::loseHealth(int hit) {
	this->health -= hit;
	if (this->health < 0);
	{
		this->health = 0;
	}
}

int PBR::attack() {
	return this->hp;
}

std::string PBR::getName() {
	return this->name;
}

int PBR::getHealth() {
	return this->health;
}