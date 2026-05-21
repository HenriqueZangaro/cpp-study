#include <iostream>
#include <map>
#include <string>

int main () {

    std::map<int, std::string> errorLog;

    errorLog[100] = "Low Battery Warning";
    errorLog[404] = "Sensor Disconnected";
    errorLog[500] = "System Overheating ";

    std::cout << "Enter an error code: " << std::endl;
    int inputCode;
    std::cin >> inputCode;

    auto it = errorLog.find(inputCode);

    if(it != errorLog.end()) {
        std::cout << "Error Log: " << it->second << std::endl;
    } else {
        std::cout << "Error code not found" << std::endl;
    }

    return 0;
}