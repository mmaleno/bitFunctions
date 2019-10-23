/*
 * bitManipulation.cpp
 *
 * Max Maleno [mmaleno@hmc.edu]
 *
 * Created 10/22/2019
 * Last Updated 10/22/2019
 *
 * This is the implementation file for CtCI's bitManipulation functions.
 *
 */

#include <iostream>
#include <ostream>
#include <cassert>
#include "bitManipulation.hpp"

using namespace std;

Binary::Binary()
    :   value_{0},
        numBits_{8}
{
    printBinary();
}

Binary::Binary(int initNum, int numBits)
    :   value_{initNum},
        numBits_{numBits}
{
    printBinary();
}

void Binary::setValue(int newNum) { value_ = newNum; }

int Binary::getValue() { return value_; }

bool Binary::getBit(int index) { return  (value_ & (1 << index)) != 0 ; }

// want to update this to << operator eventually
void Binary::printBinary() {
    cout << "New Binary: ";
    for (int index = numBits_-1; index >= 0 ; --index) {
        cout << getBit(index);
    }
    cout << endl;
}

void Binary::setBit(int index) { value_ |= (1 << index); }

void Binary::clearBit(int index) {
    int mask = ~(1 << index);
    value_ &= mask;
}

void Binary::clearBitsMSBthroughI(int index) {
    int mask = (1 << index) - 1;
    value_ &= mask;
}

void Binary::clearBitsIthrough0(int index) {
    int mask = -1 << (index + 1);
    value_ &= mask;
}

void Binary::updateBit(int index, bool bitIs1) {
    int oneOrZero = bitIs1 ? 1 : 0;
    int mask = ~(1 << index);
    value_ = (value_ & mask) | (oneOrZero << index);
}
