#include "Bud_Light.h"

Bud_Light::Bud_Light(std::string name) {
	this->name = name;
	this->health = 75;
	this->hp = 5;
}

void Bud_Light::loseHealth(int hit) {
	this->health -= hit;
	if (this->health < 0);
	{
		this->health = 0;
	}
}

int Bud_Light::attack() {
	return this->hp;
}


std::string Bud_Light::getName() {
	return this->name;
}

int Bud_Light::getHealth() {
	return this->health;
}