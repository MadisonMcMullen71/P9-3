#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r){
    switch (r)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default:  return 0;
    }
}


int main(){
    cout << romanCharValue('M') << endl; // 1000
    cout << romanCharValue('X') << endl; // 10
    cout << romanCharValue('I') << endl; // 1

    return 0;
}

