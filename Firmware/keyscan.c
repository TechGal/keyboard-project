/*
Aila Simpson
April 2022

This program scans a keyboard for any pressed buttons,
and then sends them to the USB interface on the RP2040
*/

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

int keyPress;
int valToSend;

static char rows[] {
  keyA = ,
  keyB = ,
}

static char cols[] {
  key1 = ;
  key2 = ;
}

static int keyValue[][] {
  [11, 12, 13, 14],
  [21, 22, 23, 24]
}

int scanKeys() {
  for (/*keys in rows*/) {
    for (/*keys in cols*/) {
      keyPress = ispressed(rowKey, colKey);
      if (keyPress){
        valToSend = keyValue[rowKey][colKy]
        /*Send VIA USB*/
        /*Need a delay to avoid multiple presses?*/
      }
  }
}

bool isPressed() {
  /*Is the key at the current row,col pressed?*/
}
