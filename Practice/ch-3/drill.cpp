#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{
    std::string first_name;
    char friend_sex;
    int age;
    std::cout << "Enter the name of the person you want to write to\n";
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ", How are you?\n"; 
    std::cout << "Enter the next person you'd like to write to\n";
    std::cin >> first_name;
    std::cout << "Enter m if the friend is a male and f is the friend is a female \n";
    std::cin >> friend_sex;
    if (friend_sex == 'm') {
        std::cout << "If you see " << first_name << " please ask him to call me \n";
    }
    if (friend_sex == 'f') {
        std::cout << "If you see " << first_name << " please ask her to call me \n";

    }
    std::cout << "Enter the age of the recipient\n";
    std::cin >> age;
    if (age > 0 && age < 100) {
        std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";
        if (age < 12) {
            std::cout << "Next year you will be " << age + 1 << ". \n";
        }
        if (age == 17) {
            std::cout << "Next year you will be able to vote \n";
        }
        if (age > 70 ) {
            std::cout << "I hope you are enjoying retirement \n";
        }
        else {
            std::cout << "Sincerely yours,      cook\n";

        }
    }
    else {
        std::cout << "you're kidding";
    } 

    return 0;
}
