#include <iostream> //*** 
using namespace std; //*** 

// TODO: Write a function template myMax

template <typename T> 

T myMax(T a, T b) {
    if (a > b) {
        return a; 
    } 
    else {
        return b; 
    }
}

int main() { //*** 
    cout << myMax(3, 7) << endl;
    cout << myMax(3.5, 2.1) << endl;
    cout << myMax(string("apple"), string("banana")) << endl;
    return 0;
} //***
