#include "stacksArr.h"

int initStack(Stack **stackPtrPtr) {
    *stackPtrPtr = (Stack *) malloc(sizeof(Stack));
    if((*stackPtrPtr)==NULL) {
        printf("Error: Stack Initialisation failed!!");
        return -1;
    }
    (*stackPtrPtr)->top = -1;
    return 0;
}

int isEmptyStack(Stack *stackPtr, int *bool) {
    if(stackPtr==NULL) {
        printf("Error: Stack is not initialised!!");
        return -1;
    }
    if(stackPtr->top == -1) {
        *bool = 1;
    } else {
        *bool = 0;
    }
    return 0;
}

int isFullStack(Stack *stackPtr, int *bool) {
    if(stackPtr==NULL) {
        printf("Error: Stack is not initialised!!");
        return -1;
    }
    if(stackPtr->top == SIZE-1) {
        *bool = 1;
    } else {
        *bool = 0;
    }
    return 0;
}

int pushStack(Stack *stackPtr, T data) {
    if(stackPtr==NULL) {
        printf("Error: Stack is not initialised!!");
        return -1;
    }
    if(stackPtr->top == SIZE-1) {
        printf("Error: Stack Overflow!!");
        return -1;
    }
    stackPtr->top++;
    stackPtr->arr[stackPtr->top] = data;
    return 0;
}

int popStack(Stack *stack, T *data) {
    if(stack==NULL) {
        printf("Error: Stack is not initialised!!");
        return -1;
    }
    if(stack->top == -1) {
        printf("Error: Stack Underflow!!");
        return -1;
    }
    *data = stack->arr[stack->top];
    stack->top--;
    return 0;
}

int peekStack(Stack *stack, T *data) {
    if(stack==NULL) {
        printf("Error: Stack is not initialised!!");
        return -1;
    }
    if(stack->top == -1) {
        printf("Error: Stack Underflow!!");
        return -1;
    }
    *data = stack->arr[stack->top];
    return 0;
}

int displayIntStack(Stack *stack) {
    if(stack==NULL) {
        printf("Error: Stack is not initialised!!");
        return -1;
    }
    if(stack->top == -1) {
        printf("Error: Stack Underflow!!");
        return -1;
    }
    printf("Stack: [ ");
    for(int i=stack->top; i>=0; i--) {
        printf("%d, ", stack->arr[i]);
    }
    printf("\b\b ]\n");
    return 0;
}

int destroyStack(Stack *stack) {
    if(stack==NULL) {
        printf("Error: Stack is not initialised!!");
        return -1;
    }
    free(stack);
    return 0;
}