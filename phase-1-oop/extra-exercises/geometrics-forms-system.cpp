#include <iostream>
#include <string>
#include <vector>

class Shape {
    protected:
        std::string name;
    
    public:
        Shape(std::string name)
        : name(name) {}
        virtual ~Shape() {}
        virtual float area() = 0;
        virtual float perimeter() = 0;
        virtual void describe() = 0;
     
};

class Circle : public Shape {
    private:
        float radius;

    public:
        Circle(std::string name, float radius)
        : Shape(name), radius(radius) {}

        float area() override {
            return (radius * radius) * 3.14159;
        }
        float perimeter() override {
            return (2 * radius * 3.14159);
        }
        void describe() override {
            std::cout << "Form name: " << name << "\n";
            std::cout << "Form area: " << area() << "\n";
            std::cout << "Form perimeter: " << perimeter() << "\n";
        }
};

class Rectangle : public Shape {
    private:
        float base;
        float height;
    public:
        Rectangle(std::string name, float base, float height)
        : Shape(name), base(base), height(height) {}
        float area() override {
            return base * height;
        }
        float perimeter() override {
            return 2 * (base + height);
        }
        void describe() override {
            std::cout << "Form name: " << name << "\n";
            std::cout << "Form area: " << area() << "\n";
            std::cout << "Form perimeter: " << perimeter() << "\n";
        }
};

class Triangle : public Shape {
    private:
        float base;
        float height;
        float side;
    
    public:
        Triangle(std::string name, float base, float height, float side)
        : Shape(name), base(base), height(height), side(side) {}

        float area() override {
            return (base * height) / 2;
        }
        float perimeter() override {
            return (base + height + side);
        }
        void describe() override {
            std::cout << "Form name: " << name << "\n";
            std::cout << "Form area: " << area() << "\n";
            std::cout << "Form perimeter: " << perimeter() << "\n";
        }

};

int main() {
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle("Circle 1", 10));
    shapes.push_back(new Circle("Circle 2", 10));
    shapes.push_back(new Rectangle("Rectangle 1", 10, 22.45));
    shapes.push_back(new Rectangle("Rectangle 2", 1.30, 2.75));
    shapes.push_back(new Rectangle("Rectangle 3", 10.345, 245));
    shapes.push_back(new Triangle("Triangle 1", 3, 4, 5));
    shapes.push_back(new Triangle("Triangle 2", 32, 43, 54));

    for (int i = 0; i < shapes.size(); i++)
    {
        shapes[i]->describe();
        delete shapes[i];
    }
    

    return 0;
}