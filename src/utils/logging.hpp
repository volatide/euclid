#pragma once
#include <string>

namespace euclid::log {
	enum Scope {
		CORE,
		APP
	};

	enum Level {
		DEBUG,
		INFO,
		WARN,
		ERROR,
		FATAL
	};

	const std::string LevelPrefix[] = {
		"DEBUG",
		"INFO",
		"WARN",
		"ERROR",
		"FATAL!"
	};
	
	void append(Scope scope, Level level, const std::string message);

	void debug(Scope scope, const std::string message);
	void info(Scope scope, const std::string message);
	void warn(Scope scope, const std::string message);
	void error(Scope scope, const std::string message);
	void fatal(Scope scope, const std::string message);
}

