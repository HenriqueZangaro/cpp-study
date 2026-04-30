#include <iostream>
#include <string>

class Sensor {
    protected:
        int id;
        std::string name;

    public:
        Sensor(int id, std::string name)
        : name(name), id(id) {}

        virtual void describe() {
            std::cout << id << " " << name << ": Generic sensor\n";
        }
};

class TemperatureSensor : public Sensor {
    private:
        float minTemp;
        float maxTemp;
    
    public:
        TemperatureSensor(int id, std::string name,float mintemp, float maxtemp)
        : Sensor(id, name),
        maxTemp(maxtemp), minTemp(mintemp) {}

        void describe() override {
            Sensor::describe();
            std::cout << "Temperature Sensor\n";
            std::cout << "Min Temp: " << minTemp << "\n";
            std::cout << "MaxTemp: " << maxTemp << "\n";
        }
};

class NDVISensor : public Sensor {
    private:
        int channel;
        float calibrationFactor;
    
        public:
            NDVISensor(int id, std::string name, int channel, float factor)
            : Sensor(id, name),
            channel(channel), calibrationFactor(factor) {}

            void describe() {
                Sensor::describe();
                std::cout << "NDVI Sensor\n";
                std::cout << "Channel: " << channel << "\n";
                std::cout << "Calibration Factor: " << calibrationFactor << "\n";
            }
};

int main() {
    Sensor sensor(1, "Signal Sensor");
    TemperatureSensor sensor2(2, "Temperature", 10, 90);
    NDVISensor sensor3(3, "NDVI", 1, 0.005);

    sensor.describe();
    sensor2.describe();
    sensor3.describe();
}



// 1 - precisa ser protected pois precisa ser acessado pelas classes "filhos", se fosse privete, não seria possíval acessar

// 2 -  creio que ele não incializa corretamente, pois precisa inicializar a classe base com as informações

// 3 - 