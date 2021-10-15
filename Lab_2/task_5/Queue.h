#ifndef Queue_h
#define Queue_h
#include <stdbool.h>

struct QueueDesc; // Foward declaration
typedef struct QueueDesc* Queue; // type def of opaque type
// function declarations
Queue Queue_New(void);
void Queue_Init(Queue _this);
void Queue_Add(Queue _this, int value);
int Queue_remove(Queue _this);
bool Queue_IsEmpty(Queue _this);
void Queue_Delete(Queue _this);

#endif
