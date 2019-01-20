#include <iostream>
#include <string>

int main()
{
    /* code */
    
    
    std::string first_name;
    std::cout << "Please enter your name and age\n";
    double age;
    std::cin >> first_name >> age;
    double months = age * 12;
    std::cout << "Hello, " << first_name << ", " << months << " months old\n";
    return 0;
}
