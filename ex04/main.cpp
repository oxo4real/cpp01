#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage: ./sed <filename> s1 s2"
                  << std::endl;
        return (1);
    }
    std::string inputFileName(av[1]);
    std::string s1(av[2]);
    std::string s2(av[3]);
    std::ifstream inputFile(inputFileName.c_str());
    if (s1.empty())
    {
        std::cout << "s1 must not be empty"
                  << std::endl;
        return (1);
    }
    if (!inputFile.is_open())
    {
        std::cout << "Failed to open "
                  << inputFileName
                  << std::endl;
        return (1);
    }
    std::string outputFileName = inputFileName.append(".replace");
    std::ofstream outputFile(outputFileName.c_str());
    if (!outputFile.is_open())
    {
        std::cout << "Failed to open "
                  << outputFileName
                  << std::endl;
        return (1);
    }
    std::string line;
    size_t pos = 0;
    while (std::getline(inputFile, line))
    {
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }
}
