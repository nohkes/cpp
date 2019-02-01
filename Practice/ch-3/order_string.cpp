#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{

    /* possibilites
    1 2 3
    1 3 2
    2 1 3
    2 3 1
    3 1 2
    3 2 1 
    
    */
  
    std::string str1;
    std::string str2;
    std::string str3;
    std::cout << "Please Enter Three words\n";
    std::cin >> str1 >> str2 >> str3;


    // st1 is the smallest
    if (str1 < str2 && str1 < str3 && str2 > str3) //1 2 3
    {
        std::cout << str1 << " " << str2 << " " << str3 << "\n";
    }
    else if (str1 < str3 && str1 < str2 && str3 > str2) //1 3 2
    {
        std::cout << str1 << " " << str3 << " " << str2 << "\n";
    }
    else if (str1 < str2 && str1 < str3 && str2 == str3) 
    {
        std::cout << str1 << " " << str2 << " " << str3 << "\n";
    }
    else if (str1 == str3 && str1 == str2)
    {
        std::cout << str1 << " " << str2 << " " << str3 << "\n";
    }


    //str2 is the smallest
    if (str2 < str1 && str2 < str3 && str1 < str3) //2 1 3
    {
        std::cout << str2 << " " << str1 << " " << str3 << "\n";
    }
    else if (str2 < str3 && str2 < str1 && str3 < str1) //2 3 1
    {
        std::cout << str2 << " " << str3 << " " << str1 << "\n";
    }
    else if (str2 < str1 && str2 < str3 && str1 == str3)
    {
        std::cout << str2 << " " << str1 << " " << str3 << "\n";
    }


    //str3 is the smallest
    if (str3 < str1 && str3 < str2 && str1 < str2) //3 1 2
    {
        std::cout << str3 << " " << str1 << " " << str2 << "\n";
    }
    else if (str3 < str2 && str3 < str1 && str2 < str1) //3 2 1 
    {
        std::cout << str3 << " " << str2 << " " << str1 << "\n";
    }
    else if (str3 < str1 && str3 < str2 && str1 == str2)
    {
        std::cout << str3 << " " << str1 << " " << str2 << "\n";
    }
    return 0;
}
