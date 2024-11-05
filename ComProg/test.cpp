#include <bits/stdc++.h>
using namespace std;

void println(int step,int goal) {
    if(step < goal) {
        println(step+1,goal);
        cout << step << " ";
    }
}

int main() {
    println(0,5);
}