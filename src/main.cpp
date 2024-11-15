#include "../includes/irc.hpp"

bool isValidPort(const std::string& str) 
{
    if (str.empty()) 
        return false;

    for (size_t i = 0; i < str.length(); i++) 
    {
        if (!std::isdigit(str[i]))
            return false;
    }

    if (str.length() > 1 && str[0] == '0')
        return false;

    if (std::stoi(str) < 0 || std::stoi(str) > 65535)
        return false;
    return true;
}

bool isValidPassword(const std::string& str)
{
    if (str.empty())
        return false;
}

int main(int argc, char **argv) 
{
    if (argc != 3)
    {
        //error
        std::cout << "Incorrect number of values!" << std::endl;
        return EXIT_FAILURE;
    }

    if (!isValidPort(argv[1]))
    {
        //error
        std::cout << "Port is incorrect!" << std::endl;
        return EXIT_FAILURE;
    }

    if (!isValidPassword(argv[2]))
    {
        //error
        std::cout << "Password is incorrect!" << std::endl;
        return EXIT_FAILURE;
    }

    t_input input;
    input.port = std::stoi(argv[1]);
    input.password = argv[2];

    return 0;
}