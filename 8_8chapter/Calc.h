#pragma once
#include <iostream>


class Calc {
private:
    int m_value;

public:
    Calc(int init_value);

    /*void add(int value) { m_value += value; }
    void sub(int value) { m_value -= value; }
    void mult(int value) { m_value *= value; }*/

    Calc& add(int value);
    Calc& sub(int value);
    Calc& mult(int value);
    void print();
};



