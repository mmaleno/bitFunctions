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

bool getBit(int num, int i) { return  (num & (1 << i)) != 0 ; }

void printBinary(int num) {
    for (int i = 7; i >= 0 ; --i) {
        cout << getBit(num, i);
    }
    cout << endl;
}

int setBit(int num, int i) { return num | (1 << i); }

int clearBit(int num, int i) {
    int mask = ~(1 << i);
    return num & mask;
}

int clearBitsMSBthroughI(int num, int i) {
    int mask = (1 << i) - 1;
    return num & mask;
}

int clearBitsIthrough0(int num, int i) {
    int mask = -1 << (i + 1);
    return num & mask;
}

int updateBit(int num, int i, bool bitIs1) {
    int value = bitIs1 ? 1 : 0;
    int mask = ~(1 << i);
    return (num & mask) | (value << i);
}
