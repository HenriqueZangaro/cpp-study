#include <iostream>
#include <map>
#include <string>

int main () {

    std::map<int, std::string> errorLog;

    errorLog[100] = "Low Battery Warning";
    errorLog[404] = "Sensor Disconnected";
    errorLog[500] = "System Overheating ";

    std::cout << "Enter a code error: " << std::endl;
    int inputCode;
    std::cin >> inputCode;

    std::cout << errorLog[inputCode];

    return 0;
}