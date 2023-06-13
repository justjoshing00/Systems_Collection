#pragma once
#include <utility>
#include <functional>
#include <iostream>
#include <map>
#include "DataClasses.h"



namespace Processes 
{
	 void Field(DataClasses::FieldData data);
	 void Menu(DataClasses::MenuData data);
	 void Combat(DataClasses::CombatData data);
	 void Pause(DataClasses::PauseData data);
}


// these enums only exist to create sane human readable names for the levels
enum  Levels 
{
	//i dont knowif level and encounter are the right names anymore
	Level1 = 1,
	Level2,
	Level3,
	Level4,

};
enum Encounters
{
	// i dont know if level and encounter are the right names anymore
	Encounter1 = 1,
	Encounter2,
	Encounter3,
	Encounter4,
};


namespace GameLoop
{
	// Given a level-encounter pair, give me a process and data to pass into that process.
	// This is a simplified version of this - an actual implementation will be a many to many relationship.
	// EG: a combat process may need field data in order to determine which enviroment data to load in combat.
	// This (in theory) makes it easy to swap out processes and add new processes, at the cost of making it harder
	// to change data. I expect that early on in development, the thing that will change most often and the thing
	// that will be the most effort to change will be processes rather than data.
	inline std::pair<DataClasses::DataVariant,DataClasses::FunctionVariant> LevelSelector(int enc, int lvl) 
	{
		auto index = std::make_pair(enc, lvl);

		std::map<std::pair<int, int>, std::pair<DataClasses::DataVariant, DataClasses::FunctionVariant>> Lselect =
		{
			{ std::make_pair(1,1),std::make_pair(DataClasses::FieldData{},Processes::Field)},
			{ std::make_pair(1,2),std::make_pair(DataClasses::MenuData{},Processes::Menu)},
			{ std::make_pair(2,1),std::make_pair(DataClasses::CombatData{},Processes::Combat)},
			{ std::make_pair(2,2),std::make_pair(DataClasses::PauseData{},Processes::Pause)},
		};

		return Lselect.at(index);
		
	}
}