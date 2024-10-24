#include "StrategyApplication.h"
#include "ContextAbilities.h"
#include "PowerUpStrategy.h"
#include "SuperStarStrategy.h"
#include "FireBallStrategy.h"

#include <memory>
#include <stdexcept>
#include <iostream>

void StrategyApplication::execute()
{
	using Mario = ContextAbilities;
	Mario mario;

	std::cout << "Mario with no abilities \n" << std::endl;
	mario.jump();
	mario.fight();
	std::cout << "\n ---- \n" << std::endl;

	//Mario catch powerUp//
	std::cout << "Mario catch powerUp \n" << std::endl;
	mario.setJumpStrategy(new PowerUpStrategy());
	mario.jump();
	mario.fight();
	std::cout << "\n ---- \n" << std::endl;

	//Mario catch fireBall Flower//
	std::cout << "Mario catch fireball Flower \n" << std::endl;
	mario.setFightStrategy(new FireBallStrategy());
	mario.jump();
	mario.fight();
	std::cout << "\n ---- \n" << std::endl;

	//Mario hit by enemy//
	std::cout << "Mario hit by enemy \n" << std::endl;
	mario.setFightStrategy(nullptr);
	mario.setJumpStrategy(nullptr);
	mario.jump();
	mario.fight();
	std::cout << "\n ---- \n" << std::endl;

	//Mario catch superStar//
	std::cout << "Mario catch superStar \n" << std::endl;
	mario.setFightStrategy(new SuperStarStrategy());
	mario.jump();
	mario.fight();
	std::cout << "\n ---- \n" << std::endl;
}