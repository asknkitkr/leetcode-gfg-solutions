#include<iostream>
#include<cmath>
using namespace std;

void quadraticEquation(int a, int b, int c) {
    int d = b*b - 4*a*c;
    if(d < 0) {
        cout << "No real roots" << endl;
    } else if(d == 0) {
        cout << "One root: " << -b/(2*a) << endl;
    } else {
        cout << "Two roots: " << (-b + sqrt(d))/(2*a) << " and " << (-b - sqrt(d))/(2*a) << endl;
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    quadraticEquation(a, b, c);
    return 0;
}