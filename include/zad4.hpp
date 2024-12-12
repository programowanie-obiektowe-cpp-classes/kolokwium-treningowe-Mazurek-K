#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(std::vector<Tagliatelle> vec)
{
    double M = 0;
    int    i = 1;
    for (auto it = vec.rbegin(); it != vec.rend(); ++it)
    {
        M=M+it->ileMaki(i);
        ++i;
    }

    if (M > 100) {
        throw 40;
    }
    else if (M>50 && M<=100)
    {
        throw 6.9;
    }
    else
    {
        return M;
    }

}