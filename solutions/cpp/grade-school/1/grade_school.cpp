#include "grade_school.h"

namespace grade_school {

const std::map<int, std::vector<std::string>>& school::roster() const {
	return _students;
}

void school::add(std::string_view name, unsigned int grade) {
	_students[grade].emplace_back(name);
	std::sort(_students[grade].begin(), _students[grade].end());
}

std::vector<std::string> school::grade(int grade) {
	return _students[grade];
}
}  // namespace grade_school
