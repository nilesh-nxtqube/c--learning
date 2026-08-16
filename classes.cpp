#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int speed;

public:
    // Constructor
    Car(std::string b, int s) {
        brand = b;
        speed = s;
    }

    // Member function
    void drive() {
        std::cout << brand << " is driving at " << speed << " km/h" << std::endl;
    }

    void accelerate(int amount) {
        speed += amount;
    }
};

int main() {
    Car myCar("Toyota", 60);
    myCar.drive();

    myCar.accelerate(20);
    myCar.drive();

    return 0;
}
