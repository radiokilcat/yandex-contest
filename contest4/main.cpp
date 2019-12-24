#include <iostream>

void gen_seq(int n, int open_br, int closed_br, std::string answer)
{
    if (open_br + closed_br == 2 * n)
      std::cout << answer << std::endl;
    if(open_br < n)
        gen_seq(n, open_br + 1, closed_br, answer + '(');
    if(open_br > closed_br)
        gen_seq(n, open_br, closed_br + 1, answer + ')');
}

int main()
{
    gen_seq(2, 0, 0, "");
    return 0;
}
