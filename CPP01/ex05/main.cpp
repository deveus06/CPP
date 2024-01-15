#include <iostream>

class Harl {
private:
    typedef void (Harl::*FunctionPointer)();

    enum Severity {
        DEBUG,
        INFO,
        WARNING,
        ERROR,
        NUM_LEVELS
    };

    FunctionPointer functionTable[NUM_LEVELS];
    static const char* levelNames[NUM_LEVELS];

public:
    Harl() {
        functionTable[DEBUG] = &Harl::debug;
        functionTable[INFO] = &Harl::info;
        functionTable[WARNING] = &Harl::warning;
        functionTable[ERROR] = &Harl::error;
    }

    void debug() {
        std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    }

    void info() {
        std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    }

    void warning() {
        std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    }

    void error() {
        std::cerr << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
    }

    void complain(const std::string& level) {
        Severity severity = NUM_LEVELS;

        for (int i = 0; i < NUM_LEVELS; ++i) {
            if (level == levelNames[i]) {
                severity = static_cast<Severity>(i);
                break;
            }
        }

        if (severity != NUM_LEVELS) {
            (this->*functionTable[severity])();
        } else {
            std::cerr << "Unknown severity level: " << level << std::endl;
        }
    }
};

const char* Harl::levelNames[NUM_LEVELS] = { "DEBUG", "INFO", "WARNING", "ERROR" };

int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN");

    return 0;
}
