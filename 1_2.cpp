#include <iostream>
#include <fstream>
#include <string>

void run1_2()
{
    std::ifstream myFile("1.txt");
    std::string lines;
    int Result = 0;
	int possition = 0;

    while (std::getline(myFile, lines))
    {
        for (char c : lines)
        {
            if (c == '(')
            {
                possition++;
            }
            else
            {
                possition--;
            }
            Result++;
            if (possition == -1)
            {
                break;
            }
        }
    }
    std::cout << Result;
}