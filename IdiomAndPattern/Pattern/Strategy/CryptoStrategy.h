#pragma once

#include "IStrategy.h"

class CryptoStrategy : public IStrategy
{
public:
	CryptoStrategy() = default;
	~CryptoStrategy() = default;

	void execute() override;
};