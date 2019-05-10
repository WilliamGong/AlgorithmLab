/*
 * @Author: William Gong 
 * @Date: 2019-05-10 23:22:45 
 * @Last Modified by: William Gong
 * @Last Modified time: 2019-05-10 23:48:35
 */
#include "MinPQ.h"
#include "sortBasis.h"
#include <limits.h>


/*
*DO NOT USE ARRAY[0] !
*/

bool MinPQ::isEmpty() {
    return this->next == 1;
}

void MinPQ::swim(int location) {
    while(location > 1 && this->array[location] < this->array[location / 2]) {
        exchenge(this->array, location, location / 2);
        location = location / 2;
    }
}

void MinPQ::sink(int location) {
    int smaller;
    while(location * 2 < this->length) {
        smaller = location * 2;
        if(this->array[smaller] > this->array[smaller + 1]) {
            smaller++;
        }

        if(this->array[location] <= this->array[smaller]) {
            break;
        }else {
            exchenge(this->array, location, smaller);
        }

        location = smaller;
    }
    
}

void MinPQ::push(int current) {
    this->array[this->next] = current;
    swim(next);
    next++;
}

int MinPQ::pop() {
    int ans = this->array[1];
    this->array[1] = INT_MAX;
    sink(1);
}