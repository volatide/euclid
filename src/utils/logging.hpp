#pragma once
#include <string>

namespace euclid::log {
	enum Scope {
		CORE = 0,
		APP = 1
	};

	enum Level {
		DEBUG = 0,
		INFO = 1,
		WARN = 2,
		ERROR = 3,
		FATAL = 4
	};


	const std::string ScopePrefix[] = {
		"Euclid",
		"App"
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

