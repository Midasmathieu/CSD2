#include "callback.h"

CustomCallback::CustomCallback (float sampleRate)
  : AudioCallback (sampleRate), samplerate (sampleRate) {
  std::cout << "Hallo CSD'er :)" << std::endl;
}

//check alles in 
void CustomCallback::prepare (int rate) {
  samplerate = (float) rate;
  sineOsc.setSamplerate (samplerate);
  squareOsc.setSamplerate (samplerate);
  std::cout << "\nsamplerate: " << samplerate << "\n";
}

void CustomCallback::process (AudioBuffer buffer) {
  auto [inputChannels,
        outputChannels,
        numInputChannels,
        numOutputChannels,
        numFrames] = buffer;

  for (int sample = 0u; sample < numFrames; ++sample) {
      squareOsc.tick();
      sineOsc.tick();
    for (int channel = 0u; channel < numOutputChannels; ++channel) {
        outputChannels[channel][sample] = squareOsc.getSample() + sineOsc.getSample();
        outputChannels[channel][sample] *= 0.4f;
    }
  }
}