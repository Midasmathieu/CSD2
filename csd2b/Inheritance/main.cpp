#include <iostream> 
#include "instrument.h"
#include "wind.h"
#include "trumpet.h"


int main() {
    Trumpet atrumpet;
    atrumpet.name = "trompet";
    atrumpet.sound = "pwaa";
    atrumpet.pitch = 99;
    atrumpet.play();

}