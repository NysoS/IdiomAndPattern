#pragma once

class IFightStrategy
{
public:
	virtual ~IFightStrategy() = default;
	virtual void fight() = 0;
};