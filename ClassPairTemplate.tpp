// Implement  ClassPairTemplate class constructor and print methods

// Constructor 
template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 v1, T2 v2) {
    first = v1;
    second = v2; 
}

template<typename T1, typename T2>
void Pair<T1, T2>::print() {
    cout << "(" << first << ", " << second << ")" << endl; 
}