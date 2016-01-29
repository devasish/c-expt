#include <stdio.h>
#include <stdlib.h>
void main() {

    long long i = 9, j;

//    voidPtr = &d;
//    printf("a in main %f", *((double*)voidPtr));
//    printf("size = %d", sizeof(*((double*)voidPtr)));
//    
//    voidPtr = &i;
//    printf("a in main %d", *((long*)voidPtr));
//    printf("size = %d", sizeof(voidPtr));
    
    printf("\n");
    for (i = 0; i < 10; i++) {
        if (i == 0) {
            printf("  ");
            for (j = 0; j < 10; j++) {
                printf(" %d", j);
            }
            printf("\n");
        }
        
        printf(" %d", i);
        for (j = 0; j < 10; j++) {
            if (i&j)
                printf(" 1", i);
            else 
                printf(" .");
        }
        
        printf("\n");
        
    }
    
    while( ) {}
    
}

//void g(void) {
//    register int a = 10;
//    a++;
////    printf("address of a in g() = %d\n", &a);
//    printf("a in g() = %d\n", a);
//}