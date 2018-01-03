/*Some C++ data types, their format specifiers, and their most common bit widths are as follows:
Int ("%d"): 32 Bit integer
Long ("%ld"): 32 bit integer (same as Int for modern systems)
Long Long ("%lld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
*/

/*
1. Reading
scanf("`format_specifier`", &val);

char ch;
double d;
scanf("%c %lf", &ch, &d);

2. Printing
printf("`format_specifier`", val);

char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);
*/

/*
Author: Pragathi N
Date: 4/20/2017
Input Format:
Input consists of the following space-separated values: int, long, long, long, char, float, and double, respectively.

Output Format:
Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    long long ll;
    char a;
    float f;
    double d;
    scanf("%d %ld %lld %c %f %lf", &i, &l, &ll, &a, &f, &d);
    //cin >> i >> l >> ll >> a >> f >> d >> endl;
    //6.3f -- total 6 digits and 3 digits after the decimal point (345.467), likewise 14.9lf is 9 digits after the decimal point and total of 14 digits (14049.304930000)
    printf("%d \n%ld \n%lld \n%c \n%6.3f \n%14.9lf \n", i, l, ll, a, f, d);
    return 0;
}
