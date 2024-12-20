#ifndef _INSTRUMENT_H_
#define _INSTRUMENT_H_

#include <iostream> 


class Instrument {
public:
    Instrument();
    void play();
protected:
    std::string name;
    std::string sound;
};

#endif