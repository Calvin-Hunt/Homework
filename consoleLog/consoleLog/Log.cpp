#include <iostream>

class Log {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
	
private:
	int m_loglevel;

public:
	void SetLevel(int level) {
		m_loglevel = level;
	}

	void error(const char* message) {
		if(m_loglevel>=LogLevelError)
		std::cout << "[error]" << message << std::endl;
	}
	
	void warn(const char* message) {
		if(m_loglevel>=LogLevelWarning)
		std::cout << "[warning]" << message << std::endl;
	}

	void info(const char* message) {
		if(m_loglevel>=LogLevelInfo)
		std::cout << "[info]" << message << std::endl;
	}
};


int main() {
	Log log;
	log.SetLevel(log.LogLevelInfo);
	log.error("fatal");
	log.warn("reminding");
	log.info("information");
	return 0;
}