#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, num;
    cin >> n;

    //vector initialization
    vector<int> in;

    for(int i = 0; i < n ; i++){
        cin >> num;
        //add elements to the vector
        in.push_back(num);
    }

    sort(in.begin(), in.end()); //sort

    for(int i = 0; i < n ; i++){
        cout << in[i] << ' '; //print the sorted order
    }

    return 0;
}
