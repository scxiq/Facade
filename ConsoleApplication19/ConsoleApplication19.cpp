#include <iostream>

// Підсистема 1
class Subsystem1 {
public:
    void operation1() const {
        std::cout << "Subsystem 1: Operation 1\n";
    }

    void operation2() const {
        std::cout << "Subsystem 1: Operation 2\n";
    }
};

// Підсистема 2
class Subsystem2 {
public:
    void operation1() const {
        std::cout << "Subsystem 2: Operation 1\n";
    }

    void operation2() const {
        std::cout << "Subsystem 2: Operation 2\n";
    }
};

// Фасад, який надає простий інтерфейс для взаємодії з підсистемою
class Facade {
public:
    Facade() : subsystem1_(), subsystem2_() {}

    void operation() const {
        std::cout << "Facade: Operation\n";
        subsystem1_.operation1();
        subsystem1_.operation2();
        subsystem2_.operation1();
        subsystem2_.operation2();
    }

private:
    Subsystem1 subsystem1_;
    Subsystem2 subsystem2_;
};

int main() {
    // Використання паттерна "Фасад"
    Facade facade;
    facade.operation();

    return 0;
}
