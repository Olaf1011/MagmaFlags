#pragma once
#include <cstdint>

namespace MagmaEnum_32
{
	enum Flag : uint32_t //Increase this value to uint64_t to double the amount of flags
	{
			RUNNING = 1u << 0 
		,	AGGRESSIVE = 1u << 1
		,	FIGHTING = 1u << 2
		,	ALIVE = 1u << 3
		,	SEARCHING = 1u << 4
		,	SURROUNDED = 1u << 5
		,	EXAMPLE  = 1u << 6
		,	MAX_VALUE_AT_U32 = 1u << 31 // Can still be used
	};
}
