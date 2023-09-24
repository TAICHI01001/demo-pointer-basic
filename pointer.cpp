#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
        int temp = a;
        a = b;
        b = temp;
}
int main()
{
        cout<<"Hello world!"<<endl;
        int x = 5, y = 10;
        cout << "Before Swap: x = " << x << " y = " << y << endl; // Outputs 5 10

        swap(x, y);
        cout << "After Swap: x = " << x << " y = " << y << endl; // Outputs 10 5
        
        int a = 10;
        cout << "this value a : " << a << endl;
        cout << "this address a : " << &a << endl;

        int *b;
        b = &a;
        cout << "this address a : " << b << endl;
        cout << "this address b : " << &b << endl;
        cout << "this value b : " << *b << endl;

        int **c;
        c = &b;
        cout << "this address b : " << c << endl;
        cout << "this address c :" << &c << endl;
        cout << "this address a : " << *c << endl;
        cout << "this value a : " << **c << endl;
}