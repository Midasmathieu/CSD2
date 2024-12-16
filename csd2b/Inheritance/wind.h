#ifndef WIND
#define WIND

#include <iostream> 
#include "instrument.h"

class Wind : public Instrument {
public: 
    Wind();
private:
    bool air();
    bool blowhole();
    int numberButtons();
};

#endif