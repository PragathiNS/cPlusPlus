/*
Author: Pragathi N
Date: 4/20/2017
Input Format:
You will be given two positive integers, a and b (a <= b), separated by a newline.

Output Format
For each integer n belonging to [a,b] (so all numbers in that range):
If 1 <= n <= 9, then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
Else if n > 9  and it is even, then print "even".
Else if n > 9 and it is odd, then print "odd".
*/

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string numbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = a; i <= b; i++){
        if (i <= 9)
            cout << numbers[i] << endl;
        else
             cout << (i % 2 ? "odd" : "even") << endl;
    }
    return 0;
}

//average code
/*
int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(i <= 9 && i >= 0){
            if(i == 0) printf("zero \n");
            else if(i == 1) printf("one \n");
            else if(i == 2) printf("two \n");
            else if(i == 3) printf("three \n");
            else if(i == 4) printf("four \n");
            else if(i == 5) printf("five \n");
            else if(i == 6) printf("six \n");
            else if(i == 7) printf("seven \n");
            else if(i == 8) printf("eight \n");
            else printf("nine \n");
        }
        else{
            if( i % 2 == 0) printf("even \n");
            else printf("odd \n");
        }
    }
    return 0;
}
*/
