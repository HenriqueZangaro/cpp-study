#include <iostream>
#include <memory>
#include <string>

class SystemClock {
    public:
        SystemClock() {
            std::cout << "Clock started" << std::endl;
        }
        ~SystemClock() {
            std::cout << "Clock finished" << std::endl;
        }
        void showTime() {
            std::cout << "[System Clock] Current Uptime: 1245 ms" << std::endl;
        }
};

void MonitorTask(std::shared_ptr<SystemClock> clock) {
    std::cout << "Calling Monitor Task"<< std::endl;
    std::cout << "Number of copies: " << clock.use_count() << std::endl;
}

int main() {

    auto clock = std::make_shared<SystemClock>();

    std::cout << "Number of copies: " << clock.use_count() << std::endl;

    MonitorTask(clock);

    return 0;
}