#include "BrickWall.hpp"

BrickWall::BrickWall()
{
	this->_type = "Inconspicuous Red-brick Wall";
}

ATarget * BrickWall::clone() const
{
	return new BrickWall();
}