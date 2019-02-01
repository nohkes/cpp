#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{   
    int miles;
    std::cout << "Please Enter Speed in Miles \n";
    std::cin >> miles;
    std::cout << miles << " miles is " << miles * 1.609 << " Kilometers. \n";
    return 0;
}
