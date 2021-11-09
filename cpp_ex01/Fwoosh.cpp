#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
	this->_name = "Fwoosh";
	this->_effects = "fwooshed";
}

ASpell * Fwoosh::clone() const
{
	return new Fwoosh();
}