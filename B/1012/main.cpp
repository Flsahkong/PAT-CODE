#include <iostream>
using namespace std;

void cou(int a){
    if(a==0){
        cout<<" N";
    } else{
        cout<<" "<<a;
    }
}
int main() {
    int N;
    int A1=0,A2=0,A3=0,A5=0;
    double A4=0;
    cin>>N;
    int temp,countA2=0,countA4=0,countA5=0;
    for(int i=0;i<N;i++){
        cin>>temp;
        if(temp%5==0){
            if(temp%2==0){
                A1+=temp;
            }
        }
        if(temp%5==1){
            if(countA2%2==0){
                A2+=temp;
            } else{
                A2-=temp;
            }
            countA2++;
        }
        if(temp%5==2){
            A3++;
        }
        if(temp%5==3){
            countA4+=1;
            A4+=temp;
        }
        if(temp%5==4){
            if(temp>A5){
                A5=temp;
            }
            countA5++;
        }
    }
    if(A1==0){
        cout<<"N";
    } else{
        cout<<A1;
    }
    if(countA2==0){
        cout<<" N";
    } else{
        cout<<" "<<A2;
    }
    cou(A3);
    if(A4==0){
        cout<<" N";
    } else{
        printf(" %.1f",A4/countA4);
    }
    if(countA5==0){
        cout<<" N";
    } else{
        cout<<" "<<A5;
    }
    return 0;
}