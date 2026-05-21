#include <iostream>

void initSensor(const std::string& name, int& id, float& value) {
    id = 12;
    value = 4.567;
}

int main() {
    int id;
    float value;
    std::string name = "Temperature Sensor";

    initSensor(name, id, value);

    std::cout << "Name:" << name << "\nValue: " << value << "\nID: " << id << "\n";
    return 0;
}