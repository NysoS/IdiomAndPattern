#include "StrategyContext.h"
#include "IStrategy.h"

StrategyContext::StrategyContext()
	: m_strategy(nullptr)
{
}

StrategyContext::~StrategyContext()
{
	if (m_strategy != nullptr)
	{
		delete m_strategy;
		m_strategy = nullptr;
	}
}

void StrategyContext::setStrategy(IStrategy* strategy)
{
	m_strategy = strategy;
}

void StrategyContext::executeStrategy()
{
	if (m_strategy)
	{
		m_strategy->execute();
	}
}
