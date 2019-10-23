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

void setBit_test() {
    int num = 0;

    num = setBit(num, 0);  // 00000001
    assert(num == 1);

    num = setBit(num, 1);  // 00000011
    assert(num == 3);

    num = setBit(num, 2);  // 00000111
    assert(num == 7);

    num = setBit(num, 3);  // 00001111
    assert(num == 15);

    num = setBit(num, 4);  // 00011111
    assert(num == 31);

    num = setBit(num, 5);  // 00111111
    assert(num == 63);

    num = setBit(num, 6);  // 01111111
    assert(num == 127);

    num = setBit(num, 7);  // 11111111
    assert(num == 255);

    cout << "setBit_test() passed!" << endl << endl;
}

void getBit_test() {
    int num = 1;  // 00000001
    assert(getBit(num, 0));
    assert(!getBit(num, 1));

    num = 2;  // 00000010
    assert(!getBit(num, 0));
    assert(getBit(num, 1));

    num = 127;  // 01111111
    assert(!getBit(num, 7));
    assert(getBit(num, 6));
    assert(getBit(num, 3));

    cout << "getBit_test() passed!" << endl << endl;
}

void clearBit_test() {
    int num = 0;  // 00000000
    num = clearBit(num, 0);
    assert(num == 0);

    num = 1;  // 00000001
    num = clearBit(num, 0);
    assert(num == 0);

    num = 3;  // 00000011
    num = clearBit(num, 0);  // 00000010
    assert(num == 2);

    num = 255;  // 11111111
    num = clearBit(num, 7);  // 01111111
    assert(num == 127);

    cout << "clearBit_test() passed!" << endl << endl;
}

void clearBitsMSBthroughI_test() {
    int num = 255;  // 11111111

    num = clearBitsMSBthroughI(num, 7);  // 01111111
    assert(num == 127);

    num = clearBitsMSBthroughI(num, 4);  // 00001111
    assert(num == 15);

    num = clearBitsMSBthroughI(num, 2);  // 00000011
    assert(num == 3);

    num = clearBitsMSBthroughI(num, 0);  // 00000000
    assert(num == 0);

    cout << "clearBitsMSBthroughI_test() passed!" << endl << endl;
}

void clearBitsIthrough0_test() {
    int num = 255;

    num = clearBitsIthrough0(num, 0);  // 11111110
    assert(num == 254);

    num = clearBitsIthrough0(num, 2);  // 11111000
    assert(num == 248);
    
    num = clearBitsIthrough0(num, 6);  // 10000000
    assert(num == 128);

    cout << "clearBitsIthrough0_test() passed!" << endl << endl;
}

void updateBit_test() {
    int num = 0;  // 00000000

    num = updateBit(num, 0, 1);  // 00000001
    assert(num == 1);

    num = updateBit(num, 0, 0);  // 00000000
    assert(num == 0);

    num = 255;  // 11111111
    num = updateBit(num, 7, 0);  // 01111111
    assert(num == 127);

    cout << "updateBit_test() passed!" << endl << endl;
}
