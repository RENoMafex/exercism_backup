#include "power_of_troy.h"

namespace troy {
human::human() {

}


void give_new_artifact(human this_human, std::string input) {
	artifact this_artifact (input);

	this_human.possession = std::make_unique <std::string> (this_artifact.name);
}

}  // namespace troy

