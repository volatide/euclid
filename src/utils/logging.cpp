#include "logging.hpp"
#include <stdio.h>
#include <ctime>

#define LOG_FORMAT "[%d] %s: %s\n"
//				[$time] $prefix: $message

namespace euclid {
	void log(LogScope scope, LogLevel level, const std::string message) {
		printf(LOG_FORMAT, std::time(0), euclid::LogPrefix[level], message); 
	}

	void debug(LogScope scope, const std::string message);
	void info(LogScope scope, const std::string message);
	void warn(LogScope scope, const std::string message);
	void error(LogScope scope, const std::string message);
	void fatal(LogScope scope, const std::string message);
}
