#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{   
    int val = 0;

    std::cout << "Enter a number\n";
    std::cin >> val;
    
    if (val % 2 == 0)
    {
        std::cout << "The number " << val << " is an even number.\n";
    }
    else
    {
        std::cout << "The number " << val << " is an odd number.\n";
    
    }

    return 0;
}
