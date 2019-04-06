#include <iostream>
using namespace std;
int main() {
    int n=0,count=0;
    cin>>n;
    while (n!=1){
        if(n%2==1){
            n=(3*n+1)/2;
        } else{
            n/=2;
        }
        count++;
    }
    cout<<count;
    return 0;
}