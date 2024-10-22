#pragma once

#include "IStrategy.h"

class PaypalStrategy : public IStrategy
{
public:
	PaypalStrategy() = default;
	virtual ~PaypalStrategy() = default;

	void execute() override;
};