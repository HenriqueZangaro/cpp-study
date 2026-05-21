#include <iostream>
#include <array>

int main() {

    std::array<double, 5> calibrationCoefficients = {3.45, 6.5547, 12.34, 0.00045, 139.239};
    
    for (auto& value : calibrationCoefficients)
    {
        value *= 1.5;
    }
    
    for (const auto& value2 : calibrationCoefficients)
    {
        std::cout << "Calibrated value: " << value2 << "\n";
    }
    
    return 0;
}