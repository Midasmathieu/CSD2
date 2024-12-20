#include "instrument.h"
#include <iostream>


Instrument::Instrument() : name("default name"), sound("default sound") {
  }

  void Instrument::play() {
    std::cout << name << ": " << sound << "\n";
  }