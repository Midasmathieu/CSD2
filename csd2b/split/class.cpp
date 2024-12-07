#include "class.h"

Instrument::Instrument() {
    std::cout << "constructer" << std::endl;
    std::string number = "wamp";
}

void Instrument::play() {
    std::cout << number << std::endl;
}