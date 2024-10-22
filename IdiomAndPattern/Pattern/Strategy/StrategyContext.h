#pragma once
#include "IStrategy.h"

class StrategyContext
{
public:
	StrategyContext();
	~StrategyContext();

	void setStrategy(IStrategy* strategy);
	void executeStrategy();

private:
	IStrategy* m_strategy;
};