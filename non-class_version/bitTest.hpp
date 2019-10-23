/*
 * bitTest.hpp
 *
 * Max Maleno [mmaleno@hmc.edu]
 *
 * Created 10/22/2019
 * Last Updated 10/22/2019
 *
 * This is the header file for bitManipulation testing functions.
 *
 */

// include guard
#ifndef BIT_TEST_INCLUDED
#define BIT_TEST_INCLUDED

#include <iostream>
#include <ostream>
#include "bitManipulation.hpp"

// function to test the setBit function
void setBit_test();

// function to test the getBit function
void getBit_test();

// function to test the clearBit function
void clearBit_test();

// function to test the clearBitsMSBthroughI function
void clearBitsMSBthroughI_test();

// function to test the clearBitsIthrough0_test function
void clearBitsIthrough0_test();

// function to test the updateBit function
void updateBit_test();

#endif
