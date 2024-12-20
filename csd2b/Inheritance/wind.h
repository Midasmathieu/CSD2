#ifndef _WIND_H_
#define _WIND_H_
#include "instrument.h"
#include <iostream>

class Wind : public Instrument {
public:
    Wind();
    float boreSize;
    float tubingLength;
};
#endif