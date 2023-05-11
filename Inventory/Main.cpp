#include <iostream>
#include <array>
// two ways we could do this:
//1) base class item, derived potion, hi potion, pheonix down, etc
//2) item ID, Index, quantity - so you pass in the ID and return the item at index (ID) or insert at index ID
//or read back the whole array

//i need to add some 'max quantity' type thing so that each element cant hold more than 99 items


void print(auto inv)
{
	for (int i : inv)
	{
		std::cout << i;
	}
	std::cout << "\n";
}
auto add(int ID, int quantity, auto inventory)
{
	// happens when you pick up the item or when you get it from an enemy
	if (inventory[ID] == 0) // because if there is already something there and we just replace it, its a bug
	{
		inventory[ID] = quantity;
	}
	else
	{
		inventory[ID] = inventory[ID] + quantity;
	}
	return inventory;
}

//theres a case where you might remove more than you have, but we are just going to make that 
//impossible by capping the number you can sell to the amount you have. Since the only way you remove 
//more than one of a thing is the sell function, there should be no problem. Should that change, we will
//need another if check here.
auto remove(int ID, int quantity, auto inventory)
{
	//happens when you use or sell the item
	if (inventory[ID] == 0) // because if there is nothing there and we just remove it, its a bug
	{
		std::cout << "no item";
	}
	else
	{
		inventory[ID] = inventory[ID] - quantity;
	}
	
	return inventory;
}


int main()
{
	
	constexpr int MAX_INVENTORY_SIZE = 64;
	std::array<int, MAX_INVENTORY_SIZE> inventory;
	inventory.fill(0);
	print(inventory);
	inventory = add(5, 22, inventory);
	print(inventory);
	inventory = add(5, 22, inventory);
	print(inventory);
	inventory = remove(5, 22, inventory);
	print(inventory);
	inventory = remove(5, 22, inventory);
	print(inventory);
	inventory = remove(5, 22, inventory);
	

	
}