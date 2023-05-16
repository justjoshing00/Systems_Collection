#include "LevelSelector.h"

void Processes::Field(DataClasses::FieldData data)
{
	std::cout << "field process engaged";
	std::cout << data.Read();
}
void Processes::Menu(DataClasses::MenuData data)
{
	std::cout << "field process engaged";
	std::cout << data.Read();
}
void Processes::Combat(DataClasses::CombatData data)
{
	std::cout << "field process engaged";
	std::cout << data.Read();
}
void Processes::Pause(DataClasses::PauseData data)
{
	std::cout << "field process engaged";
	std::cout << data.Read();
}