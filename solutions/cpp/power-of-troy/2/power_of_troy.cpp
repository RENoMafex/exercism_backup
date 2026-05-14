#include "power_of_troy.h"

namespace troy {
human::human() {

}


void give_new_artifact(human& this_human, std::string artifact_name) {
	this_human.possession = std::make_unique <artifact> (artifact_name);
}

void exchange_artifacts (std::unique_ptr <artifact>& artifact1,std::unique_ptr <artifact>& artifact2) {
	artifact1.swap(artifact2);
}

void manifest_power (human& this_human, std::string power_name) {
	this_human.own_power = std::make_shared <power> (power_name);
}

void use_power (human& caster, human& target) {
	target.influenced_by = caster.own_power;
}

int power_intensity (human& this_human) {
	if (this_human.own_power == nullptr) return 0;
	return this_human.own_power.use_count();
}
}  // namespace troy

