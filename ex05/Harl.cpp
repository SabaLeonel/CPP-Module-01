#include "Harl.hpp"

Harl::Harl(void)
{
    return ;
}

Harl::~Harl(void)
{
    return ;
}

void Harl::complain(std::string level) {
    // Create a mapping of complaint levels to member functions
    std::map<std::string, void (Harl::*)()> complaintsLevels;
    complaintsLevels["DEBUG"] = &Harl::debug;
    complaintsLevels["INFO"] = &Harl::info;
    complaintsLevels["WARNING"] = &Harl::warning;
    complaintsLevels["ERROR"] = &Harl::error;

    // Find the corresponding member function and call it
    std::map<std::string, void (Harl::*)()>::iterator complaintFunc = complaintsLevels.find(level);
    if (complaintFunc != complaintsLevels.end()) {
        (this->*(complaintFunc->second))();
    } else {
        std::cout << "Unknown complaint level: " << level << std::endl;
    }
}


void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon` cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
