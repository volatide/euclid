#include "logging.hpp"
#include <stdio.h>
#include <ctime>

#define LOG_FORMAT "[%d] (%s) %s: %s\n" // [$time] %scope $prefix: $message

namespace euclid::log {
	Level GLOBAL_LOG_LEVEL = Level::DEBUG; // global log level 	

	void append(Scope scope, Level level, const std::string message) {

		if( level >= GLOBAL_LOG_LEVEL )
			// c_str() is a dumb workaround
			printf(LOG_FORMAT, std::time(0), ScopePrefix[scope].c_str(), LevelPrefix[level].c_str(), message.c_str()); 
	}

	/*
	void debug(Scope scope, const std::string message);
	void info(Scope scope, const std::string message);
	void warn(Scope scope, const std::string message);
	void error(Scope scope, const std::string message);
	void fatal(Scope scope, const std::string message);
	*/
}
