// count number of digits

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int noOfDigit=0;
    while(n!=0){
        n=n/10;
        noOfDigit++;
    }
    cout<<noOfDigit<<endl;
    return 0;
}
