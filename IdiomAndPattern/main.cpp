#include "CoreApplication.h"
#include "Pattern/Strategy/StrategyApplication.h"
#include "Pattern/ModernStrategy/MordernStrategyApplication.h"

#include <iostream>

int main()
{
	CoreApplication<ModernStrategyApplication> app;
	app.execute();

	return 0;
}