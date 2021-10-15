#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "Queue.h"


#define SIZE 10
#define MAX_ELEMENTS (SIZE - 1)
//TODO add functionality to set head to 0 and tail to 0
typedef struct QueueDesc {
    int head;
    int tail;
    int data[SIZE];
}QueueDesc, *Queue;

void Queue_Init(Queue q){
    q->head = -1;
    q->tail = -1;
}

Queue Queue_New(void) {
    Queue q = (Queue) malloc(sizeof(struct QueueDesc));
    Queue_Init(q);
    return q;
}

void Queue_Add(Queue _this, int value) {

    if((_this->tail == MAX_ELEMENTS && _this->head == 0) || (_this->tail == ((_this->head)-1))){
       printf("Queue is full\n");
    }
    else if(_this->head == -1) {
        _this-> head = _this->tail = 0;
        _this-> data[_this->tail] = value;
    
    }
    else if (_this->tail == MAX_ELEMENTS && _this->head !=0){
        _this->tail = 0;
        _this->data[_this->tail] = value;

    }
    else {
        ++_this -> tail;
        _this-> data[_this->tail] = value;
    }
}

int Queue_remove(Queue _this) {
    if( _this->head == -1){
        printf("Queue is empty\n");
        return INT_MIN;
    }
    else {
        int test = _this->head;
        int temp = _this -> data[test];
        if (_this->head == _this->tail){
            _this->head = _this->tail = -1;
        }
        else if (_this->head ==MAX_ELEMENTS ) {
            _this->head = 0;
        }
        else {
            ++_this->head;
        }
        return temp;
    }
}

bool Queue_IsEmpty(Queue _this){
    return (_this->head == -1 && _this->tail == -1);
}

void Queue_Delete(Queue _this){
    free(_this);
}





