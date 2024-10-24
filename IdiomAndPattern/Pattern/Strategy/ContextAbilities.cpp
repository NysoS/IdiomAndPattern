#include "ContextAbilities.h"
#include "IJumpStrategy.h"
#include "IFightStrategy.h"
#include <iostream>

ContextAbilities::~ContextAbilities()
{
	if (m_jumpStrategy != nullptr)
	{
		delete m_jumpStrategy;
		m_jumpStrategy = nullptr;
	}

	if (m_fightStrategy != nullptr)
	{
		delete m_fightStrategy;
		m_fightStrategy = nullptr;
	}
}

void ContextAbilities::setJumpStrategy(IJumpStrategy* strategy)
{
	if (m_jumpStrategy != nullptr) 
	{
		delete m_jumpStrategy;
	}

	m_jumpStrategy = strategy;
}

void ContextAbilities::jump()
{
	if (m_jumpStrategy)
	{
		m_jumpStrategy->jump();
	}
	else {
		std::cout << "jump: jumping" << std::endl;
	}
}

void ContextAbilities::setFightStrategy(IFightStrategy* strategy)
{
	if (m_fightStrategy != nullptr)
	{
		delete m_fightStrategy;
	}

	m_fightStrategy = strategy;
}

void ContextAbilities::fight()
{
	if (m_fightStrategy)
	{
		m_fightStrategy->fight();
	}
	else {
		std::cout << "fight: no fight capacity" << std::endl;
	}
}
