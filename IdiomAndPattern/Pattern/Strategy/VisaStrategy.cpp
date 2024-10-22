#include "IStrategy.h"
#include "VisaStrategy.h"
#include <iostream>


VisaStrategy::VisaStrategy()
	: IStrategy()
{
}

VisaStrategy::~VisaStrategy()
{
}

void VisaStrategy::execute()
{
	std::cout << "Payment with visa" << std::endl;
}