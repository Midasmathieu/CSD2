#include <iostream>
#include <string>
#include "guitar.h"
#include "trumpet.h"
#include "klarinet.h"


int main() {
  Trumpet aTrumpet;
  aTrumpet.play();
  Klarinet aKlarinet;
  aKlarinet.play();
  Guitar aGuitar;
  aGuitar.play();
}