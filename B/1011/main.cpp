#include <iostream>
using namespace std;
int main() {
    double a=0,b=0,c=0;
    int T=0,count=0;
    cin>>T;
    while (T--){
        count++;
        cin>>a>>b>>c;
        if(a+b>c){
            cout<<"Case #"<<count<<": true"<<endl;
        } else{
            cout<<"Case #"<<count<<": false"<<endl;
        }
    }
    return 0;
}