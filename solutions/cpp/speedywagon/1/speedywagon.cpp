#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check (pillar_men_sensor* in_struct){
	return in_struct;
}  // bool connection_check ()


int activity_counter (pillar_men_sensor* array, int array_size) {
	int return_value = 0;

	for (int i = 0; i < array_size; i++) {
		return_value += (array + i) -> activity;
	}
	return return_value;
}  // int activity_counter ()

bool alarm_control (pillar_men_sensor* in_struct) {
	if (in_struct == nullptr) {return false;}
	return in_struct -> activity;
}

bool uv_alarm (pillar_men_sensor* in_struct) {
	if (in_struct == nullptr) {return false;}
	if (uv_light_heuristic(&in_struct->data) > in_struct->activity) {
		return true;
	}
	return false;
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
	double avg{};
	for (auto element : *data_array) {
		avg += element;
	}
	avg /= data_array->size();
	int uv_index{};
	for (auto element : *data_array) {
		if (element > avg) ++uv_index;
	}
	return uv_index;
}

}  // namespace speedywagon
