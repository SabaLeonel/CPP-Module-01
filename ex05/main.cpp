#include "Harl.cpp"

int main ()
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("ERROR");
    harl.complain("WARNING");

    harl.complain("UNKNOWN");

    return 0;
}
