#pragma once

#define MakeStrategy(strategyClassName, functionName) \
	template<typename Derived> \
	struct strategyClassName { \
		virtual ~strategyClassName() = default; \
		void functionName() { \
			auto derived = static_cast<Derived*>(this); \
			if (derived) { \
				derived->functionName##_implementation(); \
			} \
		}\
		virtual void functionName##_implementation() = 0; \
	}; 

#define BeginBehavior(behaviorClassName, strategyClassName, behaviorFunctionName) \
	struct behaviorClassName : public strategyClassName<behaviorClassName> { \
		void behaviorFunctionName##_implementation() \

#define EndBehavior() \
	};