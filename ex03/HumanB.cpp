#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << this->_name <<" is born" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << this->_name << " is dead" << std::endl;
}

void    HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
