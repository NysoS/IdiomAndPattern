#pragma once

#include "BaseCharacter.h"

template<typename... Behaviors>
class Character : public Behaviors..., BaseCharacter
{
public:
	Character() 
		: BaseCharacter()
	{}

	~Character()
	{}
};