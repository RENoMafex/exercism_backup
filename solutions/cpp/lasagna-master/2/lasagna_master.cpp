#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime (const std::vector <std::string>& layers, unsigned int minutes) {
	return layers.size() * minutes;
}

amount quantities (const std::vector <std::string>& layers) {
	amount result = {};
	for (const std::string& str : layers) {
		if (str == "noodles") result.noodles += 50;
		else if (str == "sauce") result.sauce += 0.2;
	}
	return result;
}

void addSecretIngredient (std::vector <std::string>& myRecipe, std::vector <std::string> otherRecipe) {
	myRecipe.back() = otherRecipe.at (otherRecipe.size() - 1);
}

void addSecretIngredient (std::vector <std::string>& myRecipe, std::string secretIngredient) {
	myRecipe.back() = secretIngredient;
}

std::vector <double> scaleRecipe (const std::vector <double>& quantities, unsigned int portions) {
	std::vector <double> result = {};
	for (const double d : quantities) {
		result.emplace_back (d * portions / 2);
	}
	return result;
}
}  // namespace lasagna_master
