#include <string>
#include <iostream>

int main()
{
    std::string j;
    std::string s;
    std::cin >> j >> s;
    int result = 0;

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (j.find(*it) != std::string::npos)
        {
            result++;
        }
    }

    std::cout << result;
    return result;
}


