#include "MordernStrategyApplication.h"
#include "StrategyGenerated.h"
#include "Character.h"

#include <iostream>

MakeStrategy(IJumpStrategy, jump)
MakeStrategy(IFightStrategy, fight)

BeginBehavior(PowerUp, IJumpStrategy, jump)
{
	std::cout << "jump: I can destroy blocks, now" << std::endl;
}
EndBehavior()

BeginBehavior(FireBall, IFightStrategy, fight)
{
	std::cout << "fight: I can lauch fire ball, now" << std::endl;
}
EndBehavior()

BeginBehavior(SuperStar, IFightStrategy, fight)
{
	std::cout << "fight: I can kill everyone, now" << std::endl;
}
EndBehavior()

void ModernStrategyApplication::execute()
{
	//Mario without abilities//
	std::cout << "Mario without abilities \n" << std::endl;
	using Mario = Character<>;
	Mario mario;
	//mario.jump();		//Error at compile time
	//mario.fight();	//Error at compile time
	std::cout << "\n ---- \n" << std::endl;

	//Mario with powerUp//
	std::cout << "Mario catch powerUp \n" << std::endl;
	using MarioWithPowerUp = Character<PowerUp>;
	MarioWithPowerUp marioWithPowerUp;
	marioWithPowerUp.jump();
	//marioWithPowerUp.fight()	//Errpr at compile time
	std::cout << "\n ---- \n" << std::endl;

	//Mario with powerUp & Fireball//
	std::cout << "Mario catch fireball Flower \n" << std::endl;
	using MarioWithPowerUpAndFireBall = Character<PowerUp, FireBall>;
	MarioWithPowerUpAndFireBall marioWithPowerUpAndFireBall;
	marioWithPowerUp.jump();
	marioWithPowerUpAndFireBall.fight();
	std::cout << "\n ---- \n" << std::endl;

	//Mario hit by enemy//
	std::cout << "Mario hit by enemy \n" << std::endl;
	//mario.jump();		//Error at compile time
	//mario.fight();	//Error at compile time
	std::cout << "\n ---- \n" << std::endl;
	
	//Mario catch superStar//
	std::cout << "Mario catch superStar \n" << std::endl;
	using MarioWithSuperStar = Character<SuperStar>;
	MarioWithSuperStar marioWithSuperStar;
	//marioWithSuperStar.jump()		//Error at compile time
	marioWithSuperStar.fight();
	std::cout << "\n ---- \n" << std::endl;
}