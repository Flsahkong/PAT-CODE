#include <iostream>
using namespace std;
int main() {
    int T=0,A1,A2,B1,B2;
    int A=0,B=0;
    cin>>T;
    while (T--){
        cin>>A1>>A2>>B1>>B2;
        if(A2==A1+B1&&B2!=A1+B1){
            B++;
        } else if(B2==A1+B1&&A2!=A1+B1){
            A++;
        }
    }
    cout<<A<<" "<<B<<endl;
    return 0;
}