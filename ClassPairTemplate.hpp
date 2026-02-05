#include <iostream>
using namespace std; // added 
// TODO: Create a class template named Pair
// It should accept TWO different data types

template <typename T1, typename T2>
class Pair {
private:
    T1 first; 
    T2 second;

public:
    // TODO: Write PROTOTYPE for  constructor that initializes both values
    Pair(T1 v1, T2 v2); 
    // TODO: Write PROTOTYPE for  function named print()
    // It should display both values in the format:
    // (value1, value2)
    void print(); 
};

// TO DO: Include implementation file here
#include "ClassPairTemplate.tpp"
