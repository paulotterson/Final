#include "Busch.h"

Busch::Busch(std::string name) {
	this->name = name;
	this->health = 250;
	this->hp = 8;
}

void Busch::loseHealth(int hit) {
	this->health -= hit;
	if (this->health < 0);
	{
		this->health = 0;
	}
}

int Busch::attack() {
	return this->hp;
}

std::string Busch::getName() {
	return this->name;
}

int Busch::getHealth() {
	return this->health;
}
