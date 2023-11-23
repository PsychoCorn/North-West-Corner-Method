#include "plan.hpp"
#include "input_data.hpp"

int main()
{
    plan task(number_of_supplies, number_of_demans, costs, supplies, demands);
    task.create_basic_plan();
    return 0;
}