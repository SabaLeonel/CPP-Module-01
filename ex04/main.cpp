#include "main.hpp"

int main (int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string outputfile = filename + ".replace";

    if (s1.empty() || s2.empty() || filename.empty())
    {
        std::cout << "Error: empty string" << std::endl;
        return (1);
    }
    // TO DO : check if file exists
    // if ()
    std::ifstream ifs(filename);
    if (!ifs.is_open())
    {
        std::cout << "Error: can't open file" << std::endl;
        return (1);
    }
    std::ofstream ofs(outputfile);
    if (!ofs.is_open())
    {
        std::cout << "Error: can't open file" << std::endl;
        return (1);
    }
    std::string line;
    while (std::getline(ifs, line)) {
        size_t startPos = 0;
        size_t foundPos;
        while ((foundPos = line.find(s1, startPos)) != std::string::npos) {
            // Copy characters before the occurrence of s1
            ofs << line.substr(startPos, foundPos - startPos);

            // Replace s1 with s2
            ofs << s2;

            // Move startPos past the replaced s1
            startPos = foundPos + s1.length();
        }
        // Copy the remaining characters in the line
        ofs << line.substr(startPos) << std::endl;
    }

    ifs.close();
    ofs.close();

    std::cout << "File " << filename << " has been processed, and the result is stored in " << outputfile << std::endl;

    return (0);
}
// ./sed input old_string new_string
// ./sed non_existent_file old_string new_string
// ./sed empty_file old_string new_string
// ./sed empty_string old_string new_string
// ./sed input empty_string new_string

