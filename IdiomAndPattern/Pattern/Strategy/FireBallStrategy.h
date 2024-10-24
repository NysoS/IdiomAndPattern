#pragma once

#include "IFightStrategy.h"

class FireBallStrategy : public IFightStrategy
{
public:
	FireBallStrategy();
	~FireBallStrategy();

	void fight() override;
};