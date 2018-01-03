/*
Author: Pragathi N
Date: 4/20/2017
Given a positive integer denoting , do the following:
If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
*/

#include <iostream>
#include <cstdio>

using namespace std;
int main(){
    int n;
    cin >> n;
    // your code goes here
    if(n > 9){
        printf("Greater than 9");
    }
    else{
        if(n == 0) printf("zero");
        else if(n == 1) printf("one");
        else if(n == 2) printf("two");
        else if(n == 3) printf("three");
        else if(n == 4) printf("four");
        else if(n == 5) printf("five");
        else if(n == 6) printf("six");
        else if(n == 7) printf("seven");
        else if(n == 8) printf("eight");
        else printf("nine");
    }
    return 0;
}
