#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{
    for (int i = 65; i <= 122; ++i){
        if(i == 91 || i == 92 || i == 93 || i == 94 || i == 95 || i == 96 )
        {
        }
        else {
            std::cout << char(i) << '\t' << i << "\n";

        }
    }
    
}
