// Queue.hpp C++ interface of a C queue
#ifndef __Queue_hpp
#define __Queue_hpp
// including C header file
extern "C" {
#include "Queue.h"
}

namespace Sys { // defintion of namespace to not clash with std Queue
// wrapper class defintion
    class Queue {
    private:
        QueueDesc* _queue; // struct defined as private
    public:
        Queue(){_queue = Queue_New();} // constructor in line defintion of call to C Queue struct function
        ~Queue(){Queue_Delete(_queue);} // destructor in line defintion of call to C Queue struct function

        void Add(int value){Queue_Add(_queue, value);} // Adds value to queue, in line defintion of call to C Queue struct function

        int Remove(){return Queue_remove(_queue);} // removes value from queue, inclince call to C struct function `
        bool IsEmpty(){return Queue_IsEmpty(_queue);}// return empty status, call to C struct
    };
};

#endif
