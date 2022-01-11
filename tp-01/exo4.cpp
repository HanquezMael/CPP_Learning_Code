#include <iostream>
#include <string>
#include <vector>

std::vector<unsigned int> count_lower(const std::string& str)
{
    std::vector<unsigned int> tab(26);
    // init tableau tout les occurance a 0
    for (int i = 0; i < 26; i++)
    {
        tab[i] = 0;
    }

    for (char s : str)
    {
        if (std::islower(tab[s - 'a']))
        {
            tab[s - 'a'] += 1;
        }
    }
    return tab;
}

void display_lower_occ(const std::vector<unsigned int>& tab)
{
    for (long unsigned int i = 0; i < tab.size(); i++)
    {
        char lettre = i + 'a';
        std::cout << lettre << tab[i] << std::endl;
    }
}

int main()
{
    std::string               str;
    std::vector<unsigned int> res;
    std::cin >> str;

    res = count_lower(str);
    for (int value : res)
    {
        std::cout << value << std::endl;
    }
}