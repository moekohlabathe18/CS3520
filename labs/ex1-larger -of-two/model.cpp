#include <iostream>
using namespace std;

int larger(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
} 
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b) {
        cout << "The larger number is: " << a << endl;
    } else {
        cout << "The larger number is: " << b << endl;
    }
    return 0;
}
