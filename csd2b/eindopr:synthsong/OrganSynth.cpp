#include "OrganSynth.h"

OrganSynth::OrganSynth(){

}

void OrganSynth::setFrequency(float freq){
 organOscOne.setFrequency(freq);
 organOscTwo.setFrequency(freq*1.5);
}

