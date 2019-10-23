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

// returns bit at i (0-indexed)
bool getBit(int num, int i);

// prints an ASCII representation of number to the command-line
void printBinary(int num);

// returns a number with the i-th bit set to 1
int setBit(int num, int i);

// returns a number with the i-th bit set to 0
int clearBit(int num, int i);

// returns a number with the most significant bit thru the i-th bit set to 0
int clearBitsMSBthroughI(int num, int i);

// returns a number with the i-th bit thru the 0-th bit set to 0
int clearBitsIthrough0(int num, int i);

// returns a number with the i-th bit set to the value of bitIs1
int updateBit(int num, int i, bool bitIs1);

#endif
