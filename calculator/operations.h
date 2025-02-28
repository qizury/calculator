#pragma once

enum Operation {
    EXIT = 0,
    PLUS = 1,
    MINUS = 2,
    MULTIPLY = 3,
    DIVIDE = 4
};

void plus(double num1, double num2) 
{
	std::cout << "Result = " << num1 + num2 << std::endl;
}

void minus(double num1, double num2)
{
	std::cout << "Result = " << num1 - num2 << std::endl;
}

void multiply(double num1, double num2)
{
	std::cout << "Result = " << num1 * num2 << std::endl;
}

void divide(double num1, double num2)
{
	std::cout << "Result = " << num1 / num2 << std::endl;
}
