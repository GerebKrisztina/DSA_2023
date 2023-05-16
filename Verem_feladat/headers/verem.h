//
// Created by gereb on 4/25/2023.
//

#ifndef VEREM_FELADAT_VEREM_H
#define VEREM_FELADAT_VEREM_H

void createStack(int capacity, Stack *stack);
void destroyStack(Stack* stack);
bool isEmpty(Stack stack);
bool isFull(Stack stack);
void push(Stack *stack, int item);
int pop(Stack *stack);
int peek(Stack stack)

#endif //VEREM_FELADAT_VEREM_H
