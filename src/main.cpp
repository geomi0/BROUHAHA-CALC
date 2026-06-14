#include <iostream>
#include <string>
#include <limits>

void separation()
{
    std::cout
    << std::endl
    << "---------------------------------------" << std::endl
    << std::endl;
}

void input()
{
    std::cout
    << std::endl
    << "> ";
}

void programEnd()
{
    std::cout
    << "The Program Has Completed Its Work." << std::endl
    << "Write Anything To Complete The Program." << std::endl;
    input();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

int main()
{
    const int error_unknown_operation = 228;
    const int error_division_by_zero = 1337;
    const int error_incorrect_variable_type = 1565;

    std::cout
    << std::endl
    << "=======================================" << std::endl
    << "|-------------------------------------|" << std::endl
    << "|####### >>> BROUHAHA-CALC <<< #######|" << std::endl
    << "|-------------------------------------|" << std::endl
    << "=======================================" << std::endl
    << std::endl

    << "Program Management:" << std::endl
    << std::endl

    << "[ exit ] Exit The Program" << std::endl
    << std::endl

    << "Mathematical Operations That I Know:" << std::endl
    << std::endl

    << "[ + ] Addition" << std::endl
    << "[ - ] Subtraction" << std::endl
    << "[ * ] Multiplication" << std::endl
    << "[ / ] Division" << std::endl
    << std::endl;

    std::string command;

    std::cout
    << "Write The Command You Want To Use." << std::endl;

    input();
    std::cin >> command;

    separation();

    if (command == "exit")
    {
        return 0;
    }

    if (command != "+" &&
        command != "-" &&
        command != "*" &&
        command != "/")
    {
        std::cout
        << "Error 228." << std::endl
        << "I Don't Know Such An Operation." << std::endl;

        separation();
        programEnd();

        return error_unknown_operation;
    }

    double number1;

    std::cout << "Enter Your First Number." << std::endl;

    input();
    std::cin >> number1; std::cout << std::endl;

    if (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore();

        std::cout
        << "Error 1565." << std::endl
        << "I Don't Know Such An Number." << std::endl;

        separation();
        programEnd();

        return error_incorrect_variable_type;
    }

    double number2;

    std::cout << "Enter Your Second Number." << std::endl;
    
    input();
    std::cin >> number2;

    if (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore();

        std::cout
        << "Error 1565." << std::endl
        << "I Don't Know Such An Number." << std::endl;

        separation();
        programEnd();

        return error_incorrect_variable_type;
    }

    separation();
        
    if (number2 == 0 &&
        command == "/")
    {
        std::cout
        << "Error 1337." << std::endl
        << "I DON'T KNOW HOW TO DIVIDE BY ZERO LOOOOOOOOOOOOOOOL." << std::endl;

        separation();
        programEnd();

        return error_division_by_zero;
    }

    double result = 0.0f;

    if (command == "+")
    {
        result = number1 + number2;
    }
    else if (command == "-")
    {
        result = number1 - number2;
    }
    else if (command == "*")
    {
        result = number1 * number2;
    }
    else if (command == "/")
    {
        result = number1 / number2;
    }

    std::cout << "Result Of The Operation:" << std::endl
    << std::endl << result << std::endl;

    separation();

    programEnd();

    return 0;
}