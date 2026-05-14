#pragma once

#include <string>
#include <vector>

namespace speedywagon {

struct pillar_men_sensor {
    int activity{};
    std::string location{};
    std::vector<int> data{};
};

bool connection_check (pillar_men_sensor* in_struct);

int activity_counter (pillar_men_sensor* array, int array_size);

bool alarm_control (pillar_men_sensor* in_struct);

bool uv_alarm (pillar_men_sensor* in_struct);

int uv_light_heuristic(std::vector<int>* data_array);

}  // namespace speedywagon
