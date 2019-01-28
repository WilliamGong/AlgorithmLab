#ifndef TEST_SORT_H
#define TEST_SORT_H

#include <stdlib.h>
#include <time.h>
#include <string>

class TestSort {
    private:
        int num;
        std::string object;
        int * testArray;
    public:
        TestSort(int num, std::string object);
        ~TestSort();
        void arrayInfo();
        void testMain();
};

#endif // !TEST_SORT_H