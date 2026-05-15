#include <iostream>
#include <vector>

int sum(const std::vector<int>& v) {
    int value = 0;
    for(const auto& x : v) {
        value += x;
    }
    return value;
}

int main(){
    std::vector<int> vector = {1, 2, 3, 4, 5};

    int total = sum(vector);
    std::cout << total;

    return 0;
}
