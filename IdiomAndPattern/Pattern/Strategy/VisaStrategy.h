#pragma once

#include "IStrategy.h"

class VisaStrategy : public IStrategy
{
public:
	VisaStrategy();
	~VisaStrategy();

	void execute() override;
};
