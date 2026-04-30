#include <iostream>
#include <string>

class Sensor {
    protected:
        int id;
        std::string name;

    public:
        Sensor(int id, std::string name)
        : name(name), id(id) {}

        virtual void describe() = 0;

        virtual ~Sensor() { // Virtual destructor
            std::cout << "Sensor destroyed\n";
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

            void describe() override {
                std::cout << "NDVI Sensor\n";
                std::cout << "Channel: " << channel << "\n";
                std::cout << "Calibration Factor: " << calibrationFactor << "\n";
            }
};

int main() {

    Sensor* sensors[2];
    sensors[0] = new TemperatureSensor(123, "Temperature Machine", -12, 98);
    sensors[1] = new NDVISensor(4435, "Drone Sensor", 3, 1.3455);

    for(int i = 0; i < 2; i++) {
        sensors[i]->describe();
        delete sensors[i];
    }

    return 0;
}