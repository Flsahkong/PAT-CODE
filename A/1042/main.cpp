#include <iostream>
#include <cstring>
void output(int end[]);
using namespace std;
int main1() {
    int Array[55],list[55],end[55];
    memset(Array,0,55);
    memset(list,0,55);
    memset(end,0,55);
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
        output(end);
    } else{
        output(Array);
    }
    return 0;
}

void output(int end[]){
    for(int i=1;i<55;i++){
        if(i!=54){
            if(end[i]/14==0){
                cout<<"S"<<end[i]<<" ";
            } else if(end[i]/27==0){
                cout<<"H"<<end[i]-13*1<<" ";
            } else if(end[i]/40==0){
                cout<<"C"<<end[i]-13*2<<" ";
            } else if(end[i]/53==0){
                cout<<"D"<<end[i]-13*3<<" ";
            } else{
                cout<<"J"<<end[i]-13*4<<" ";
            }
        } else{
            if(end[i]/14==0){
                cout<<"S"<<end[i];
            } else if(end[i]/27==0){
                cout<<"H"<<end[i]-13*1;
            } else if(end[i]/40==0){
                cout<<"C"<<end[i]-13*2;
            } else if(end[i]/53==0){
                cout<<"D"<<end[i]-13*3;
            } else{
                cout<<"J"<<end[i]-13*4;
            }
        }

    }
}