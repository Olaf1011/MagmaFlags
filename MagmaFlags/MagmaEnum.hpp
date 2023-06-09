#pragma once
#include <cstdint>

namespace MagmaEnum_32
{
	enum Flag : uint32_t 
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
namespace MagmaEnum_64
{
	enum Flag : uint64_t;
}