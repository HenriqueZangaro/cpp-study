#include <iostream>
#include <vector>

int main(){
    std::vector<int> vector = {1, 2, 3, 4, 5};

    for(const auto& x : vector) {
        std::cout << x << std::endl;
    }
}
