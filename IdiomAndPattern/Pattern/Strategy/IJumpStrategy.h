#pragma once

class IJumpStrategy
{
public:
	virtual ~IJumpStrategy() = default;
	virtual void jump() = 0;
};