#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template < typename T >
void sortujTagliatelle(T begin, T end)
{
    std::sort(begin, end, [](const Tagliatelle& a, const Tagliatelle& b) {
        return a.ileMaki(2) > b.ileMaki(2); 
    });
}