// DesignPatterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..\Singleton\singletonApplicationClass.h"

void test_singleton() {
    Singleton* s = s->getInstance();
    cout << s->getData() << endl;
    s->setData(100);
    cout << s->getData() << endl;
}

int main() {
    test_singleton();
}
