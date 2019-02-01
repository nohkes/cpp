#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{
    int val[3];
    int temp;
    std::cout << "Please Enter Three Numbers \n";
    for(int x = 0; x < 3; x++){
        std::cin >> val[x];
        
    }
    for(int x = 0; x < 3; x++){
        for (int y=x+1; y < 3; y++){
            if (val[y] < val[x]) {
                temp = val[x];
                val[x] = val[y];
                val[y] = temp;

            }
        }
    }

    std::cout << "sorted numbers\n";
    for(int i = 0; i < 3; i++) {
        std::cout << val[i] << "\n";
    }
    return 0;
}
