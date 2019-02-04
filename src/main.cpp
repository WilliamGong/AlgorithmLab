#include "TestSort.h"
#include <iostream>
using namespace std;

int main() {
    TestSort *testInsertSort = new TestSort(20, "insert");
    TestSort *testShellSort = new TestSort(20, "shell");

    //insert sort
    testInsertSort->arrayInfo();
    testInsertSort->testMain();
    testInsertSort->arrayInfo();

    cout << "\n";

    //shell sort
    testShellSort->arrayInfo();
    testShellSort->testMain();
    testShellSort->arrayInfo();

    delete testInsertSort;
    delete testShellSort;
    system("pause");
    return 0;
}