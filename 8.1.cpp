#include <iostream>
using namespace std;
class ClassA {
    public:
        double x;
        double y;
} A;
class ClassB {
    public:
        int a;
        int b;
        double f(ClassA obj) {
            return a * obj.x + b * obj.y;
        }
} B;
void showB (ClassB obj) {
    cout << "a = " << obj.a << endl;
    cout << "b = " << obj.b << endl;
}
int main () {
    A.x = 2.5;
    A.y = 3.6;
    B.a = 2;
    B.b = 5;
    cout << "Value is " << B.f(A) << endl;
    showB(B);
    return 0;
}
