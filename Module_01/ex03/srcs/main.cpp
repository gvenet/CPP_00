#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
	srand((unsigned int)time(NULL));
	ZombieHorde Horde(5);

	std::cout << std::endl;
	return (0);
}
