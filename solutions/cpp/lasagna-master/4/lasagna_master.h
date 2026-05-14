#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
	int noodles = 0;
	double sauce = 0;
};

int preparationTime (const std::vector <std::string>& layers, unsigned int minutes = 2);
amount quantities (const std::vector <std::string>& layers);
void addSecretIngredient (std::vector <std::string>& myRecipe, const std::vector <std::string>& otherRecipe);
void addSecretIngredient (std::vector <std::string>& myRecipe, const std::string& secretIngredient);
std::vector <double> scaleRecipe (const std::vector <double>& recipe, unsigned int portions);


}  // namespace lasagna_master
