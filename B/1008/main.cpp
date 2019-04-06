#include <iostream>
using namespace std;
int main() {
    int N,M;
    cin>>N>>M;
    M=M%N;
    int* Arry=new int[N];
    for(int i=0;i<N;i++){
        cin>>Arry[i];
    }
    cout<<Arry[(N-M)%N];    //如果测试用例只有一个，那个就会越界，所以需要对N进行%
    for(int i=1;i<N;i++){
        cout<<" "<<Arry[(i+N-M)%N];
    }
    return 0;
}