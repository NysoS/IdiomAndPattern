#pragma once

class IJumpStrategy;
class IFightStrategy;

class ContextAbilities
{
public:
	ContextAbilities() = default;
	~ContextAbilities();

	void setJumpStrategy(IJumpStrategy* strategy);
	void jump();

	void setFightStrategy(IFightStrategy* strategy);
	void fight();

private:
	IJumpStrategy* m_jumpStrategy;
	IFightStrategy* m_fightStrategy;
};