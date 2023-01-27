#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    cout << (n & k) << endl; // AND operator
    cout << (n | k) << endl; // OR operator
    cout << (n ^ k) << endl; // XOR operator

    cout << (n << k) << endl; // Left shift operator
    cout << (n >> k) << endl; // RIght shift operator
    cout << (~n) << endl;     //

    return 0;
}