#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    try
    {
        std::cout << *easyfind(v, 5) << std::endl;
        std::cout << *easyfind(v, 111) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: element not found" << std::endl;
    }
    return 0;
}