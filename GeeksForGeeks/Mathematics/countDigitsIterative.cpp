// Time Complexity: Theta(d) where d is the number of digits in the number

#include<iostream>
using namespace std;

int countDigit(int n) {
    int count = 0;
    while(n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countDigit(n);
    return 0;
}