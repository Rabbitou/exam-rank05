#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell {
	protected:
		std::string _name;
		std::string _effects;
	public:
		ASpell();
		~ASpell();
		ASpell(ASpell const &);
		ASpell(std::string name, std::string effects);
		ASpell & operator=(ASpell const &);
		std::string getName() const;
		std::string getEffects() const;
		void launch(ATarget const &);
		virtual ASpell * clone() const = 0;
};

#endif