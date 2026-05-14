#pragma once

#include <string>
#include <memory>

namespace troy {

class human {
	public:
		human ();
		std::unique_ptr <std::string> possession;
		std::shared_ptr <std::string> own_power;
		std::shared_ptr <std::string> influenced_by;
};

void give_new_artifact (human&, std::string);

struct artifact {
	// constructors needed (until C++20)
	artifact(std::string name) : name(name) {}
	std::string name;
};

struct power {
	// constructors needed (until C++20)
	power(std::string effect) : effect(effect) {}
	std::string effect;
};

}  // namespace troy
