#ifndef resources_HPP
#define resources_HPP

#include <vector>

class resources
{
private:
    std::vector<int> supplies;
    std::vector<int> demands;
public:
    resources(std::vector<int> s,  std::vector<int> d);
    void add_new_supply(int value);
    void add_new_demand(int value);
    bool is_enough_supplies(int index_of_supplies, int index_of_demands);
    int sum_of_supplies();
    int sum_of_demands();
    int give_resources(int index_of_supply, int index_of_demand);
    int get_supply(int i);
    int get_demands(int i);
};


#endif