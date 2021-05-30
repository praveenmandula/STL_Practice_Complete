// STL_Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "common_includes.h"

void test_vector_functionality::test_VectInitAndPrint()
{
	std::vector<int> elements;

	int i = 0;
	do {
		elements.push_back(++i);
	} while (i < 10);

	LOGGER->Log("printing vetor elements");

	for(auto i : elements)
		LOGGER->Log("element value =%d",i);
}