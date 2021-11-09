#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::~ATarget() {}

ATarget::ATarget(std::string type)
{
	this->_type = type;
}

ATarget::ATarget(ATarget const & src)
{
	*this = src;
}

std::string const & ATarget::getType() const
{
	return this->_type;
}

ATarget & ATarget::operator=(ATarget const & rhs)
{
	this->_type = rhs.getType();
	return *this;
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << this->getType() << " has been " << spell.getEffects() << "!\n";
}