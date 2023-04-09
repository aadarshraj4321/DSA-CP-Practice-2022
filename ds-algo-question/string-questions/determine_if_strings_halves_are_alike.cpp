#include<bits/stdc++.h>


bool isHalfVowels(std::string letter)
{
    char h[] = {'a', 'e', 'i', 'o', 'u'};
}



int main()
{
    std::string letter;
    std::cin >> letter;

    if(isHalfVowels(letter))
        std::cout << "true\n";
    else
        std::cout << "false\n";
}