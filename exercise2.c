/*
 * Exercise 2: Stack Implementation using Linked List
 * Assignment 7 - IPFCE 2025
 * 
 * Implement all the stack functions declared in include/stack.h
 * The stack should be implemented using a linked list structure.
 * 
 * Functions to implement:
 * - initialize: Create an empty stack
 * - push: Insert an item at the top of the stack
 * - pop: Remove and return the top item
 * - full: Check if stack is full (always false for linked list)
 * - empty: Check if stack is empty
 * - print: Print all items in the stack
 */

#include "include/stack.h"
#include <assert.h>

/* Create an empty stack */
void initialize(stack *s)
{
    /* pre-condition: true */
    /* post-condition: stack is empty */
    s->head = NULL;
}

/* Insert item x at the top of stack s */
void push(int x, stack *s)
{
    /* pre-condition: true (linked list can always accept more items) */
    /* post-condition: x is added to top of stack */
    node *new = malloc(sizeof(node));
    new->data = x;
    new->next = s->head;
    s->head = new;
}

/* Return (and remove) the top item of stack s */
int pop(stack *s)
{
  /* pre-condition: stack must not be empty */
    assert(s->head!=NULL);
  /* post-condition: top item is removed and returned */
     int t = s->head->data;
    node *temp = s->head->next;
    free(s->head);
    s->head = temp;
  return t; // placeholder - replace with actual implementation
}

/* Test whether a stack can accept more pushes */
bool full(stack *s)
{
    /* pre-condition: true */
    /* post-condition: Returns true if stack is full, false otherwise */
    return false;
}

/* Test whether a stack can accept more pops */
bool empty(stack *s)
{
    /* pre-condition: true */
    /* post-condition: returns true if stack is empty, false otherwise */

    return s->head == NULL; // placeholder - replace with actual implementation
}

/* Print the contents of the stack */
void print(stack *s)
{
    /* pre-condition: true */
    /* post-condition: prints all items in the stack */
    printf("Stack:\n");
    node *temp = s->head;
    while (temp != NULL)
    {
        printf("%i\n",temp->data);
        temp = temp->next;
    }
    
}
