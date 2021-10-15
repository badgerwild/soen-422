//
// Created by jason on 10/6/21.
//
#include <iostream>
#include "Queue.hpp"
// empty constructor since all values are define in header
sys::Queue::Queue() {
}
// default constructor, since there are no pointer types, nothing needs to be explicitly deleted
sys::Queue::~Queue() {
}
// adds element to queue by inerting to tail position
void sys::Queue::Add(int value) {
    if ((tail ==MAX_ELEMENTS && head == FIRST_ELEMENT) || (tail == (head-1))){ // checks two full contions
        std::cout<<"Queue is full" << std::endl;
    }
    else if (head == EMPTY){ // handles case of inserting element into empty queue
        head = tail = FIRST_ELEMENT;
        data[tail] = value;
    }
    else if (tail == MAX_ELEMENTS && head != FIRST_ELEMENT) { //handles circular insertion of last elelment
        tail = FIRST_ELEMENT; // wraps tail to first index of array
        data[tail] = value;
    }
    else { // default case increments tail and inserts element
        ++tail;
        data[tail] = value;
    }
}
// removes elelment from queue
int sys::Queue::Remove() {
    if (head == EMPTY) { // checks if queue is empty
        std::cout << "Queue is empty" << std::endl;
        return INT16_MIN;
    }
    else {
        int temp = head; // saves head value for removing data
        if (head == tail){ // handles last element removal and setting queue as empty
            head = tail = EMPTY; 
        }
        else if (head == MAX_ELEMENTS) { // handles circular case, 
            head = FIRST_ELEMENT; // wraps head to first index of data array
        }
        else { // main case, increments head 
            ++ head;
        }
        return data[temp];
    }
}

bool sys::Queue::IsEmpty() {
    return (head == EMPTY && tail == EMPTY); // returns empty status of queue
}
