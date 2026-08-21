#include <iostream>

void run1_1();
void run1_2();

int main()
{
    int choice;

    std::cout << "Which file do you want to run?\n";
    std::cout << "Press 1 for 1_1\n";
    std::cout << "Press 2 for 1_2\n";
    std::cout << "Enter your choice: ";

    std::cin >> choice;

    if (choice == 1)
    {
        run1_1();
    }
    else if (choice == 2)
    {
        run1_2();
    }
    else
    {
        std::cout << "Invalid choice. Please run the program again.\n";
    }

    return 0;
}