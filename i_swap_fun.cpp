#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

int main() {
    int a, b;
    cout << "enter a: " << endl;
    cin >> a;
    cout << "enter b: " << endl;
    cin >> b;
    
    swap(a, b);
    
    cout << "a = " << a << endl << "b = " << b << "\n";
    return 0;
}
