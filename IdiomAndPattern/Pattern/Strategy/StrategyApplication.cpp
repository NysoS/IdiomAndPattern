#include "StrategyApplication.h"
#include "StrategyContext.h"
#include "StrategyActionType.h"
#include "VisaStrategy.h"
#include "PaypalStrategy.h"
#include "CryptoStrategy.h"

#include <memory>
#include <stdexcept>
#include <iostream>

void StrategyApplication::execute()
{
	StrategyContext context;
	StrategyActionType currentActionType{};

	for (int i = 0; i < 3; ++i)
	{
		if (currentActionType == StrategyActionType::Visa)
		{
			context.setStrategy(new VisaStrategy());
		}
		else if (currentActionType == StrategyActionType::Paypal)
		{
			context.setStrategy(new PaypalStrategy());
		}
		else if (currentActionType == StrategyActionType::Crypto)
		{
			context.setStrategy(new CryptoStrategy());
		}

		context.executeStrategy();
		currentActionType = StrategyActionType(currentActionType + 1);
	}
}