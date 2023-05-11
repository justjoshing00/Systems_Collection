#include <iostream>
#include <queue>
#include <string_view>

//using std priority queue to manage turns in a turn based game.

//TODO::come up with a way to do this that isnt so opaque
template<typename Q>
void print_queue(std::string_view name, Q q)
{
	// NB: q is passed by value because there is no way to traverse
	// priority_queue's content without erasing the queue.
	for (std::cout << name << ": \t"; !q.empty(); q.pop())
		std::cout << q.top() << ' ';
		std::cout << '\n';
}

int main()
{
	int salamanderspeed = 12;
	int lichspeed = 4;
	int jobospeed = 7;
	int aimsspeed = 8;
	int elvinspeed = 6;

	const auto speeds = { salamanderspeed,lichspeed,jobospeed,aimsspeed,elvinspeed };

	std::priority_queue<int> turnorder;
	for (int n : speeds)
		turnorder.push(n);
	

	print_queue("turnorder", turnorder);
	 

}

