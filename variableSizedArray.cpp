/*
Author: Pragathi N
Date: 4/21/2017

Input Format:
The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and q (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a) and j(an index in the array referenced by a[i]) for a query.

Output Format:
For each pair of i and j values (i.e., for each query), print a single integer denoting the element located at index j of the array referenced by a[i]. There should be a total of q lines of output.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int noSequences, noQueries; //number of variable length and number of queries
    cin >> noSequences >> noQueries;

    //**sequence is the pointer pointing to an array of pointers of size noSequences
    int **sequence = new int*[noSequences];

    //**query is the pointer pointing to an array of pointers of size noQueries
    int **query = new int*[noQueries];

    int k;
    for(int j = 0; j < noSequences; j++){
        cin >> k;
        sequence[j] = new int[k];
        for(int i = 0; i < k; i++){
            cin >> sequence[j][i];
        }

    }

    for(int i = 0; i < noQueries; i++){
        query[i] = new int[2];
        cin >> query[i][0] >> query[i][1];
        cout << sequence[query[i][0]][query[i][1]] << endl;
    }

    return 0;
}
