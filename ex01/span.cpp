#include "span.hpp"

Span::Span()
{
    std::cout << "default constractor called" << std::endl;
    _N = 0;
}
Span::Span(unsigned int N)
{
    std::cout << "parametric constractor called" << std::endl;
    _N = N;
}

Span::Span(Span const & other)
{
    std::cout << "copy constractor called" << std::endl;
    *this = other;
}

Span & Span::operator=(Span const & other)
{
    std::cout << "assignation operator called" << std::endl;
    if (this != &other)
    {
        _v = other._v;
        _N = other._N;
    }
    return *this;
}

Span::~Span()
{
    std::cout << "destructor called" << std::endl;
}

void Span::addNumber(int n)
{
    if (_v.size() < _N)
        _v.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan()
{
    if (_v.size() < 2)
        throw std::exception();
    std::sort(_v.begin(), _v.end());
    int min = _v[1] - _v[0];
    for (size_t i = 1; i < _v.size() - 1; i++)
    {
        if (_v[i + 1] - _v[i] < min)
            min = _v[i + 1] - _v[i];
    }
    return min;
}
int Span::longestSpan()
{
    if (_v.size() < 2)
        throw std::exception();
    std::sort(_v.begin(), _v.end());
    return _v[_v.size() - 1] - _v[0];
}
Span & fill_vector(Span & sp, unsigned int n)
{
    srand(time(NULL));
    for (size_t i = 0; i < n; i++)
    {
        sp.addNumber(rand() % 100);
    }
    return sp;
}
