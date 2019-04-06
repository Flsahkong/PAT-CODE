//
// Created by hotwi on 2019/4/6.
//

#include <iostream>
using namespace std;

int main(){
    int M=0,N=0;
    scanf("%d",&N);
    int DIS[100005];DIS[0]=0;
    int SUM=0,temp=0;
    for (int i=1;i<N;i++){
        scanf("%d",&temp);
        DIS[i]=DIS[i-1]+temp;
        SUM=DIS[i];
    }
    cin>>temp;
    SUM+=temp;

    scanf("%d",&M);
    int a=0,b=0,result=0;
    for(int i=0;i<M;i++){
        scanf("%d %d",&a,&b);
        if(a>b){
            temp=b;
            b=a;
            a=temp;
        }
        result=DIS[b-1]-DIS[a-1];
        printf("%d\n",min(result,SUM-result));
    }
}