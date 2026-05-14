#include <string>
namespace targets {
 // TODO: Insert the code for the alien class here
class Alien {
	public:
		Alien (int x, int y) {
			x_coordinate = x;
			y_coordinate = y;
			health = 3;
		}
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
		int x_coordinate, y_coordinate;
	private:
		int health;
};

}  // namespace target