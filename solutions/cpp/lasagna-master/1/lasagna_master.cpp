#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime (strvec layers, unsigned int minutes) {
	return layers.size() * minutes;
}

amount quantities (strvec layers) {
	amount retStruct;
	retStruct.noodles = 0;
	retStruct.sauce = 0.0;
	for (const std::string& str : layers) {
		if (str == "noodles") retStruct.noodles += 50;
		else if (str == "sauce") retStruct.sauce += 0.2;
	}
	return retStruct;
}

void addSecretIngredient (strvec& myRecipe, strvec otherRecipe) {
	myRecipe.at (myRecipe.size() - 1) = otherRecipe.at (otherRecipe.size() - 1);
}

void addSecretIngredient (strvec& myRecipe, std::string secretIngredient) {
	myRecipe.at (myRecipe.size() - 1) = secretIngredient;
}

std::vector <double> scaleRecipe (std::vector <double> quantities, unsigned int portions) {
	std::vector <double> retVector = {};
	for (int i = 0; i < static_cast <int> (quantities.size()); i++) {
		double d = (quantities.at (i) * portions) / 2;
		retVector.emplace_back (d);
	}
	return retVector;
}
}  // namespace lasagna_master
