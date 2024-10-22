#include "Pattern/Strategy/StrategyApplication.h"
#include "CoreApplication.h"

#include <iostream>

int main()
{
	CoreApplication<StrategyApplication> app;
	app.execute();

	return 0;
}