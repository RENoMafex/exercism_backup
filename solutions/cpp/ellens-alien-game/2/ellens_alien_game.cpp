#include <string>
namespace targets {
class Alien {
	public:
	//constructor
		Alien (int x, int y) {
			x_coordinate = x;
			y_coordinate = y;
		}
	//public functions
		int get_health () {
			return health;
		}

		bool hit () {
			if (health != 0) {
				health -= 1;
			}
			return true;
		}

		bool is_alive () {
			if (health < 1) {
				return false;
			} else {
				return true;
			}
		}

		bool teleport (int x_new, int y_new) {
			x_coordinate = x_new;
			y_coordinate = y_new;
			return true;
		}

		bool collision_detection (targets::Alien other) {
			int other_x = other.x_coordinate;
			int other_y = other.y_coordinate;
			if ((other_x == x_coordinate) && (other_y == y_coordinate)) {
				return true;
			} else {
				return false;
			}
		}
	//public variables
		int x_coordinate = 0;
		int y_coordinate = 0;

		private:
			int health = 3;
};

}  // namespace target