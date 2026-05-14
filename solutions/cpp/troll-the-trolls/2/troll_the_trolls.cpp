namespace hellmath {

//TODO: Refactor to use switch (case) instead of if

// Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.

enum class AccountStatus {
	troll,	// 0
	guest,	// 1
	user,	// 2
	mod		// 3
};

// Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.

enum class Action {
	read,	// 0
	write,	// 1
	remove	// 2
};

// Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.

bool display_post (AccountStatus poster_acc_status, AccountStatus viewer_acc_status) {
	if (poster_acc_status != AccountStatus::troll) return true; // Hopefully the case most of the time, so its the first return
	if (poster_acc_status == AccountStatus::troll && viewer_acc_status == AccountStatus::troll) return true; // Show troll posts to trolls
	return false; // in all other cases (troll posts to non trolls) return false.
}

// Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.

bool permission_check (Action action, AccountStatus account_status) {
	if (action == Action::read) return true; // everyone can read
	if (action == Action::write && account_status != AccountStatus::guest) return true;
	if (action == Action::remove && account_status == AccountStatus::mod) return true;
	return false;
}

// Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.

bool valid_player_combination (AccountStatus acc_1, AccountStatus acc_2) {
	if (acc_1 == AccountStatus::guest || acc_2 == AccountStatus::guest) return false;
	if (acc_1 == AccountStatus::troll && acc_2 != AccountStatus::troll) return false;
	if (acc_1 != AccountStatus::troll && acc_2 == AccountStatus::troll) return false;
	return true;
}

// Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.

bool has_priority (AccountStatus acc_1, AccountStatus acc_2) {
	return static_cast <int> (acc_1) > static_cast <int> (acc_2);
}

}  // namespace hellmath