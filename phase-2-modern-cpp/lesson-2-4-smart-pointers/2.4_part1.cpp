#include <iostream>
#include <memory>
#include <string>

class PeripheralController {
    private:
        int portID;
    
    public:
        PeripheralController(int portID) :
        portID(portID) {
            std::cout << "Peripheral connected to port " << portID << std::endl;
        }

        ~PeripheralController() {
            std::cout << "Peripheral disconnected from port " << portID << std::endl;
        }

        void sendData(std::string payload) {
            std::cout << "Sending data: " << payload << std::endl;
        }
};

int main() {

    auto controller = std::make_unique<PeripheralController>(9090);

    controller->sendData("PING");

    return 0;
}