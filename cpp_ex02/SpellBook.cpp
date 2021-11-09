#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void	SpellBook::learnSpell(ASpell * spell)
{
	std::vector<ASpell*>::iterator	it = this->spellbook.begin();
	while (it != this->spellbook.end())
	{
		if ((*it)->getName() == spell->getName())
			return ;	
		it++;
	}
	this->spellbook.push_back(spell);
}

void	SpellBook::forgetSpell(std::string const & spell)
{
	std::vector<ASpell*>::iterator	it = this->spellbook.begin();
	while (it != this->spellbook.end())
	{
		if ((*it)->getName() == spell)
		{
			this->spellbook.erase(it);
			return ;
		}
		it++;
	}
}

ASpell* SpellBook::createSpell(std::string const & spell)
{
	std::vector<ASpell*>::iterator	it = this->spellbook.begin();
	while (it != this->spellbook.end())
	{
		if ((*it)->getName() == spell)
		{
			return (*it)->clone();
		}
		it++;
	}
	return NULL;	
}