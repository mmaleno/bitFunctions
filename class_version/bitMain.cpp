/*
 * bitMain.cpp
 *
 * Max Maleno [mmaleno@hmc.edu]
 *
 * Created 10/22/2019
 * Last Updated 10/22/2019
 *
 * This is the main implementation file for CtCI's bitManipulation.
 *
 */

#include <iostream>
#include <ostream>
#include <cassert>
#include "bitTest.hpp"

using namespace std;

int main(int, char**) {
    cout << endl << "********************************* start main *********************************" << endl << endl;
    
    setBit_test();
    getBit_test();
    clearBit_test();
    clearBitsMSBthroughI_test();
    clearBitsIthrough0_test();
    updateBit_test();

    cout << "********************************* end main *********************************" << endl << endl;

    return 0;
}
