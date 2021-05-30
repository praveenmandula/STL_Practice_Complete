#include "common_includes.h"

void test_vector()
{
    std::unique_ptr<test_vector_functionality> vect_test;
    vect_test->test_VectInitAndPrint();
}

int main()
{
    test_vector();
    
}
