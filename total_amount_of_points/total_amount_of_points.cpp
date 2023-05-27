#include <iostream>
# include <array>

int points(const std::array<std::string, 10>& games)
{
    int total = 0;
    int len = games.size();
    for (int i = 0; i < len; i++)
    {
        int x = games[i][0] - '0';
        int y = games[i][2] - '0';

        std::cout << games[i][0] << " " << games[i][2] << std::endl;

        if (x > y)
            total += 3;
        else if (x == y)
            total += 1;
    }
    return total;
}

int main()
{
    std::array<std::string, 10> games = {"1:0", "2:0", "3:0", "4:0", "2:1", "3:1", "4:1", "3:2", "4:2", "4:3"};
    std::cout << points(games) << std::endl;
    return (EXIT_SUCCESS);
}