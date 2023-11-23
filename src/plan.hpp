#ifndef Plan_HPP
#define Plan_HPP

#include "resources.hpp"
#include "table.hpp"

class plan
{
private:
    int number_of_supplies;
    int number_of_demands;
    resources* res;
    table* tbl;

public:
    plan(int n, int m, std::vector<std::vector<int>> c, std::vector<int> s, std::vector<int> d);
    ~plan();
    void to_balance_model();
    void give_resources(int n, int m);
    void add_new_supply(int value);
    void add_new_demand(int value);
    void create_basic_plan();
};

#endif