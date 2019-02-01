#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath> 

int main()
{
   
    std::vector<std::string> words;
    std::vector<std::string> bad_words;
    bad_words.push_back("broccoli");
    
    for(std::string temp; std::cin>>temp; ) // read whitespace-separated words
        words.push_back(temp); // put into vector
        std::cout << "Number of words: " << words.size() << '\n';
        std::sort(words.begin(), words.end()); // sort the words
    
    
        
    
    for (int i = 0; i<words.size(); ++i)
    {
        for (int j = 0; j<bad_words.size(); ++j)
        {
            if(bad_words[j] == words[i])
                {
                  words[i] = "bleep";
                }
        }
            
        if (i==0 || words[i-1]!=words[i]) // is this a new word?
        {
            std::cout << words[i] << "\n";
        }
    }
}
