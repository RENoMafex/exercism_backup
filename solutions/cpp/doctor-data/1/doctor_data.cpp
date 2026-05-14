#include "doctor_data.h"

namespace heaven {
	Vessel::Vessel (std::string name, int generation) {
		Vessel::name = name;
		Vessel::generation = generation;
		Vessel::current_system = star_map::System::Sol;
		Vessel::busters = 0;
	}

	Vessel::Vessel (std::string name, int generation, star_map::System system) {
		Vessel::name = name;
		Vessel::generation = generation;
		Vessel::current_system = system;
		Vessel::busters = 0;
	}

	Vessel Vessel::replicate (std::string name) {
		return Vessel (name, Vessel::generation + 1);
	}

	void Vessel::make_buster (void) {
		busters++;
	}

	bool Vessel::shoot_buster (void) {
		if (busters > 0) {
			busters--;
			return true;
		}
		return false;
	}

	std::string get_older_bob (Vessel vessel_1, Vessel vessel_2) {
		return (vessel_1.generation > vessel_2.generation) ? vessel_2.name : vessel_1.name;
	}

	bool in_the_same_system (Vessel vessel_1, Vessel vessel_2) {
		return (vessel_1.current_system == vessel_2.current_system) ? true : false;
	}

}  // namespace heaven