#include "table.hpp"

#include <iostream>
#include <iomanip>

table::table(int n, int m, std::vector<std::vector<int>> c)
{
    resources = std::vector<std::vector<int>>(n, std::vector<int>(m));
    costs = c;
}

void table::add_new_supply()
{
    int n = resources[0].size();
    resources.push_back(std::vector<int>(n));
    costs.push_back(std::vector<int>(n));
}

void table::add_new_demands()
{
    add_new_column_to_costs();
    add_new_column_to_resources();
}

void table::add_new_column_to_costs()
{
    for (auto n = costs.begin(); n != costs.end(); n++)
    {
        n->push_back(0);
    }
}

void table::add_new_column_to_resources()
{
    for (auto n = resources.begin(); n != resources.end(); n++)
    {
        n->push_back(0);
    }
}

void table::show_resources()
{
    int max_element_length = 0;
    int element_length;

    for (auto n : resources)
    {
        for (auto m : n)
        {
            element_length = std::to_string(m).length();
            if  (element_length > max_element_length)
            {
                max_element_length = element_length;
            }
        }
    }
    for (auto n : resources)
    {
        for (auto m : n)
        {
            std::cout << std::setw(max_element_length + 1) << m;
        }
        std::cout << std::endl;
    }
}

void table::set_resources(int n, int m, int value)
{
    resources[n][m] = value;
}