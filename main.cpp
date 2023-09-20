#include <iostream>

int main()
{
    std::cout << "666" << std::endl;

    double good = 200.00;

    auto result = sizeof good;

    std::cout << result << std::endl;

    std::cout << "end" << std::endl;

    char s[4] = "222";

    std::cout << sizeof(s) - 1 << std::endl;

    return 0;
};
