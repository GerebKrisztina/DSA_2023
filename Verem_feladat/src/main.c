#include <stdio.h>
#include <verem.h>

int main() {
    Stack stack;
    createStack(15, &stack);
    printf("A verem merete %i", stackSize(stack));
    push(&stack, 3);
    pop(&stack);
    printf("A verem legfelso eleme %i", peek(stack));
}
