#include "instrument.h"
#include <iostream>


Instrument::Instrument() : name("default name"), sound("default sound"), note(0) {
  }

  void Instrument::play(int note) {
    std::cout << name << ": " << sound << " at midi note " << note << "\n";
  }

  int Instrument::range() {
    int range = highestNote - lowestNote;
    std::cout << range << std::endl;
    return range;
  }