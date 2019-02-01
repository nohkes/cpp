#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{
    int val1;
    int val2;
    std::cout << "Please Enter Two numbers\n";
    std::cin >> val1 >> val2;
    if (val1 > val2){
        std::cout << "the smaller number is " << val2 << "\n";
        std::cout << "the larger number is " << val1 << "\n";
    }
    if (val2 > val1){
        std::cout << "the smaller number is " << val1 << "\n";
        std::cout << "the larger number is " << val2 << "\n";
    }
    std::cout << "The sum is " << val1 + val2 << "\n";
    std::cout << "The difference is " << val1 - val2 << "\n";
    std::cout << "The product is " << val1 * val2 << "\n";
    std::cout << "The ratio is " << val1 <<" : " << val2 << "\n";
    

    return 0;
}
