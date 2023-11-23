#ifndef input_data_HPP
#define input_data_HPP

#include <vector>

const int number_of_supplies = 3;
const int number_of_demans = 4;

std::vector<std::vector<int>> costs(
    {{4, 3, 2, 12}, {10, 10, 4, 7}, {12, 10, 11, 5}}
);

std::vector<int> supplies({400, 200, 100});
std::vector<int> demands({300, 150, 100, 200});

//std::vector<int> requirements({300, 150, 100, 100});

#endif