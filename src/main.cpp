#include "plan.hpp"
#include <iostream>

int number_of_supplies = 3;
int number_of_demans = 4;

int main()
{
    int number_of_supplies = 0;
    int number_of_demans = 0;
    std::cout << "n, m: ";
    std::cin >> number_of_supplies >> number_of_demans;
    std::vector<std::vector<int>> costs(number_of_supplies, std::vector<int>(number_of_demans));
    std::vector<int> supplies(number_of_supplies);
    std::vector<int> demands(number_of_demans);
    std::cout << "table:" << std::endl;
    for (int i = 0; i < number_of_demans; i++)
    {
        std::cin >> demands[i];
    }
    for (int i = 0; i < number_of_supplies; i++)
    {
        std::cin >> supplies[i];
        for (int j = 0; j < number_of_demans; j++)
        {
            std::cin >> costs[i][j]; 
        }
    }
    std::cout << std::endl;
    plan task(number_of_supplies, number_of_demans, costs, supplies, demands);
    task.create_basic_plan();
    return 0;
}