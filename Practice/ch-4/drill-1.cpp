#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main(){


    std::cout << "Please Enter 2 numbers : \n";
    double one;
    double big = 0;
    double small = 0; 
    
    while(std::cin >> one)
    // std::cout << std::abs(one - two) << "\n";
    if (one > big)
    {
        big = one;
        std::cout << "The largest number so far is: " << big << "\n";
        
    }
    else if (one < big)
    {
        small = one;
        std::cout << "The smallest number so far is: " << small << "\n";
        
    }
    
    else if (small < one && one > big) {
        std::cout << one <<"\n";
    }
    

    return 0;
}


    // std::vector<double> numbs; 

    // double num;
    // while(std::cin >> num){
    //     numbs.push_back(num);
    // }
    // numbs.resize(2);
    // std::sort(numbs.begin(), numbs.end());
    // // std::cout << numbs[1] - numbs[0] << "\n";
    // if (numbs[0] == numbs[1]) {
    //     std::cout << "the numbers are equal\n";
    // }
    // if ((numbs[1] - numbs[0]) < 0.01) {
    //     std::cout << "the numbers are almost the same\n";
    // }
    
    // else
    // {
    //     std::cout << "The smaller value is: " << numbs[0] << "\n";
    //     std::cout << "The larger value is: " << numbs[1] << "\n";
    // }





// int temp;

//     for(int i = 0; i < 2; i++)
//     {
//         std::cin >> inp[i];
//     }
    
//     for(int i = 0; i < 2; i++)
//     {
//         for(int j = i+1; j < 2; j++)
//         {
//             if (inp[j] < inp[i]) {
//                 temp = inp[i];
//                 inp[i] = inp[j];
//                 inp[j] = temp;
//             }
            
//         }
        
//     }

//     for(int i = 0; i < 2; i++)
//     {
//         std::cout << inp[i] <<"\n";         
//     }