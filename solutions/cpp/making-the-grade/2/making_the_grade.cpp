#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
	// TODO: Implement round_down_scores
	std::vector <int> output;
	for (int i = 0; i < student_scores.size(); i++) {
		int temporary = static_cast <int> (student_scores.at(i));
		output.emplace_back(temporary);
	}
	return {output};
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
	// TODO: Implement count_failed_students
	int result = 0;
	for (int i = 0; i < student_scores.size(); i++) {
		if (student_scores.at(i) <= 40) {
		result++;
		}
	}
	return result;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
	// TODO: Implement letter_grades
	const int interval = (highest_score - 40) / 4;
	int d = 41;
	int c = d + interval;
	int b = c + interval;
	int a = b + interval;
	return {d, c, b, a};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
	std::vector<int> student_scores, std::vector<std::string> student_names) {
	// TODO: Implement student_ranking
	std::vector <std::string> output;
	for (int i = 0; i < student_scores.size(); i++) {
		std::string name = student_names.at (i);
		std::string score = std::to_string (student_scores.at(i));
		std::string rank = std::to_string (i + 1);
		output.push_back(rank + ". " + name + ": " + score);
	}
	return {output};
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(
	std::vector<int> student_scores, std::vector<std::string> student_names) {
	// TODO: Implement perfect_score
	int score;
	int num;
	bool perfect = false;
	for (int i = 0; i < student_names.size(); i++) {
		score = student_scores.at (i);
		num = i;
		if (score == 100) {perfect = true; break;}
	}
	if (perfect) {return student_names.at (num);}
	else {return "";}
}