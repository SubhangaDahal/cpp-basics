#include <iostream>
#include <limits>
#include <cmath>

static float takeValidInput();

int main()
{
    float num1, num2, testOperator;
    int userOperator;

    std::cout << "Enter the first number: ";
    num1 = takeValidInput();
    while (true)
    {
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Division\n";
        std::cout << "4. Multiplication\n";
        std::cout << "Select the operator: ";
        //using testOperator here as int type is required for switch case
        testOperator = takeValidInput();
        if (testOperator > 4 || testOperator < 1 || testOperator != std::floor(testOperator)) // checking by comparing nearest int value with float value
        {
            std::cout << "Please enter a valid operator!\n";
        }
        else
        {
            userOperator = testOperator;
            break;
        }
    }
    std::cout << "Enter the second number: ";
    num2 = takeValidInput();
    switch (userOperator)
    {
        case 1:
            std::cout << num1 << " + " << num2 << " is: " << num1 + num2;
            break;
        case 2:
            std::cout << num1 << " - " << num2 << " is: " << num1 - num2;
            break;
        case 3: 
            while (num2 == 0)
            {
                std::cout << "Dividing by 0 is not allowed. Enter a new number: ";
                num2 = takeValidInput();
            }
            std::cout << num1 << " / " << num2 << " is: " << num1 / num2;
            break;
        case 4: 
            std::cout << num1 << " * " << num2 << " is: " << num1 * num2;
            break;
    }
    return 0;
}

static float takeValidInput()
{
    float num;
    while (true)
    {
        //checking if all are letters eg: a would be false here but 11a would be true.
        //This works as cpp checks inner health flags if its not a boolean. Here the flags are failbit and goodbit. Entering letters only would be a true failbit flag.
        if (std::cin >> num)
        {
            
            char nextChar = std::cin.get();

            if (nextChar == '\n') //getting the very next character in the buffer. If its a valid number then it would contain only a newline, an invalid would leave a char behind
            {
                return num; 
            }
            else
            {
                std::cout << "Please enter a pure number (no letters or extra symbols): ";
                std::cin.clear();//Flips the failbit
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');// Clears out the input stream till the \n character the streamsize limit is basically the max number of characters cin could possibly hold
            }
        }
        else
        {
            std::cout << "Invalid input. Please enter a valid number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}