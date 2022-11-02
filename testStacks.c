#include<stdio.h>
#include<stdlib.h>
#include "stacksArr.h"

// Code to test the functions, change it as per your needs.
// To compile this file, use the following command:
// gcc -o testStacks testStacks.c stacksArr.c
// To run the executable, use the following command:
// ./testStacks
int main(int argc, char const *argv[])
{
    Stack *stack;
    int bool;
    int data;
    initStack(&stack);
    isEmptyStack(stack, &bool);
    printf("Is Empty: %d \t", bool);
    isFullStack(stack, &bool);
    printf("Is Full: %d \t", bool);
    pushStack(stack, 1);
    pushStack(stack, 2);
    pushStack(stack, 3);
    displayIntStack(stack);
    isEmptyStack(stack, &bool);
    printf("Is Empty: %d \t", bool);
    isFullStack(stack, &bool);
    printf("Is Full: %d \t", bool);
    popStack(stack, &data);
    printf("Popped: %d \t", data);
    displayIntStack(stack);
    peekStack(stack, &data);
    printf("Peeked: %d \t", data);
    displayIntStack(stack);
    destroyStack(stack);
    return 0;
}