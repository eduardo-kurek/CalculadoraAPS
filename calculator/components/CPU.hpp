#pragma once
#include <iostream>
#include <vector>
#include "DisplayNat.hpp"
// #include "Keyboard.hpp"


using namespace std; 


class CPU{ // Makes the connection between input and output (Keyboard and Display).
    vector<double> mainRegister;
    void setCapacity();
    

    public:
    
    void checkOperation();
    void execOperation();
};
