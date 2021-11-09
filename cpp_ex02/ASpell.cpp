#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::~ASpell() {}

ASpell::ASpell(ASpell const & src)
{
	*this = src;
}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	this->_name = rhs._name;
	this->_effects = rhs._effects;
	return *this;
}

ASpell::ASpell(std::string name, std::string effects)
{
	this->_name = name;
	this->_effects = effects;
}

std::string	ASpell::getEffects() const
{
	return this->_effects;
}

std::string	ASpell::getName() const
{
	return this->_name;
}

void	ASpell::launch(ATarget const & target)
{
	target.getHitBySpell(*this);
}