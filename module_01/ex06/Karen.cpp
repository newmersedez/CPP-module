#include "Karen.hpp"

Karen::Karen()
{}

Karen::~Karen()
{}

void    Karen::debug( void )
{
    std::cout << "\n[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my "
            << "7XL-double-cheese-triple-pickle-specialketchup burger. "
            << "\nI really do!" << std::endl;
}

void    Karen::info( void )
{
    std::cout << "\n[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\n"
            << "You didn't put enough bacon in my burger! "
            << "If you did, I wouldn't be asking for more!" << std::endl;
}

void    Karen::warning( void )
{
    std::cout << "\n[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n"
            << "I've been coming for years whereas you started "
            << "working here since last month." << std::endl;
}

void    Karen::error( void )
{
    std::cout << "\n[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

static int  hash(const std::string& level)
{
    return 1 * !level.compare("DEBUG")
        + 2 * !level.compare("INFO")
        + 3 * !level.compare("WARNING")
        + 4 * !level.compare("ERROR");
}

static void defaultAnswer()
{
    std::cout << "[ Probably complaining about insignificant problems ]";
    std::cout << std::endl;
}

void    Karen::complain(std::string level)
{
    int hashcode = hash(level);

    switch(hashcode)
    {
        case 1: this->debug();
        case 2: this->info();
        case 3: this->warning();
        case 4: this->error(); break;
        default: defaultAnswer(); break;
    }
}
