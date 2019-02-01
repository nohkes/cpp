#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{
    int penny;
    int nickel;
    int dime;
    int quater;
    int loonie;
    double total;
    std::cout << "How many pennies do you have\n";
    std::cin >> penny;
    std::cout << "How many nickels do you have\n";
    std::cin >> nickel;    
    std::cout << "How many dimes do you have\n";
    std::cin >> dime;
    std::cout << "How many quarters do you have\n";
    std::cin >> quater;
    std::cout << "How many loonies do you have\n";
    std::cin >> loonie;
    total = penny + (nickel * 5) + (dime * 10) + (quater * 25) + (loonie * 100);
    if(penny == 1) {
        std::cout << "You have " << penny << " penny.\n";
    }
    else
    {
        std::cout << "You have " << penny << " pennies.\n";
    }
    std::cout << "You have " << nickel << " nickels.\n";
    std::cout << "You have " << dime << " dimes.\n";
    std::cout << "You have " << quater << " quarters.\n";
    std::cout << "You have " << loonie << " loonies.\n";
    std::cout << "The value of all of your coins is $" << total / 100 << "\n";
    
    return 0;

}
