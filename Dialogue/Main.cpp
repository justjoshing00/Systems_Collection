#include "iostream"
#include <vector>

/*pros of this approach
-simple AF - no frills data retrieval and display
-composable - can pretty easily put together a conversation from any combination of lines at any desired granularity
-debugable -if an npc says the wrong thing, it should be pretty easy to figure out why
-searchable - you can print any conversation or the whole script and then look through
*/
/*cons of this appproach
-dunno how well this scales,exactly
-does not support dynamic text
-does not support user text entry
-does not support tagging  
*/


void printline(auto line)
{
	std::cout << line + "\n";
}
void printbeat(auto beat)
{
	for (auto i : beat)
	{
		std::cout << i + "\n";
	}
}
void printconversation(auto conversation)
{
	for (auto i : conversation)
	{
		auto temp = i;
		
		for (auto j : temp)
		{
			std::cout << j + "\n"; 
		}
	}
}
void printfullscript(auto fullscript)
{
	for (auto i : fullscript)
	{
		auto outertemp = i;
		for (auto j : outertemp)
		{
			auto innertemp = j;
			
			for (auto k : innertemp)
			{
				std::cout << k + "\n"; 
			}
		}
	}
}

int main()
{
	// try to see if we can load this in from a file or something
	std::string line1 = "do";
	std::string line2 = "re";
	std::string line3 = "mi";

	std::string line4 = "larry";
	std::string line5 = "curly";
	std::string line6 = "moe";

	std::string line7 = "oof";
	std::string line8 = "bruh";
	std::string line9 = "lol";

	
	std::vector<std::string> beat1 = { line1,line2,line3};
	std::vector<std::string> beat2 = { line4,line5,line6};
	std::vector<std::string> beat3 = { line7,line8,line9};
	
	std::vector<std::vector<std::string>> conversation1 = {beat1,beat2};
	std::vector<std::vector<std::string>> conversation2 = {beat3};

	std::vector<std::vector<std::vector<std::string>>> FullScript = { conversation1,conversation2 };

	
	printline(line1);
	printbeat(beat1);
	printconversation(conversation1);
	printfullscript(FullScript);

	
	
}