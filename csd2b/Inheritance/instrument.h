#ifndef _INSTRUMENT_H_
#define _INSTRUMENT_H_

#include <iostream> 


class Instrument {
public:
    Instrument();
    void play(int note);
    int range();
    
protected:
    std::string name;
    std::string sound;
    int note;
    bool material;
    int lowestNote;
    int highestNote;
};

#endif