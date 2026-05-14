#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int firstspace = line.find(" ");
        return line.substr(firstspace+1);
    }

    std::string log_level(std::string line) {
        // return the log level
        int endLl = line.find(":");
        return line.substr(1,endLl-2);

    }

    std::string reformat(std::string line) {
        // return the reformatted message
        return log_line::message(line) + " (" + log_line::log_level(line) + ")";
    }
}
