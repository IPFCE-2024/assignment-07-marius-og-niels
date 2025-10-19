#include "include/stack.h"
#include <stdio.h>
#include <assert.h>

int main() {
    stack s;
    initialize(&s);
    assert(empty(&s)); 

    push(42, &s);
    assert(!empty(&s)); 

    int y = pop(&s);
    assert(empty(&s)); 
    assert(y == 42);   


    push(11, &s);
    push(22, &s);
    int y0 = pop(&s);
    int y1 = pop(&s);
    assert(empty(&s));
    assert(y0 == 22);
    assert(y1 == 11);

    printf("Testen er gennemført\n");

    return 0;
}

//Test programmet virker fint og det printer "Testen er gennemført"