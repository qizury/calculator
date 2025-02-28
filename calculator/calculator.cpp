#include <iostream>
#include "operations.h"

int main()
{
    int choice = -1;
    int num1;
    int num2;
    while (true)
    {
        std::cout << "Select an operation:\n0 - Exit\n1 - Plus\n2 - Minus\n3 - Multiply\n4 - Divide\n";
        std::cin >> choice;
        if (choice == 0)
        {
            break;
        }
        std::cout << "Enter first number:\n";
        std::cin >> num1;
        std::cout << "Enter second number:\n";
        std::cin >> num2;

        switch (choice)
        {
        case 1:
            plus(num1, num2);
            break;
        case 2:
            minus(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        }
    }
}
