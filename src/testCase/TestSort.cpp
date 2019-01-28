#include "TestSort.h"
#include <iostream>
#include "insertSort.h"

TestSort::TestSort(int num, std::string object) {
    //随机生成测试数组
    this->testArray = new int[num];
    srand(time(NULL));
    for(int i = 0; i < num; i++) {
        testArray[i] = rand() % 100;
    }

    this->object = object;
    this->num = num;
}

TestSort::~TestSort() {
    delete[] this->testArray;
}

void TestSort::arrayInfo() {
    for(int i = 0; i < this -> num; i++) {
        std::cout << this -> testArray[i] << ' ';
    }
}

void TestSort::testMain() {
    //insect sort
    if(this->object == "insert") {
        insertSort(this -> testArray, this -> num);
    }
}