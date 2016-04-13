#include <iostream>
#include <string>
#include <list>
#include <vector>

int main()
{
    std::cout << "hello world!\n";
    std::string s = "Four";
    std::list<std::string> slogans;

    std::vector<int> v1;
    std::vector<int> v2;
    v1.push_back(90);
    v2 = v1;
    std::cout << v2[0];

}
