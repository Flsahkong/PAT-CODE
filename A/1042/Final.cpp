//
// Created by hotwi on 2018/9/23.
//

#include <iostream>
#include <cstring>
void output(int end[],char Set[]);
using namespace std;
int main() {
    int Array[55],list[55],end[55];
    memset(Array,0,55);
    memset(list,0,55);
    memset(end,0,55);
    char Set[5]={'S','H','C','D','J'};
    int T=0;
    cin>>T;
    bool isEnd=true;
    for(int i=1;i<55;i++){
        cin>>list[i];
        Array[list[i]]=i; //第一轮过去之后，1-54的序号已经排列好了
        end[list[i]]=i;
    }
    T--;
    while (T--){
        if(T%2==0)
            for(int i =1;i<55;i++){
                end[list[i]]=Array[i];
                isEnd= true;
            }
        else
            for(int i =1;i<55;i++){
                Array[list[i]]=end[i];
                isEnd= false;
            }
    }
    if(isEnd){
        output(end,Set);
    } else{
        output(Array,Set);
    }
    return 0;
}

void output(int end[],char Set[]){
    for(int i=1;i<55;i++){
        if(i!=1)
            cout<<" ";
        end[i]--;
        cout<<Set[end[i]/13]<<end[i]%13+1;
    }
}