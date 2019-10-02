#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct link{
	int element;
	struct link *next;
} Link;

typedef struct stack {
	Link *top;
	int size;
} Stack;

Stack* create_stack() { 
	Stack *s;
	s = (Stack *)malloc(sizeof(Stack));
	s->top = NULL;
	s->size = 0;

	return s;
}
Link *create_link(int it, Link *antes){
	Link *atual;
	atual = (Link *) malloc(sizeof(Link));
	atual->next = antes;
	atual->element = it;

	return atual;
}

void push(Stack* s, int value) {
	s->top = create_link(value,s->top);
	s->size++;	
}

int pop(Stack* s) { 
	int it;
	if(s->top == NULL){
		return -99999999; // erro
	}
	it = s->top->element;
	s->top = s->top->next;
	s->size--;
	return it;
}

void clear(Stack* s) {
	s->top = NULL;
	s->size = 0;
}

int topValue(Stack s){
	if(s.top == NULL){
		return -99999999; // erro
	}

	return s.top->element;
}

int length(Stack s){

	return s.size;
}
