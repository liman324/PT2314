#include <Wire.h> 
#include <PT2314.h>

PT2314 pt;

void setup() {
     audio();
}

void loop() {
}

void audio(){
  pt.setVolume(45); // int 0...56 === -70...0 dB step 1.25 dB
  pt.setAttL(0); // int 0...24 === 0...-30 db step 1.25 dB > int 31 === mute on     
  pt.setAttR(0); // int 0...24 === 0...-30 dB step 1.25 dB > int 31 === mute on
  pt.setSwitch(0, 0, 0); 
        // input      int 0..3 === IN 1...4 
        // loudness   int 0...1 === 1-on 0-off
        // input gain int 0...3 === 11.25...0 dB step 3.75 dB
  pt.setBass(0);   // int -7...+7 === -14...+14 dB step 2 dB
  pt.setTreble(0); // int -7...+7 === -14...+14 dB step 2 dB
  }
