#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include "Queue.hpp"

int main(){
    sys::Queue test{};
    test.Add(9);
    std::cout<<"TestOne"<< std::endl;
    std::cout<<9<<std::endl;
    std::cout<<test.Remove()<<std::endl;

    std::cout<<"TestTwo<2"<<std::endl;
    std::cout<<"Queue is empty"<<std::endl;
    std::cout<< INT16_MIN<<std::endl;
    std::cout<<test.Remove()<<std::endl;


    std::cout<<"TestThree"<<std::endl;
    for (int i = 1; i<=10; ++i){
        test.Add(i);
    }
    test.Add(2);
    std::cout<<"Queue is full"<<std::endl;

    std::cout<<"TestFour<9"<<std::endl;
    std::cout<<1<<std::endl;
    std::cout<< 2<<std::endl;
    std::cout<< 3<<std::endl;
    std::cout<< 4<<std::endl;
    std::cout<< 5<<std::endl;
    std::cout<< 6<<std::endl;
    std::cout<< 7<<std::endl;
    std::cout<< 8<<std::endl;
    std::cout<< 9<<std::endl;
    for (int i=0; i<9;++i){
        std::cout<<test.Remove()<<std::endl;
    }

    std::cout<<"TestFive"<<std::endl;
    std::cout<<"10"<<std::endl;
    std::cout<< test.Remove()<<std::endl;

    std::cout<<"Testsix<2"<<std::endl;
    std::cout<<"Queue is empty"<<std::endl;
    std::cout<< INT16_MIN<<std::endl;
    std::cout<< test.Remove()<<std::endl;

    std::cout<<"TestSeven<2"<<std::endl;
    for (int i = 11; i<=20; ++i){
        test.Add(i);
    }
    std::cout<<"11"<<std::endl;
    std::cout<<"12"<<std::endl;
    std::cout<< test.Remove()<<std::endl;
    std::cout<< test.Remove()<<std::endl;

    std::cout<<"TestEight<9"<<std::endl;
    test.Add(42);
    test.Add(77);
    std::cout<<13<<std::endl;
    std::cout<< 14<<std::endl;
    std::cout<< 15<<std::endl;
    std::cout<< 16<<std::endl;
    std::cout<< 17<<std::endl;
    std::cout<<18<<std::endl;
    std::cout<< 19<<std::endl;
    std::cout<< 20<<std::endl;
    std::cout<< 42<<std::endl;
    for (int i=0; i<9;++i){
        std::cout<<test.Remove()<<std::endl;
    }

    std::cout<<"TestNine<3"<<std::endl;
    std::cout<< 77<<std::endl;
    std::cout<<"Queue is empty"<<std::endl;
    std::cout<< INT16_MIN<<std::endl;
    std::cout<< test.Remove()<<std::endl;
    std::cout<<test.Remove()<<std::endl;

return 0;
}
