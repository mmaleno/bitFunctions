/*
 * bitManipulation.hpp
 *
 * Max Maleno [mmaleno@hmc.edu]
 *
 * Created 10/22/2019
 * Last Updated 10/22/2019
 *
 * This is the header file for CtCI's bitManipulation functions.
 *
 */

#ifndef BIT_MANIPULATION_INCLUDED
#define BIT_MANIPULATION_INCLUDED

#include <iostream>
#include <ostream>
#include "bitTest.hpp"

// A class to provide easy functions to manipulate an int's bits 
class Binary {
 public:
  // default constructor to set value_ to 0, numBits_ to 8 bits
  Binary();

  // constructor to give custom values to value_, numBits_
  Binary(int initNum, int numBits);

  // changes value_
  void setValue(int newNum);

  // returns value_
  int getValue();

  // returns bit at index (0-indexed)
  bool getBit(int index);

  // prints an ASCII representation of number to the command-line
  void printBinary();

  // sets the index-th bit to 1
  void setBit(int index);

  // sets the index-th bit to 0
  void clearBit(int index);

  // sets the most significant bit thru the index-th bit to 0
  void clearBitsMSBthroughI(int index);

  // sets the index-th bit thru the 0-th bit to 0
  void clearBitsIthrough0(int index);

  // sets the index-th bit to the value of bitIs1
  void updateBit(int index, bool bitIs1);

 private:
  int value_;    // holds value of number
  int numBits_;  // holds value of the size of the number
};

#endif
