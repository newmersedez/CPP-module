#include "Karen.hpp"

Karen::Karen()
{}

Karen::~Karen()
{}

void    Karen::debug( void )
{
    std::cout << "I love having extra bacon for my "
            << "7XL-double-cheese-triple-pickle-specialketchup burger. "
            << "I really do!" << std::endl;
}

void    Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
            << "You didn't put enough bacon in my burger! "
            << "If you did, I wouldn't be asking for more!" << std::endl;
}

void    Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. "
            << " I've been coming for years whereas you started "
            << "working here since last month." << std::endl;
}

void    Karen::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

int     hash(const std::string& level)
{
    return 1 * !level.compare("debug")
        + 2 * !level.compare("info")
        + 3 * !level.compare("warning")
        + 4 * !level.compare("error");
}

void    Karen::complain(std::string level)
{
    int hashcode = hash(level);

    switch(hashcode)
    {
        case 1: this->debug(); break;
        case 2: this->info(); break;
        case 3: this->warning(); break;
        case 4: this->error(); break;
    }
}
