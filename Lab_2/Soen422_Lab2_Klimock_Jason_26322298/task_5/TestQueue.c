#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "Queue.h"

void main(){
    Queue q = Queue_New();
    Queue_Add(q,9);
//Add remove test
    printf("TestOne\n");
    printf("9\n");
    printf("%d\n", Queue_remove(q));
//Test remove from empty queue
    printf("TestTwo<2\n");
    printf("Test Queue is empty\n");
    printf("%d\n", INT_MIN);
    printf("%d\n", Queue_remove(q));

// test add to full queue    
    printf("TestThree\n");
    for (int i = 1; i<=10; ++i){
        Queue_Add(q, i);
    }
    Queue_Add(q, 2);
    printf("Test Queue is full\n");
//test print all elements (two tests for all 10)
    printf("TestFour<9\n");
    printf("%d\n", 1);
    printf("%d\n", 2);
    printf("%d\n", 3);
    printf("%d\n", 4);
    printf("%d\n", 5);
    printf("%d\n", 6);
    printf("%d\n", 7);
    printf("%d\n", 8);
    printf("%d\n", 9);
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
//test a just emptied queue is set as empty
    printf("TestFive\n");
    printf("10\n");
    printf("%d\n", Queue_remove(q));

    printf("Testsix<2\n");
    printf("Test Queue is empty\n");
    printf("%d\n", INT_MIN);
    printf("%d\n", Queue_remove(q));
// Add 10 items, remove 2
    printf("TestSeven<2\n");
    for (int i = 11; i<=20; ++i){
        Queue_Add(q, i);
    }
    printf("11\n");
    printf("12\n");
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
// add two more than dump all items to show ircular anture still works
    printf("TestEight<9\n");
    Queue_Add(q,42);
    Queue_Add(q,77);
    printf("%d\n", 13);
    printf("%d\n", 14);
    printf("%d\n", 15);
    printf("%d\n", 16);
    printf("%d\n", 17);
    printf("%d\n", 18);
    printf("%d\n", 19);
    printf("%d\n", 20);
    printf("%d\n", 42);
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));

    printf("TestNine<3\n");
    printf("%d\n", 77);
    printf("Test Queue is empty\n");
    printf("%d\n", INT_MIN);
    printf("%d\n", Queue_remove(q));
    printf("%d\n", Queue_remove(q));





















}
