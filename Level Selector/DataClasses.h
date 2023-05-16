#pragma once

#include <variant>
namespace DataClasses
{
	
	// these are a family of types, but i dont know which one im going to be returning from the calling function until runtime.
	
	
	class FieldData
	{
		int x = 1;
	public:
		int Read() { return x;}
	};
	class MenuData
	{
		int y = 2;
	public:
		int Read() { return y; }
	};
	class CombatData
	{
		int z = 3;
	public:
		int Read() { return z; }
	};
	class PauseData
	{
		int w = 4;
	public:
		int Read() { return w; }
	};
	using DataVariant = std::variant<FieldData, MenuData, CombatData, PauseData>;
	using FunctionVariant = std::variant<std::function<void(DataClasses::FieldData)>, std::function<void(DataClasses::MenuData)>,
		std::function<void(DataClasses::CombatData)>,
		std::function<void(DataClasses::PauseData)>>;

	
}
