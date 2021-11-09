#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <vector>
#include "ASpell.hpp"

class SpellBook {
	private:
		std::vector<ASpell*>	spellbook;
		SpellBook(SpellBook const &);
		SpellBook & operator=(SpellBook const &);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
		
};

#endif