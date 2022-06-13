#include "Miller.h"

Miller::Miller(std::string name) {
	this->name = name;
	this->health = 350;
	this->hp = 15;
}

void Miller::loseHealth(int hit) {
	this->health -= hit;
	if (this->health < 0);
	{
		this->health = 0;
	}
}

int Miller::attack() {
	return this->hp;
}

std::string Miller::getName() {
	return this->name;
}

int Miller::getHealth() {
	return this->health;
}