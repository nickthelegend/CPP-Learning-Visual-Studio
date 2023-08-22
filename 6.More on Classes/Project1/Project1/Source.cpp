#include <iostream>


class Log {


public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

private:

	int m_LogLevel;

public:

	void SetLevel(int LogLevel) {
		int m_LogLevel = LogLevel;
		}


	void Warn(const char* message) {
		std::cout << "[WARNING]: " << message << std::endl;
	}

	void Error(const char* message) {
		std::cout << "[Erro]: " << message << std::endl;
	}

	void Info(const char* message) {
		std::cout << "[Info]: " << message << std::endl;
	}
};



int main() {


	Log log;
	log.SetLevel(1);
	log.Warn();
	std::cin.get();
}