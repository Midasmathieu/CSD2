#ifndef INSTRUMENT
#define INSTRUMENT
#include <iostream>


class Instrument {
public:
    Instrument();
    std::string name;
    std::string sound;
    int pitch;
    void play(); 
    int range(int freq);

};

#endif