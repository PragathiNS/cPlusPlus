/*
Author: Pragathi N
Date: 4/21/2017
Task: You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
*/

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

// a = 3, b = 4, c = 5, d = 6.
int max_of_four(int a, int b, int c, int d){
    int max, max1, max2 = 0;
    max1 = a > b ? a : b; // max1 = 4
    max2 = c > d ? c : d; // max2 = 6
    max = max1 > max2 ? max1 : max2; // max = 6
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
