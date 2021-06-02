#pragma once
#include "pch.h"
#include <iostream>
using namespace std;

class Singleton {
    static Singleton* instance;
    int data;

    // Private constructor so that no objects can be created.
    Singleton() {
        data = 0;
    }

public:
    static Singleton* getInstance();
    int getData();
    void setData(int data);
};