

#include <iostream>
#include <string>
using namespace std;

string swap(string A, string B){
    string S = A;
    for(int i = 0; i < S.size(); i++){
        if(i == 0)
            S[i] = B[i];
        else
            S[i] = A[i];
    }
    return S;
}

int main() {
   // Complete the program
    string a, b;
    cin >> a;
    cin >> b;

    //length
    int lenA = a.size();
    int lenB = b.size();
    cout << lenA << " " << lenB << endl;

    //concat
    string c = a + b;
    cout << c << endl;

    //swap the first element
    string aa= swap(a,b);
    string bb = swap(b,a);
    cout << aa << " " << bb << endl;

    return 0;
}
