/*
 * @Author: William Gong 
 * @Date: 2019-05-10 23:22:49 
 * @Last Modified by: William Gong
 * @Last Modified time: 2019-05-10 23:44:06
 */
#pragma once
#include <limits.h>

class MinPQ {
    public:
        MinPQ(int num);
        ~MinPQ();
        bool isEmpty();
        void push(int current);
        int pop();
    private:
        int * array;
        int next = 1;
        int length;
        void swim(int location);
        void sink(int location);
};

MinPQ::MinPQ(int num) {
    this->array = new int[num];
    this->length = num;

    for(int i = 0; i < num; i++) {
        this->array[i] = INT_MAX;
    }
}

MinPQ::~MinPQ() {
    delete[] array;
}