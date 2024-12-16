#include "instrument.h"

Instrument::Instrument() {
    std::cout << "constructer" << std::endl;
}



void Instrument::play() {
    std::cout << name << " plays: '" << sound << "' at midinote: " << pitch << std::endl;
}


int Instrument::range(int freq) {
  return freq;  
}