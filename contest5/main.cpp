#include <map>
#include <iostream>
#include <fstream>


int main()
{
    std::ifstream file("input.txt", std::ios::in);
    std::string a;
    std::string b;
    std::map<int, std::string> m;
    file >> a >> b;

    for (auto it : a)
    {
        int count = 0;
        for (auto it : a)
        {

        }

    }
    return 0;
}
