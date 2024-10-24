#include "SuperStarStrategy.h"
#include <iostream>

SuperStarStrategy::SuperStarStrategy()
	: IFightStrategy()
{
}

SuperStarStrategy::~SuperStarStrategy()
{
}

void SuperStarStrategy::fight()
{
	std::cout << "fight: i can kill everyone, now" << std::endl;
}
