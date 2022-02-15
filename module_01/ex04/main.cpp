#include <iostream>
#include <string>
#include <fstream>

void    stringHelper(std::string& source, std::string old, std::string replace)
{
    size_t  pos;
    size_t  i = 0;

    while (i < source.size())
    {
        pos = source.find(old, i);
        if (pos != std::string::npos)
        {
            source.erase(pos, old.size());
            source.insert(pos, replace);
            i += old.size();
        }
        else
            i++;
    }
}

void    replace(std::string filename, std::string old, std::string replace)
{
    (void)filename;
    (void)old;
    (void)replace;

    std::ifstream   instream(filename);
    std::ofstream   outstream(filename + ".replace");
    std::string     text;

    if (instream.is_open() && outstream.is_open())
    {
        while (std::getline(instream, text))
        {
            stringHelper(text, old, replace);
            outstream << text << std::endl;
        }
    }
    instream.close();
    outstream.close();
}

int main()
{   
    replace("test", "aaaa", "bbbb");
    return 0;
}