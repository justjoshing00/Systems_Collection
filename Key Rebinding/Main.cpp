#include <iostream>
#include<functional>
#include <vector>

//assign action to key substitute
//assign key substitute to keypress abstraction
// --------------------------------------
//assign keypress abstraction to keypress 


void move()
{
	std::cout << "moving";
}

void jump()
{
	std::cout << "acting";
}

void AutoRebind(auto& action1, auto& action2)
{
	action1 = jump;
	action2 = move;
}


int main()
{
	std::function<void()> action1 = move;
	std::function<void()> action2 = jump;
}