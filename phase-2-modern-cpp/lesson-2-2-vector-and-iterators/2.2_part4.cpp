#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> vector = {"LDR", "ThermalSensor", "Ultrassonic"};

    for (auto it = vector.begin(); it != vector.end(); it++)
    {
        std::cout << *it << " ";
    }
    

    return 0;
}
