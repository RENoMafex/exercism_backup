#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <vector>
#include <map>
#include <algorithm>

namespace grade_school {

class school{
	public:
		const std::map<int, std::vector<std::string>>& roster() const;
		void add(std::string_view name, unsigned int grade);
		std::vector<std::string> grade(int grade);

	private:
		std::map<int, std::vector<std::string>> _students = {};

};
}  // namespace grade_school

#endif  // GRADE_SCHOOL_H