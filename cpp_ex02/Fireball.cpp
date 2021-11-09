#include "Fireball.hpp"

Fireball::Fireball()
{
	this->_name = "Fireball";
	this->_effects = "burnt to a crisp";
}

ASpell * Fireball::clone() const
{
	return new Fireball();
}