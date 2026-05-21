#include <iostream>

template <typename T>
T clampSignal(T value, T minLimit, T maxLimit) {
    return (value < minLimit) ? minLimit : ((value > maxLimit) ? maxLimit : value);
}

int main() {

    auto result = clampSignal<int>(10, 5, 12); // Return 10
    auto result2 = clampSignal<double>(1.34, 5.14, 12); // Return 5.14
    auto result3 = clampSignal<float>(10.55456, 0.456, 1.52); // Return 1.52

    std::cout << "Int clamp result: " << result << std::endl;
    std::cout << "Double clamp result: " << result2 << std::endl;
    std::cout << "Float clamp result: " << result3 << std::endl;
}