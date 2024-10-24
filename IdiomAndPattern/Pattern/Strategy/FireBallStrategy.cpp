#include "FireBallStrategy.h"
#include <iostream>

FireBallStrategy::FireBallStrategy()
	: IFightStrategy()
{
}

FireBallStrategy::~FireBallStrategy()
{
}

void FireBallStrategy::fight()
{
	std::cout << "fight: i can lauch fireball, now" << std::endl;
}
