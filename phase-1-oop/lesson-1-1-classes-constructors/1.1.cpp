#include <iostream>
#include <string>

class Car {
    public:
        int speed;
        std::string brand;
        int year;
    
    // Constructor — automatically called when an object is instantiated, guarantees initialization
    Car(int carSpeed, std::string carBrand, int carYear)
    : speed(carSpeed), brand(carBrand), year(carYear) {}
};

int main() {

    // Inicializing an object
    Car car1(350, "Ferrari", 2025); // constructor runs here — no way around it
    Car car2(278, "BMW", 2022);

    std::cout << "Your first car is:\n Brand: " << car1.brand 
    << "\n Year: " << car1.year << "\n Speed: " << car1.speed << " Mph" << std::endl;

    std::cout << "Your second car is:\n Brand: " << car2.brand 
    << "\n Year: " << car2.year << "\n Speed: " << car2.speed << " Mph" << std::endl;
 
    return 0;
}