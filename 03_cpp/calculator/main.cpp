#include <iostream>
#include "calculator.h"

int main()
{
    double x, y, result;
    char operation;
    while(true)
    {
        std::cin >> x >> operation >> y;
        result = calculate(x, operation, y);
        std::cout << x << operation << y << "=" << result << std::endl;
    }
    return 0;

}