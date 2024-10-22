#pragma once

class IStrategy
{
public:
	IStrategy() = default;
	virtual ~IStrategy() = default;

	virtual void execute() {};
};