#pragma once

#include <stdexcept>

template <typename ApplicationType>
class CoreApplication : public ApplicationType
{
public:
	CoreApplication()
	{
	}
};