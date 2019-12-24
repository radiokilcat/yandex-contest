#include <map>
#include <iostream>
#include <fstream>


int main()
{
    std::ifstream file("/home/alex/development/input.txt", std::ios::in);
    if(file.is_open() != true)
    {
        std::cout << "file open error: " << std::endl;
    }
    std::string a;
    std::string b;
    std::map<char, int> m;
    file >> a >> b;

    std::cout << a << std::endl;

    for (size_t i = 0; i <= a.size() - 1; ++i)
    {
        std::cout << a[i] << std::endl;
        char j = a[i];
        int count = 0;
        for (size_t i1 = i; i1 <= a.size() - 1; ++i1)
        {
            if (j == a[i1])
            {
                count++;
            }
        }
        m[j] = count;
//        std::cout << j << std::endl;
    }

    for (auto it : m)
    {
        std::cout << it.first << " : " << it.second << std::endl;
    }

    return 0;
}
