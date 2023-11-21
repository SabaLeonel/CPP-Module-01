#include <iostream>

int main(void) 
{
    // attributing a value to a variable
    std::string var = "HI THIS IS BRAIN";
    // creating a pointer to the variable
    std::string *varPTR = &var;
    // creating a reference to the variable
    std::string &varREF = var;

    std::cout << std::endl;
    std::cout << "var address: \t\t" << &var << std::endl;
    std::cout << "varPTR address: \t" << varPTR << std::endl;
    std::cout << "varREF address: \t" << &varREF << std::endl;

    std::cout << "var value: \t\t" << var << std::endl;
    std::cout << "varPTR value: \t\t" << *varPTR << std::endl;
    std::cout << "varREF value: \t\t" << varREF << std::endl;

    return 0;
}
