#include <iostream>

void describe(const std::string& name) {
    std::cout << name << "\n";
}

void triple(int& x) {
    x = x * 3;
}

int main() {

    std::string name1 = "I am learning C++ to work with hardware!";
    int number = 36;

    describe(name1);
    triple(number);
    std::cout << number;

    return 0;
}