#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include "Queue.hpp"

int main(){
    Sys::Queue test{};
    test.Add(9);
    printf("TestOne\n");
    printf("9\n");
    printf("%d\n", test.Remove());

    printf("TestTwo<2\n");
    printf("Queue is empty\n");
    printf("%d\n", INT_MIN);
    printf("%d\n", test.Remove());


    printf("TestThree\n");
    for (int i = 1; i<=10; ++i){
        test.Add(i);
    }
    test.Add(2);
    printf("Queue is full\n");

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
    for (int i=0; i<9;++i){
        std::cout<<test.Remove()<<std::endl;
    }

    printf("TestFive\n");
    printf("10\n");
    printf("%d\n", test.Remove());

    printf("Testsix<2\n");
    printf("Queue is empty\n");
    printf("%d\n", INT_MIN);
    printf("%d\n", test.Remove());

    printf("TestSeven<2\n");
    for (int i = 11; i<=20; ++i){
        test.Add(i);
    }
    printf("11\n");
    printf("12\n");
    printf("%d\n", test.Remove());
    printf("%d\n", test.Remove());

    printf("TestEight<9\n");
    test.Add(42);
    test.Add(77);
    printf("%d\n", 13);
    printf("%d\n", 14);
    printf("%d\n", 15);
    printf("%d\n", 16);
    printf("%d\n", 17);
    printf("%d\n", 18);
    printf("%d\n", 19);
    printf("%d\n", 20);
    printf("%d\n", 42);
    for (int i=0; i<9;++i){
        std::cout<<test.Remove()<<std::endl;
    }

    printf("TestNine<3\n");
    printf("%d\n", 77);
    printf("Queue is empty\n");
    printf("%d\n", INT_MIN);
    printf("%d\n", test.Remove());
    printf("%d\n", test.Remove());

return 0;
}
