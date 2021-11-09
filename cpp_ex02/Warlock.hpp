#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class ATarget;
class Warlock {
	private:
		std::string	_name;
		std::string	_title;
		SpellBook spellbook;
		Warlock(Warlock const &);
		Warlock();
		Warlock & operator=(Warlock const &);
	public:
		std::string const &getName() const;
		std::string const &getTitle() const;
		void	setTitle(std::string const &);
		Warlock(std::string name, std::string title);
		~Warlock();
		void	introduce() const;
		void	learnSpell(ASpell *);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, ATarget &);
};