#include "TestSort.h"
#include <iostream>
#include "insertSort.h"
#include "shellSort.h"

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
    std::cout << "The array rank is:" << "\n";
    for(int i = 0; i < this -> num; i++) {
        std::cout << this -> testArray[i] << ' ';
    }
    std::cout << "\n";
}

void TestSort::testMain() {
    //insect sort
    if(this->object == "insert") {
        std::cout << "Insert sort" << std::endl;
        insertSort(this -> testArray, this -> num);
    }else if(this->object == "shell") {
        std::cout << "Shell sort" << std::endl;
        shellSort(this->testArray, this->num);
    }
}