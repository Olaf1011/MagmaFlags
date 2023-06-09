#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#include "MagmaEnum.hpp"

namespace MagmaEnum_32
{
	enum Flag : uint32_t; //Increase this value to uint64_t to double the amount of flags
};

class MagmaFlags_32
{
	MagmaEnum_32::Flag m_flags = static_cast<MagmaEnum_32::Flag>(0);
public:
	void* operator new(size_t size) = delete;
	void operator delete(void* pointer) = delete;

	inline bool operator==(const MagmaEnum_32::Flag flag) const
	{
		return m_flags & flag;
	}
	inline bool operator!=(const MagmaEnum_32::Flag flag) const
	{
		return !(m_flags & flag);
	}
	inline MagmaFlags_32& operator+=(const MagmaEnum_32::Flag flag) noexcept
	{
		m_flags = static_cast<MagmaEnum_32::Flag>(m_flags | flag);
		return *this;
	}
	inline MagmaFlags_32& operator=(const MagmaFlags_32& magmaFlags) noexcept
	{
		if(this == &magmaFlags)
			return *this;

		m_flags = magmaFlags.m_flags;
		return *this;
	}

	void Clear()
	{
		m_flags = static_cast<MagmaEnum_32::Flag>(m_flags ^ m_flags);
	}
};

namespace MagmaEnum_64
{
	enum Flag : uint64_t; //Increase this value to uint64_t to double the amount of flags
};

class MagmaFlags_64
{
	MagmaEnum_64::Flag m_flags = static_cast<MagmaEnum_64::Flag>(0);
public:
	void* operator new(size_t size) = delete;
	void operator delete(void* pointer) = delete;

	inline bool operator==(const MagmaEnum_64::Flag flag) const
	{
		return m_flags & flag;
	}
	inline bool operator!=(const MagmaEnum_64::Flag flag) const
	{
		return !(m_flags & flag);
	}
	inline MagmaFlags_64& operator+=(const MagmaEnum_64::Flag flag) noexcept
	{
		m_flags = static_cast<MagmaEnum_64::Flag>(m_flags | flag);
		return *this;
	}
	inline MagmaFlags_64& operator=(const MagmaFlags_64& magmaFlags) noexcept
	{
		if (this == &magmaFlags)
			return *this;

		m_flags = magmaFlags.m_flags;
		return *this;
	}

	void Clear()
	{
		m_flags = static_cast<MagmaEnum_64::Flag>(m_flags ^ m_flags);
	}
};