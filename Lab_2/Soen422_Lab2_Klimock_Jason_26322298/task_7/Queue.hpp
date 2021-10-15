//
// Created by jason on 10/6/21.
//

#ifndef TASK_7_QUEUE_HPP
#define TASK_7_QUEUE_HPP
// class defintion in name space sys to not mix up with queue in std
namespace sys {
    // constant defintions
    const int SIZE = 10;
    const int MAX_ELEMENTS = (SIZE-1);
    const int FIRST_ELEMENT = 0;
    const int EMPTY = -1;
    // class
    class Queue {
    private:
        // declare and define private data memebers
        int data[SIZE];
        int head{EMPTY};
        int tail{EMPTY};

    public:
        Queue();
        ~Queue();
        void Add(int value);
        int Remove();
        bool IsEmpty();
    };
};


#endif //TASK_7_QUEUE_HPP
