#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

// tutaj definicja metody gotujMakaron



class Penne : public Makaron
{

public:
    Penne(){};
    double ileMaki(unsigned P) const override { return static_cast< double >(P); }
};


Makaron* Makaron::gotujMakaron(std::string input)
{
    if (input.front() == input.back())
    {
        return new Tagliatelle(3.14, 0.42, 0.1);
    }
    else
    {
        return new Penne();
    }
}

