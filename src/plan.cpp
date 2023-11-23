#include "plan.hpp"

plan::plan(int n, int m, std::vector<std::vector<int>> c, std::vector<int> s, std::vector<int> d)
{
    number_of_supplies = n;
    number_of_demands = m;
    res = new resources(s, d);
    tbl = new table(n, m, c);
}

plan::~plan()
{
    delete res, tbl;
}

void plan::to_balance_model()
{
    int sum_of_supplies = res->sum_of_supplies();
    int sum_of_demands = res->sum_of_demands();
    if (sum_of_supplies == sum_of_demands)
    {
        return;
    }
    else if (sum_of_supplies < sum_of_demands)
    {
        add_new_supply(sum_of_demands-sum_of_supplies);
    }
    else
    {
        add_new_demand(sum_of_demands - sum_of_supplies);
    }
}

void plan::add_new_supply(int value)
{
    number_of_supplies++;
    res->add_new_supply(value);
    tbl->add_new_supply();
}

void plan::add_new_demand(int value)
{
    number_of_demands++;
    res->add_new_demand(value);
    tbl->add_new_demands();
}

void plan::create_basic_plan()
{
    to_balance_model();
    int i = 0, j = 0;
    while (res->sum_of_supplies() > 0)
    {
        give_resources(i, j);
        (res->get_supply(i) == 0) ? i++ : j++;
    }
    tbl->show_resources();
}

void plan::give_resources(int n, int m)
{
    tbl->set_resources(n, m, res->give_resources(n, m));
}