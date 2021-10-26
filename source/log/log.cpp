#include <iostream>
#include <string>

#include "log.hpp"

void log(std::string msg, int logLvl) {
    std::cout << "Log: " << msg << "\n";
}
