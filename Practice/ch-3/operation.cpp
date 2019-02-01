#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{
    std::string operation;
    double one;
    double two;
    std::cout << "Enter the operation followed by operand (ie + 23 45)\n";
    std::cin >> operation >> one >> two;
    if(operation == "+" || operation == "plus")
    {
        std::cout << "Your answer is " << one + two << "\n";
    }
    if(operation == "-" || operation == "minus")
    {
        std::cout << "Your answer is " << one - two << "\n";
    }
    if(operation == "*" || operation == "mul")
    {
        std::cout << "Your answer is " << one * two << "\n";
    }
    if(operation == "/" || operation == "div")
    {
        std::cout << "Your answer is " << one / two << "\n";
    }

    return 0;
}
