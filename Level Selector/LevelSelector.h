#pragma once
#include <utility>
#include <functional>
#include <string>
#include <iostream>
#include <any>
#include "DataClasses.h"



namespace Processes 
{
	 void Field(DataClasses::FieldData data);
	 void Menu(DataClasses::MenuData data);
	 void Combat(DataClasses::CombatData data);
	 void Pause(DataClasses::PauseData data);
}



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
	//variant of function objects
	inline std::pair<DataClasses::FunctionVariant,DataClasses::DataVariant> LevelSelector(int enc, int lvl)
	{
		
		switch (enc)
		{
			//TODO:Do something with the zero case here
			//TODO make this into a helper function i can reuse in each case
		case 1:
			if (lvl == 1)
			{
				DataClasses::FieldData FData;
				DataClasses::FunctionVariant ModeFn = Processes::Field;
				auto Mode = std::make_pair(ModeFn, FData);
				return Mode; // rename the processes to reflect the modes the game will be in
			}
		case 2:
			if (lvl == 2)
			{
				DataClasses::MenuData MData;
				DataClasses::FunctionVariant ModeFn = Processes::Menu;
				auto Mode = std::make_pair(ModeFn, MData);
				return Mode; // rename the processes to reflect the modes the game will be in
			}
		case 3:
			if (lvl == 3)
			{
				DataClasses::CombatData CData;
				DataClasses::FunctionVariant ModeFn = Processes::Combat;
				auto Mode = std::make_pair(ModeFn, CData);
				return Mode; // rename the processes to reflect the modes the game will be in
			}
		case 4:
			if (lvl == 4)
			{
				DataClasses::PauseData PData;
				DataClasses::FunctionVariant ModeFn = Processes::Pause;
				auto Mode = std::make_pair(ModeFn, PData);
				return Mode; // rename the processes to reflect the modes the game will be in
			}
		}
	}
	
}