#ifndef span_hpp
#define span_hpp

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        std::vector<int> _v;
        unsigned int _N;
    public:
        Span();
        Span(unsigned int N);
        Span(Span const & other);
        Span & operator=(Span const & other);
        ~Span();
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
};

Span & fill_vector(Span & sp, unsigned int n);

#endif