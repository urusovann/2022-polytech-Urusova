double expon(double x, double y)
{
    double result = 1;
    for(int i = 0; i < y; ++i)
        result *= x;
    return result;
}

double calculate(double x, char op, double y)
{
    switch(op)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y == 0)
                throw "Error";
            else return x / y;
        case '^':
            return expon(x, y);
        default:
            throw "Error";
    }
}