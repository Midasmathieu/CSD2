#include "square.h"

class OrganSynth {
public:
    OrganSynth();
    Square First;
    Square Second;

    void setFrequency(float freq = 220.0);
    float getSample();
};
