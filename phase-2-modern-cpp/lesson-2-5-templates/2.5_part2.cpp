#include <iostream>
#include <string>

template <typename T>
class DataStorage {
    private:
        T systemData;
    
    public:
        DataStorage(T data) : systemData(data) {}

        T retrieveData() {
            return systemData;
        }
};

int main() {
    auto one = DataStorage<int>(12);
    auto two = DataStorage<std::string>("Low battery");

    std::cout << "First information: " << one.retrieveData() << std::endl;
    std::cout << "Second information: " << two.retrieveData();
}
