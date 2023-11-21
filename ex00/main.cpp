#include "Zombie.hpp"

int main(void) 
{
    Zombie *dead;
    
    dead = newZombie("Tony Stark");
    dead->announce();
    delete dead;

    randomChump("Mickey Mouse");
    
    return 0;
}

