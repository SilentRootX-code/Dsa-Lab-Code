#include <stdio.h>

int main(){
    int a=10;
    int *p=&a;
    int **pp=&p;

    printf("value of a:%d",a);
    printf("Address of a (&a):%p",(void *)&a);
    printf("value in p(address of a):%p",(void *)p);
    printf("value via *p:%d",*p);
    printf("value via **pp:%d",**pp);

    *p=25;
    printf("After *p=25, value of a:%d",a);

    **pp=50;
    printf("After **pp=50, value of a:%d",a);

    return 0;
}