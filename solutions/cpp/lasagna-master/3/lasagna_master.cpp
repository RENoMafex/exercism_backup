#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime (const std::vector <std::string>& layers, unsigned int minutes) {
	return layers.size() * minutes;
}

amount quantities (const std::vector <std::string>& layers) {
	amount result = {};
	for (auto str : layers) {
		if (str == "noodles") result.noodles += 50;
		else if (str == "sauce") result.sauce += 0.2;
	}
	return result;
}

void addSecretIngredient (std::vector <std::string>& myRecipe, const std::vector <std::string>& otherRecipe) {
	myRecipe.back() = otherRecipe.back();
}

void addSecretIngredient (std::vector <std::string>& myRecipe, const std::string& secretIngredient) {
	std::vector<std::string> result = {secretIngredient};
	addSecretIngredient (myRecipe, result);
}

std::vector <double> scaleRecipe (const std::vector <double>& quantities, unsigned int portions) {
	std::vector <double> result = {};
	for (const auto d : quantities) {
		result.emplace_back (d * portions / 2);
	}
	return result;
}
}  // namespace lasagna_master
