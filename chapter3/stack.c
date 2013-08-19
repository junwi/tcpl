#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const int INIT_SIZE = 32;
typedef struct Stack {
	int limit;
	int index;
	int *stack;
} Stack;

void initStack(Stack *stack);
int pop(Stack *stack);
int getTop(Stack *stack);
void push(Stack *stack, int v);
void freeStack(Stack *stack);

void initStack(Stack *stack)
{
	stack->limit = INIT_SIZE;
	stack->index = 0;
	stack->stack = (int *) malloc(stack->limit * sizeof(int));
}
int pop(Stack *stack)
{
	if (stack->index > 0) {
		return stack->stack[--stack->index];
	} else {
		printf("Error! Stack is empty.\n");
	}
	return 0;
}
int getTop(Stack *stack)
{
	if (stack->index > 0) {
		return stack->stack[stack->index - 1];
	}
	printf("Error! Stack is empty.");
	return 0;
}
int length(Stack *stack)
{
	return stack->index;
}
void push(Stack *stack, int v)
{
	if (stack->index >= stack->limit) {
		stack->limit = stack->limit << 1;
		int *temp = (int *) malloc(stack->limit * sizeof(int));
		memcpy(temp, stack->stack, stack->index);
		free(stack->stack);
		stack->stack = temp;
	}
	stack->stack[stack->index++] = v;
}
void freeStack(Stack *stack)
{
	free(stack->stack);
}
