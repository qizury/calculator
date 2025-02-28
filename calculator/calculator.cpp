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
        if (choice < 0 || choice > 4) {
            std::cout << "Invalid choice.\n";
            continue;
        }

        if (choice == EXIT)
        {
            break;
        }
        std::cout << "Enter first number:\n";
        std::cin >> num1;
        std::cout << "Enter second number:\n";
        std::cin >> num2;

        switch (choice)
        {
        case PLUS:
            plus(num1, num2);
            break;
        case MINUS:
            minus(num1, num2);
            break;
        case MULTIPLY:
            multiply(num1, num2);
            break;
        case DIVIDE:
            if(num2 != 0)
            {
                divide(num1, num2);
            }
            else
            {
                std::cout << "Division by zero is not allowed" << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation.\n";
        }
    }
}
