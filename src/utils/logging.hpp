#include <string>

namespace euclid {

	enum LogScope {
		CORE,
		APP
	};

	enum LogLevel {
		DEBUG,
		INFO,
		WARN,
		ERROR,
		FATAL
	};
	
	void log(LogScope scope, LogLevel level, const std::string message);
	void debug(LogScope scope, const std::string message);
	void info(LogScope scope, const std::string message);
	void warn(LogScope scope, const std::string message);
	void error(LogScope scope, const std::string message);
	void fatal(LogScope scope, const std::string message);
}

