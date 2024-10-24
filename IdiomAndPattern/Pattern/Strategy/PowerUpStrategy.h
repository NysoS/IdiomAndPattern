#pragma once

#include "IJumpStrategy.h"

class PowerUpStrategy : public IJumpStrategy
{
public:
	PowerUpStrategy();
	~PowerUpStrategy();

	void jump() override;
};