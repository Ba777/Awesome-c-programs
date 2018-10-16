//
//  main.c
//  pointers_use
//
//  Created by Balachandhar on 2018-10-16.
//  Copyright © 2018 Balachandhar. All rights reserved.
//

#include <stdio.h>


void passValue(int **bb) {
    printf("bb pointer points to value: %d", **bb);
    printf("\n");
}

int main(int argc, const char * argv[]) {
    int *a, *b;
    int **aa;
    int ***aaa;
    
    int f = 10;
    
    a = &f;   // address of f is pointed by a.
    aa = &a;  // address of pointer a is stored by double pointer aa. Printing the double pointer will display the value in f.
    aaa = &aa;  // address of double pointer aa is stored in triple pointer aaa. Printing the triple pointer will display the value of f.
    
    printf("a points to the address: %p", a);
    printf("\n");
    printf("a has the value: %d", *a);
    printf("\n");
    printf("aa points to the address: %p", aa);
    printf("\n");
    printf("aa has the value: %d", **aa);
    printf("\n");
    printf("aaa points to the address: %p", aaa);
    printf("\n");
    printf("aaa has the value: %d", ***aaa);
    printf("\n");
    
    int r = 100;
    b = &r;
    passValue(&b);  // Pass the address of the pointer. This address should be catched by double pointer to print the value pointed by this pointer b.
    
    return 0;
}
