#ifndef mutantstack_hpp
#define mutantstack_hpp

#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <iterator>
template <typename T>
class MutantStack : public std::stack<int>
{
    public:
        MutantStack(){};
        MutantStack(MutantStack const &src)
        {
            *this = src;
        }
        ~MutantStack()
        {};
        MutantStack &operator=(MutantStack const &rhs)
        {
            if (this != &rhs)
            {
                std::stack<int>::operator=(rhs);
            }
            return *this;
        }
        typedef std::stack<int>::container_type::iterator iterator;
        iterator begin()
        {
            return c.begin();
        }
        iterator end()
        {
            return c.end();
        }
};

#endif