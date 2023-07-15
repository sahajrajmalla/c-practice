#include <stdio.h>

struct Person {
    int id;
    char name[30];
    struct Person *next;
};

int main () {
    struct Person a, b, c, *p;
    
    a.id = 1;
    strcpy(a.name, "Sahaj");

    b.id = 2;
    strcpy(b.name, "Raj");
    
    c.id = 3;
    strcpy(c.name, "Malla");
    
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    
    p = &a;
    
    while (p->next != NULL) {
        printf("Name: %s \n", p->name);
        p = p->next;
    }
    
    return 0;

}