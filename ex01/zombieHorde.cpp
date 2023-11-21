#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];  // Create a dynamic array of Zombie objects
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name + std::to_string(i));

    }

    return zombies;  // Return the pointer to the dynamic array
}
