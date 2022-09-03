#include <stdio.h>

int main()
{
    int a = 50;
    // store the adress of a into a pointer variable
    int *p = &a;
    // view the adress of a
    printf("a memory adress %p\n", &a);
    // view the adress of a stored address in pointer variable p
    printf("pointer variable of a %p\n", p);

    // get value from pointervariable
    // indirection
    printf("%d\n", *p);

    // increment if * means value will change * means set the value of p pointing to
    *p += 1;
    printf("%p\n", p);
    printf("%d\n", a);

    // without start means memory adresss change
    p = (int *)1;
    printf("%p\n", p);

    // for array
    // 20 bytes of char
    char buf[20];
    // you dont have to use & symbol for array

    char *ptr = buf;

    printf("%p\n", buf);
    printf("%p\n", ptr);

    ptr[0] = 'A';
    ptr[1] = 'B';
    printf("%c", ptr[1]);

    // pointer of pointer

    int a1 = 50;
    int *ptr1 = &a1;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("memory adress of a is %p\n", &a1);
    printf("memory adress of pointer is %p\n", ptr1);
    printf("memory adress of a is %p\n", &ptr1);
    printf("memory adress value of ptr2 is %p\n", ptr2);
    printf("memory adress of ptr2 is %p\n", &ptr2);
    printf("value of ptr2 holds of ptr2 is %p\n", ptr3);
    ***ptr3 = 20;
    printf("value of ptr2 holds of ptr2 is %d\n", a1);

    return 0;
}