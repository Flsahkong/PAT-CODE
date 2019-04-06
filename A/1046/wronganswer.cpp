#include <iostream>

using namespace std;

int wronganswer() {
    int N=0,M=0;
    cin>>N;
    int* DIS=new int[N];
    long SUM=0;
    for(int i=0;i<N;i++){
        cin>>DIS[i];
        SUM+=DIS[i];
    }
    cin>>M;
    int a=0,b=0;
    int result=0;
    for(int i=0;i<M;i++){
        result=0;
        cin>>a;
        cin>>b;
        //下面直接开始计算
        if(a==b) result=0;
        if(a>b){
            int t=b;
            b=a;
            a=t;
        }
        if(b-a<=N/2){
            for(int j=a;j<b;j++){
                result+=DIS[j-1];
            }
        } else{
            for(int j=b;j<N+a;j++){
                result+=DIS[(j-1)%N];
            }
        }
        if(result>(SUM-result)) result=(SUM-result);
        cout<<result<<endl;
    }
    return 0;
}