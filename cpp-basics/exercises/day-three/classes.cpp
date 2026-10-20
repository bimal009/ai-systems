
#include <iostream>

class Log {
public:
    const int LogLevelError = 0;
    const int LogLevelWarn  = 1;
    const int LogLevelInfo  = 2;

private:
    int LogLevel = LogLevelInfo;

public:
    void Warn(const char* message) {
        if (LogLevel >= LogLevelWarn) {
            std::cout << "[WARNING]: " << message << std::endl;
        }
    }

    void Info(const char* message) {
        if (LogLevel >= LogLevelInfo) {
            std::cout << "[INFO]: " << message << std::endl;
        }
    }

    void Error(const char* message) {
        if (LogLevel >= LogLevelError) {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }

    void SetLogLevel(int level) {
        LogLevel = level;
    }
};

int main() {
    Log log;

    log.SetLogLevel(log.LogLevelInfo);

    log.Info("Hello world");
    log.Warn("This is a warning");
    log.Error("Something went wrong");

    return 0;
}
