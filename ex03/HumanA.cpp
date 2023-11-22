#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << this->_name <<" is born" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << this->_name << " is dead" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
