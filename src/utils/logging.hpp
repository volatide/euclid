#include <string>

namespace euclid {

	enum LogScope {
		CORE,
		APP
	};

	void debug(LogScope scope, const std::string message);
	void info(LogScope scope, const std::string message);
	void warn(LogScope scope, const std::string message);
	void error(LogScope scope, const std::string message);
	void fatal(LogScope scope, const std::string message);

}

#ifdef LOG_DEBUG
#define APP_DEBUG(message) euclid::debug(euclid::LogScope::APP, message);
#define APP_INFO(message) euclid::info(euclid::LogScope::APP, message);
#endif
