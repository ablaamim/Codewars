#include <string>
#include <iostream>

using namespace std;

std::string countSheep(int number)
{
    int i = 1;
  
    std::string str;
    while (i <= number)
    {
        str += std::to_string(i) + " sheep...";
        i++;
    }
    return str;
}

int main()
{
    std::cout << countSheep(3) << std::endl;
    return (EXIT_SUCCESS);
}