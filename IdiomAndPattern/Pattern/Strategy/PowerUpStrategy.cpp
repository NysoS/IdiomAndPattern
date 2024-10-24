#include "PowerUpStrategy.h"
#include <iostream>

PowerUpStrategy::PowerUpStrategy()
	: IJumpStrategy()
{
}

PowerUpStrategy::~PowerUpStrategy()
{
}

void PowerUpStrategy::jump()
{
	std::cout << "jump: i can destroy blocks, now" << std::endl;
}
