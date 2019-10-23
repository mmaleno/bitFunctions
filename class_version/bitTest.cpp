/*
 * bitTest.cpp
 *
 * Max Maleno [mmaleno@hmc.edu]
 *
 * Created 10/22/2019
 * Last Updated 10/22/2019
 *
 * This is the implementation file for bitManipulation testing functions.
 *
 */

#include <iostream>
#include <ostream>
#include <cassert>
#include "bitTest.hpp"

using namespace std;

// for completeness, should add constructor tests

void setBit_test() {
    Binary num = Binary(0, 8);

    num.setBit(0);  // 00000001
    assert(num.getValue() == 1);

    num.setBit(1);  // 00000011
    assert(num.getValue() == 3);

    num.setBit(2);  // 00000111
    assert(num.getValue() == 7);

    num.setBit(3);  // 00001111
    assert(num.getValue() == 15);

    num.setBit(4);  // 00011111
    assert(num.getValue() == 31);

    num.setBit(5);  // 00111111
    assert(num.getValue() == 63);

    num.setBit(6);  // 01111111
    assert(num.getValue() == 127);

    num.setBit(7);  // 11111111
    assert(num.getValue() == 255);

    cout << "setBit_test() passed!" << endl << endl;
}

void getBit_test() {
    Binary num = Binary(1, 8);  // 00000001
    assert(num.getBit(0));
    assert(!num.getBit(1));

    num.setValue(2);  // 00000010
    assert(!num.getBit(0));
    assert(num.getBit(1));

    num.setValue(127);  // 01111111
    assert(!num.getBit(7));
    assert(num.getBit(6));
    assert(num.getBit(3));

    cout << "getBit_test() passed!" << endl << endl;
}

void clearBit_test() {
    Binary num = Binary();  // 00000000
    num.clearBit(0);
    assert(num.getValue() == 0);

    num.setValue(1);  // 00000001
    num.clearBit(0);
    assert(num.getValue() == 0);

    num.setValue(3);  // 00000011
    num.clearBit(0);  // 00000010
    assert(num.getValue() == 2);

    num.setValue(255);  // 11111111
    num.clearBit(7);  // 01111111
    assert(num.getValue() == 127);

    cout << "clearBit_test() passed!" << endl << endl;
}

void clearBitsMSBthroughI_test() {
    Binary num = Binary(255, 8);  // 11111111

    num.clearBitsMSBthroughI(7);  // 01111111
    assert(num.getValue() == 127);

    num.clearBitsMSBthroughI(4);  // 00001111
    assert(num.getValue() == 15);

    num.clearBitsMSBthroughI(2);  // 00000011
    assert(num.getValue() == 3);

    num.clearBitsMSBthroughI(0);  // 00000000
    assert(num.getValue() == 0);

    cout << "clearBitsMSBthroughI_test() passed!" << endl << endl;
}

void clearBitsIthrough0_test() {
    Binary num = Binary(255, 8);

    num.clearBitsIthrough0(0);  // 11111110
    assert(num.getValue() == 254);

    num.clearBitsIthrough0(2);  // 11111000
    assert(num.getValue() == 248);
    
    num.clearBitsIthrough0(6);  // 10000000
    assert(num.getValue() == 128);

    cout << "clearBitsIthrough0_test() passed!" << endl << endl;
}

void updateBit_test() {
    Binary num = Binary();  // 00000000

    num.updateBit(0, 1);  // 00000001
    assert(num.getValue() == 1);

    num.updateBit(0, 0);  // 00000000
    assert(num.getValue() == 0);

    num.setValue(255);  // 11111111
    num.updateBit(7, 0);  // 01111111
    assert(num.getValue() == 127);

    cout << "updateBit_test() passed!" << endl << endl;
}
