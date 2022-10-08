#include <iostream>
using namespace std;
int main()
{
    int a[] = {3, 5, 8};
    int i;
    cout << a << endl;                                          //   this will print the address of the base(first element) address
    cout << *a << endl;                                         //  this will print value of the first array element
    cout << &a << " " << a << " " << a[0] << " " << *a << endl; // &a[i],a+i: address, a[i],*(a+i): value
    for (i = 0; i < 3; i++)
    {
        cout << "address is: " << a + i << "\n";
        cout << "address is: " << &a[i] << "\n";
        cout << "value is: " << a[i] << "\n";
        cout << "value is: " << *(a + i) << "\n";
    }
    return 0;
}
