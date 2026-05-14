#include "raindrops.h"

namespace raindrops {
    std::string convert (int num) {
        std::string retVal;
        if (!(num % 3)) {
            retVal = "Pling";
        }
        if (!(num % 5)) {
            retVal = retVal + "Plang";
        }
        if (!(num % 7)) {
            retVal = retVal + "Plong";
        }
        if (!retVal.length()) {
            retVal = std::to_string(num);
        }
        return retVal;
    }
}  // namespace raindrops
