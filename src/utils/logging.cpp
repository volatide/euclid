#include "logging.hpp"
#include <stdio.h>
#include <ctime>

#define LOG_FORMAT "[%d] %s: %s\n" // [$time] $prefix: $message

namespace euclid::log {
	void append(Scope scope, Level level, const std::string message) {
		printf(LOG_FORMAT, std::time(0), euclid::log::LevelPrefix[level].c_str(), message.c_str()); 
	}

	/*
	void debug(Scope scope, const std::string message);
	void info(Scope scope, const std::string message);
	void warn(Scope scope, const std::string message);
	void error(Scope scope, const std::string message);
	void fatal(Scope scope, const std::string message);
	*/
}
