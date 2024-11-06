#include <queue>
#include <iostream>
#include <string>
using namespace std;
string operator*(string &lhs, const int &rhs) {
    string result = "";
    for (int i = 0; i < rhs; i++) {
        result = result + lhs;
    }
    return result;
}

int main() {
    string a = "abc ";
    cout << a * 3 << endl;
    // this gives "abc abc abc "
}