#include "LevelSelector.h" 

int main()
{
	auto Mode = GameLoop::LevelSelector (Encounters::Encounter1, Levels::Level1);
	std::get<0>(Mode.second)(std::get<0>(Mode.first));
}


