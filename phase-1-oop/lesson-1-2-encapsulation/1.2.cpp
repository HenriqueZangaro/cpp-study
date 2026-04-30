#include <iostream>
#include <string>

class Car {
    public:
        Car(int carSpeed, std::string carBrand, int carYear)
        : speed(carSpeed), brand(carBrand), year(carYear) {}

        int getSpeed() const {
            return speed;
        }

        int getYear() const {
            return year;
        }

        std::string getBrand() const {
            return brand;
        }

        bool setSpeed(int value) {
            if(value >= 0 && value <= 500) {
                speed = value;
                return true;
            }
            return false;
        }
    
    private:
        int speed;
        std::string brand;
        int year;
    
};

int main() {

    Car car1(350, "Fusca", 1997);

    if(!car1.setSpeed(700)) {
        std::cerr << "Invalid speed value\n";
    }
    
    std::cout << car1.getSpeed();
    
 
    return 0;
}