#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;
class ATarget {
	protected:
		std::string _type;
	public:
		ATarget();
		~ATarget();
		ATarget(ATarget const &);
		ATarget(std::string type);
		ATarget & operator=(ATarget const &);
		std::string const & getType() const;
		virtual ATarget * clone() const = 0;
		void	getHitBySpell(ASpell const &) const;
};

#endif

