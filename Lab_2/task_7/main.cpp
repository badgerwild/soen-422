
#include <iostream>
#include "Queue.hpp"

int main() {
    sys::Queue test{};
    std::cout << "removing  :" << test.Remove() << std::endl;
    for (int i = 1; i <= 10 ; ++i ){
        test.Add(i);
    }
    test.Add(4);
    test.Add(333);
    while(!test.IsEmpty()) {
        std::cout << "removing  :" << test.Remove() << std::endl;
    }
    test.Remove();
    for (int i = 1; i <= 10 ; ++i ){
        test.Add(i);
    }
    std::cout << "removing  :" << test.Remove() << std::endl;
    std::cout << "removing  :" << test.Remove() << std::endl;
    std::cout<< "-----------------------------------------"<<std::endl;
    test.Add(99);
    test.Add(42);
    while(!test.IsEmpty()) {
        std::cout << "removing  :" << test.Remove() << std::endl;
    }

    return 0;
}