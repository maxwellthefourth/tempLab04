/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: maxwellthefourth
 *
 * Created on January 31, 2018, 5:01 PM
 */

#include <cstdlib>
#include "ProcessTrace.h"

using namespace std;

int main(int argc, char** argv) {
    // Check for argument
    if (argc != 2) {
        cerr << "Argument not specified." << endl;
        exit(1);
    }
    // Create instance of ProcessTrace
    ProcessTrace trace(argv[1]);
    // Call Execute method
    trace.Execute();
}

