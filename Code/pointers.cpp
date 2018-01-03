/*
Author: Pragathi N
Date: 4/21/2017
Input Format:
Input will contain two integers,  and , separated by a newline.

Output Format:
You have to print the updated value of  and , on two different lines.


*/

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function
    int s = *a, t = *b;
    *a = s + t;
    *b = abs(s - t);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
