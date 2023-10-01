#include <iostream>
using namespace std;

// method 1
int factorial1(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}


// method 2
int factorial2(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial1(n)<<endl;
    cout << factorial2(n)<<endl;
    // both result should be same.
    return 0;
}
