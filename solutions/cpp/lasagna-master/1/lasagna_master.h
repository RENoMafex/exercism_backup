#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

typedef std::vector<std::string> strvec; // i am lazy.
// would "using strvec = std::vector<std::string>" be better?

struct amount {
	int noodles;
	double sauce;
};

int preparationTime (strvec layers, unsigned int minutes = 2);
amount quantities (strvec layers);
void addSecretIngredient (strvec& myRecipe, strvec otherRecipe);
void addSecretIngredient (strvec& myRecipe, std::string secretIngredient);
std::vector <double> scaleRecipe (std::vector <double> recipe, unsigned int portions);


}  // namespace lasagna_master
