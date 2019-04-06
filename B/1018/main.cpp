#include <iostream>
using namespace std;
int compute(char a,char b){
    if(a==b)
        return 0;
    if(a=='C'){
        if(b=='B')
            return -1;
        else
            return 1;
    }
    if(a=='B'){
        if(b=='J')
            return -1;
        else
            return 1;
    }
    if(a=='J'){
        if(b=='C')
            return -1;
        else
            return 1;
    }
}
char change(int i){
    if(i==0) return 'B';
    if(i==1) return 'C';
    if(i==2) return 'J';
}
int main() {
    int N=0;
    int times[2][3]={0};    //0-B 1-C 2-J
    int result[2][3]={0};   //0-赢 1-平局 2-输了
    cin>>N;
    char P,Q;
    for(int i=0;i<N;i++){
        cin>>P>>Q;
        if(compute(P,Q)==-1){
            //Q赢了
            result[1][0]+=1;
            result[0][2]+=1;
            if(Q=='B'){
                times[1][0]+=1;
            }else if(Q=='J'){
                times[1][2]+=1;
            } else{
                times[1][1]+=1;
            }
        } else if(compute(P,Q)==0){
            //平局
            result[1][1]+=1;
            result[0][1]+=1;
        } else{
            //P赢了
            result[1][2]+=1;
            result[0][0]+=1;
            if(P=='B'){
                times[0][0]+=1;
            }else if(P=='J'){
                times[0][2]+=1;
            } else{
                times[0][1]+=1;
            }
        }
    }
    cout<<result[0][0]<<" "<<result[0][1]<<" "<<result[0][2]<<endl;
    cout<<result[1][0]<<" "<<result[1][1]<<" "<<result[1][2]<<endl;

    //id只记录大的，如果不比他大，那么默认就是字母序列中最小的那个了
    int id1=0,id2=0;
    for(int i=0;i<3;i++){
        if(times[0][i]>times[0][id1])
            id1=i;
        if(times[1][i]>times[1][id2])
            id2=i;
    }
    cout<<change(id1)<<" "<<change(id2)<<endl;
    return 0;
}