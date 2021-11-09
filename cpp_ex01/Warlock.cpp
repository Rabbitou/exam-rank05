#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
{
	this->_name = name;
	setTitle(title);
	std::cout << this->getName() << ": This looks like another boring day.\n";
}

std::string const & Warlock::getName() const
{
	return this->_name;
}

std::string const &Warlock::getTitle() const
{
	return this->_title;
}

void	Warlock::setTitle(std::string const & title)
{
	this->_title = title;
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!\n";
}

void	Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!\n";
}

void	Warlock::learnSpell(ASpell * spell)
{
	std::vector<ASpell*>::iterator	it = spellbook.begin();
	while (it != spellbook.end())
	{
		if ((*it)->getName() == spell->getName())
			return ;	
		it++;
	}
	spellbook.push_back(spell);
}

void	Warlock::forgetSpell(std::string spell)
{
	std::vector<ASpell*>::iterator	it = spellbook.begin();
	while (it != spellbook.end())
	{
		if ((*it)->getName() == spell)
		{
			spellbook.erase(it);
			return ;
		}
		it++;
	}
}

void	Warlock::launchSpell(std::string spell, ATarget & target)
{
	std::vector<ASpell*>::iterator	it = spellbook.begin();
	while (it != spellbook.end())
	{
		if ((*it)->getName() == spell)
		{
			(*it)->launch(target);
			return;
		}
		it++;
	}	
}