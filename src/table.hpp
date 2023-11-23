#ifndef table_HPP
#define table_HPP

#include <vector>

class table
{
private:
    std::vector<std::vector<int>> resources;
    std::vector<std::vector<int>> costs;
public:
    table(int n, int m, std::vector<std::vector<int>> c);
    void add_new_supply();
    void add_new_demands();
    void add_new_column_to_costs();
    void add_new_column_to_resources();
    void show_resources();
    void set_resources(int n, int m, int value);
};

#endif