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
        
        ~Car() {
            std::cout << "Car destroyed: " << brand << "\n";
        }
    
    private:
        int speed;
        std::string brand;
        int year;
    
};

int main() {

    Car firstCar(200, "John Deere", 2020);

    Car* secondCar = new Car(300, "Audi", 2026);
    
    delete secondCar;
 
    return 0;
}