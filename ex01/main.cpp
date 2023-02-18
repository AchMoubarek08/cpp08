#include "span.hpp"

int main()
{
    try{
    Span sp = Span(5);
    sp.addNumber(5);
    // sp.addNumber(5);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"no span found" << '\n';
    }
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    return 0;
}
