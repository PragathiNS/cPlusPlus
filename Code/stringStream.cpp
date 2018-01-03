/*stringstream is a stream class to operate on strings. It basically implements input/output operations on memory (string) based streams.
stringstream can be helpful in different type of parsing. The following operators/functions are commonly used here

Operator >> Extracts formatted data.
Operator << Inserts formatted data.
Method str() Gets the contents of underlying string device object.
Method str(string) Sets the contents of underlying string device object.
Its header file is sstream.
*/

/*


You have to complete the function vector parseInts(string str). str will be a string consisting of comma-separated integers,
and you have to return a vector of int representing the integers.
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    stringstream ss(str);
    vector<int> out;
    int num;
    char ch;
    //checks if the stream is integer
    while(ss >> num) {
        //adds the integers because num is integer
        out.push_back(num);
        //holds the separator
        ss >> ch;
    }

    return out;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
