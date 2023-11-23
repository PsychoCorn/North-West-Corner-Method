#include "resources.hpp"

resources::resources(std::vector<int> s,  std::vector<int> d)
{
    supplies = s;
    demands = d;
}

void resources::add_new_supply(int value)
{
    supplies.push_back(value);
}

void resources::add_new_demand(int value)
{
    demands.push_back(value);
}

bool resources::is_enough_supplies(int index_of_supplies, int index_of_demands)
{
    return supplies[index_of_supplies] > demands[index_of_demands];
}

int resources::sum_of_supplies()
{
    int sum = 0;
    for (auto n : supplies)
    {
        sum += n;
    }
    return sum;
}

int resources::sum_of_demands()
{
    int sum = 0;
    for (auto n : demands)
    {
        sum += n;
    }
    return sum;
}

int resources::give_resources(int index_of_supply, int index_of_demand)
{
    int min = (supplies[index_of_supply] < demands[index_of_demand]) ? supplies[index_of_supply] :
                                                                          demands[index_of_demand];
    supplies[index_of_supply] -= min;
    demands[index_of_demand] -= min;
    return min;
}

int resources::get_supply(int i)
{
    return supplies.at(i);
}

int resources::get_demands(int i)
{
    return demands.at(i);
}