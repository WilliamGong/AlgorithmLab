#include "TestSort.h"
#include <iostream>
using namespace std;

int main() {
    TestSort *testInsertSort = new TestSort(20, "insert");
    TestSort *testShellSort = new TestSort(20, "shell");
    TestSort *testMergeUpSort = new TestSort(20, "mergeUp");

    //insert sort
    testInsertSort->arrayInfo();
    testInsertSort->testMain();
    testInsertSort->arrayInfo();

    cout << "\n";

    //shell sort
    testShellSort->arrayInfo();
    testShellSort->testMain();
    testShellSort->arrayInfo();

    cout << "\n";

    //merge sort(up to down)
    testMergeUpSort->arrayInfo();
    testMergeUpSort->testMain();
    testMergeUpSort->arrayInfo();

    delete testInsertSort;
    delete testShellSort;
    delete testMergeUpSort;
    system("pause");
    return 0;
}