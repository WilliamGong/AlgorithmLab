#include "TestSort.h"
#include <iostream>
using namespace std;

int main() {
    TestSort *testInsectSort = new TestSort(20, "insert");
    cout << "Array rank is" << endl;
    testInsectSort -> arrayInfo();
    cout << "\n";
    testInsectSort -> testMain();
    cout << "Array rank is" << endl;
    testInsectSort -> arrayInfo();
    delete testInsectSort;
    system("pause");
    return 0;
}