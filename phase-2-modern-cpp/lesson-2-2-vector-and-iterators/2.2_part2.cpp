#include <iostream>
#include <vector>

void doubleAll(std::vector<int>& v) {
    for(auto& x : v) {
        x *= 2;
    }
}

int main(){
    std::vector<int> vector2 = {3, 5, 7, 56};
    for(const auto& v : vector2) {
        std::cout << v << " -> ";
    };

    doubleAll(vector2);

    std::cout << "\n";
    for(const auto& v : vector2) {
        std::cout << v << " -> ";
    };

    return 0;
}
