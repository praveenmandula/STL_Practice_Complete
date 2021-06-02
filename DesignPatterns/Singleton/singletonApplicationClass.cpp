#include "pch.h"
#include <iostream>
#include "singletonApplicationClass.h"
using namespace std;

Singleton* Singleton:: getInstance() {
    if (!instance)
        instance = new Singleton;
    return instance;
}

int Singleton :: getData() {
    return this->data;
}

void Singleton :: setData(int data) {
    this->data = data;
}

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton* Singleton::instance = 0;