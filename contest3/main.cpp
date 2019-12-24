#include <map>
#include <set>
#include <string>
#include <fstream>
#include <iostream>

int main()
{
    int size = 0;

    std::string s;
    int temp = 0;
    std::ifstream file("file.txt", std::ios::in);
    std::set<int> sorted_data;
    if (file.is_open() != true)
    {
        std::cout << "erorr opening file" << std::endl;
        return 1;
    }
    file >> size;

    for (int i = 0; i <= size; ++i)
    {
        if (i != 0)
        {
            file >> temp;
            sorted_data.insert(temp);
            std::cout << "temp is: " << temp << std::endl;
        }
    }

    std::ofstream output("output.txt", std::ios::out);
    for (auto i : sorted_data)
    {
        std::cout << i << std::endl;
        output << i << '\n';
    }
    return 0;
}
