#include <string>
#include <fstream>
#include <iostream>

int main()
{
    int result = 0;
    int local = 0;
    int size = 0;

    int s = 0;
    std::ifstream file("file.txt", std::ios::in);

    file >> size;

    for (int i = 0; i <= size; ++i)
    {
        if (i != 0)
        {
        if (local > result)
            result = local;
        file >> s;
        if (s == 1)
        {
            local++;
        }
        else
            local = 0;
        std::cout << "local is: " << local << " result is: " << result << std::endl;
        }
    }
    std::ofstream output("output.txt", std::ios::out);
    std::cout << "result: " << result << std::endl;
    output << result;
    return 0;
}
