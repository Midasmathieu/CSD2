#include <iostream>
#include <string>
#include "guitar.h"
#include "trumpet.h"
#include "klarinet.h"
#include "piano.h"


int main() {
  Trumpet aTrumpet;
  aTrumpet.play(60);
  Klarinet aKlarinet;
  aKlarinet.play(20);
  Guitar aGuitar;
  aGuitar.play(40);
  Piano aPiano;
  aPiano.play(55);
}