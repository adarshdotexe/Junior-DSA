#include <stdio.h>
#include <stdlib.h>

#define T int
#define SIZE 1000

/* Stack Structure */
typedef struct __Stack {
    T arr[SIZE];
    int top;
} Stack;

// Initialises the stack
// returns 0 if successful, -1 otherwise.
int initStack(Stack **stackPtrPtr);

// Checks if the stack is empty
// bool is set to 1 if empty, 0 otherwise
// returns 0 if successful, -1 otherwise.
int isEmptyStack(Stack *stackPtr, int *bool);

// Checks if the stack is full
// bool is set to 1 if full, 0 otherwise
// returns 0 if successful, -1 otherwise.
int isFullStack(Stack *stackPtr, int *bool);

// Pushes an element to the stack
// returns 0 if successful, -1 otherwise.
int pushStack(Stack *stackPtr, T data);

// Pops an element from the stack and stores it's value in data
// returns 0 if successful, -1 otherwise.
int popStack(Stack *stack, T *data);

// Peek at the top element of the stack and stores it's value in data
// returns 0 if successful, -1 otherwise.
int peekStack(Stack *stack, T *data);

// Prints the stack
// returns 0 if successful, -1 otherwise.
int displayIntStack(Stack *stack);

// Destroys the stack
// returns 0 if successful, -1 otherwise.
int destroyStack(Stack *stack);
