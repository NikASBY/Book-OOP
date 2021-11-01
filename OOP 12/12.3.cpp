#include   <iostream>
using namespace std;

template <class X, class Y> void show (X x, Y y) {
    cout << "1-st argument: " << x << endl;
    cout << "2-st argument: " << y << endl;
}

int main () {
    show(1, 'a');
    show("Text", 3.5);
    return 0;
}