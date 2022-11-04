// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

// Class template
template <class T, class P>
class MyClass {
private:
    // Variable of type T
    T num;
    P stringa;

public:
    MyClass(T a, P b) {
        num = a;
        stringa = b;
    }


    void pippo() {
        T tmp;
        tmp = num + stringa;
        cout << tmp << endl;

    }
};

int main() {

    // create object with int type
    MyClass <int, int> myObj(5, 5);
    myObj.pippo();

    MyClass <string, string> myObj2("abc", "def");
    myObj2.pippo();

    


    return 0;
}
