#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{
    /* code */
    std::cout << "PLease enter a floating-point value: ";
    double n;
    std::cin >> n;
    std::cout << "n == "<< n
            << "\nn+1 == " << n+1 
            << "\ntwice n == " << n + n
            << "\nn squared == " << n * n
            <<"\nhalf of n == " << n / 2 
            <<"\nsquare root of n == " << sqrt(n)
            <<"\n";

    return 0;
}
