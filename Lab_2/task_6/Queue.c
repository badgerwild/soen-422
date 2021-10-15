#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "Queue.h"

// constant defintions

#define SIZE 10 
#define MAX_ELEMENTS (SIZE - 1)
// defintion of Queue struct
typedef struct QueueDesc {
    int head;
    int tail;
    int data[SIZE];// defnition of queue size
}QueueDesc, *Queue;


//intitializer of the Queue data structure 
void Queue_Init(Queue q){
    // head and tail set to -1, as indicator for empty value
    q->head = -1; 
    q->tail = -1;
}
//constructor
Queue Queue_New(void) {
    Queue q = (Queue) malloc(sizeof(struct QueueDesc)); // allocates memory for a queue struct
    Queue_Init(q); // call to intitializer
    return q; // returns a queue struct
}
// adds a vlaue to the queue, _this is an instance passed to the function to allow for many instances of the queue
void Queue_Add(Queue _this, int value) {

    if((_this->tail == MAX_ELEMENTS && _this->head == 0) || (_this->tail == ((_this->head)-1))){ // checks two cases of queue being full
       printf("Queue is full\n");
    }
    else if(_this->head == -1) { //handles case where queue is empyty
        _this-> head = _this->tail = 0; // head and tail are set to first element
        _this-> data[_this->tail] = value;
    
    }
    else if (_this->tail == MAX_ELEMENTS && _this->head !=0){ //wraps queue to the first element if queue is not ful
        _this->tail = 0;
        _this->data[_this->tail] = value;

    }
    else { // regular case tail in incrementing
        ++_this -> tail;
        _this-> data[_this->tail] = value;
    }
}
// removes an element from the queue, queue is passed to function to allow multiple instances
int Queue_remove(Queue _this) {
    if( _this->head == -1){ // check for empty condition
        printf("Queue is empty\n");
        return INT_MIN;
    }
    else {
       // int test = _this->head; 
        int temp = _this -> data[(_this->head)]; // removes value from queue 
        if (_this->head == _this->tail){ // check for last element
            _this->head = _this->tail = -1; // sets empty conditon
        }
        else if (_this->head ==MAX_ELEMENTS ) { // checks if head was last element
            _this->head = 0; // wraps head to the intial position of array holding queue. this makes the circular queue work
        }
        else {
            ++_this->head; // regualr case, move head along to the next elelment
        }
        return temp; // returns queue value
    }
}

bool Queue_IsEmpty(Queue _this){
    return (_this->head == -1 && _this->tail == -1); // checks empty conditon
}

void Queue_Delete(Queue _this){
    free(_this); // frees memory locatipon
}





