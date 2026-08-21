#include <iostream>
#include <fstream>
#include <string>

void run1_1()
{
    std::ifstream myFile("1.txt");
    std::string lines;
	int Result = 0;

    while (std::getline(myFile, lines))
        {
            for (char c : lines)
            {
                if ( c == '(' )
                {
					Result++;
                }
                else
                {
					Result--;
                }
            }
        }
    std::cout <<Result;
}