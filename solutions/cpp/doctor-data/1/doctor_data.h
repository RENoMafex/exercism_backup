#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H
#include <string>


namespace star_map {
	enum class System{
		Sol, 			// 0
		BetaHydri,		// 1
		EpsilonEridani,	// 2
		AlphaCentauri,	// 3
		DeltaEridani,	// 4
		Omicron2Eridani	// 5
	};
}

namespace heaven {
	class Vessel {
		public:
			// Functions
			Vessel (std::string str, int integer);
			Vessel (std::string str, int integer, star_map::System system);
			Vessel replicate (std::string str);
			void make_buster (void);
			bool shoot_buster (void);


			// Variables
			star_map::System current_system;
			std::string name;
			int generation;
			int busters;
			
		private:
	};  // class Vessel

	std::string get_older_bob (Vessel vessel_1, Vessel vessel_2);
	bool in_the_same_system (Vessel vessel_1, Vessel vessel_2);

}  // namespace heaven


#endif