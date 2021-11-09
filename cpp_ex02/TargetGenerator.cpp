#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget * target)
{
	std::vector<ATarget*>::iterator	it = this->t_list.begin();
	while (it != this->t_list.end())
	{
		if ((*it)->getType() == target->getType())
			return ;	
		it++;
	}
	this->t_list.push_back(target);
}

void	TargetGenerator::forgetTargetType(std::string const & target)
{
	std::vector<ATarget*>::iterator	it = this->t_list.begin();
	while (it != this->t_list.end())
	{
		if ((*it)->getType() == target)
		{
			this->t_list.erase(it);
			return ;
		}
		it++;
	}
}

ATarget* TargetGenerator::createTarget(std::string const & target)
{
	std::vector<ATarget*>::iterator	it = this->t_list.begin();
	while (it != this->t_list.end())
	{
		if ((*it)->getType() == target)
		{
			return (*it)->clone();
		}
		it++;
	}
	return NULL;	
}