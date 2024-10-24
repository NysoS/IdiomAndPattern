#pragma once

#include "IFightStrategy.h"

class SuperStarStrategy : public IFightStrategy
{
public:
	SuperStarStrategy();
	~SuperStarStrategy();

	void fight() override;
};