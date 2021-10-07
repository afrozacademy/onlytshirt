#include <iostream>
using namespace std;
int Count(int n, int count)
{
    if (n == 0)
    {
        return count;
    }
    return Count(n / 10, count + 1);
}
int main()
{
    int n;
    cin >> n;
    int count = 0;
    cout << Count(n, count) << endl;
}
