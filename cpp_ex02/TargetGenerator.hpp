#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <vector>
#include "ATarget.hpp"

class TargetGenerator {
	private:
		std::vector<ATarget*>	t_list;
		TargetGenerator(TargetGenerator &);
		TargetGenerator & operator=(TargetGenerator const &);
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
};

#endif