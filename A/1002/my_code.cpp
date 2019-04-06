#include <iostream>
using namespace std;

struct Node{
    int exp;
    double coeff;
};
int main1() {
    int K1=0,K2=0,K_sum=0;
    cin>>K1;
    Node Poly_one[K1];
    for(int i=0;i<K1;i++){
        cin>>Poly_one[i].exp;
        cin>>Poly_one[i].coeff;
    }
    cin>>K2;
    Node Poly_two[K2];
    for(int i=0;i<K2;i++){
        cin>>Poly_two[i].exp;
        cin>>Poly_two[i].coeff;
    }

    Node Poly_sum[K1+K2];
    int i=0,k=0,j=0;
    int zero_num=0;
    int same_sum=0;
    while (i<K1 && j<K2){
        if(Poly_one[i].exp>Poly_two[j].exp){
            if(Poly_one[i].coeff!=0){
                Poly_sum[k]=Poly_one[i];
                i+=1;
                k+=1;
                K_sum+=1;
            }
        }else if(Poly_one[i].exp==Poly_two[j].exp){
            if((Poly_one[i].coeff+Poly_two[j].coeff)!=0){
                Poly_sum[k].exp=Poly_one[i].exp;
                Poly_sum[k].coeff=Poly_one[i].coeff+Poly_two[j].coeff;
                i+=1;
                j+=1;
                k+=1;
                K_sum+=1;
                same_sum+=1;
            } else{
                i+=1;
                j+=1;
                zero_num+=1;
            }
        } else{
            if(Poly_two[j].coeff!=0){
                Poly_sum[k]=Poly_two[j];
                j+=1;
                k+=1;
                K_sum+=1;
            }
        }
    }
    if(i==K1&&j==K2){
        if(K_sum+K1-i==0){
            cout<<K_sum+K1-i;
        } else{
            cout<<K_sum+K1-i;
            for(int m=0;m<K2+K1-same_sum-2*zero_num;m++){
                cout<<" "<<Poly_sum[m].exp<<" "<<Poly_sum[m].coeff;
            }
            for(;i<K1;i++){
                cout<<" "<<Poly_one[i].exp<<" "<<Poly_one[i].coeff;
            }
        }
    } else{
        if(i<K1){
            if(K_sum+K1-i==0){
                cout<<K_sum+K1-i;
            } else{
                cout<<K_sum+K1-i;
                for(int m=0;m<K2+i-same_sum-2*zero_num;m++){
                    cout<<" "<<Poly_sum[m].exp<<" "<<Poly_sum[m].coeff;
                }
                for(;i<K1;i++){
                    cout<<" "<<Poly_one[i].exp<<" "<<Poly_one[i].coeff;
                }
            }
        }
        if(j<K2){
            if(K_sum+K2-j==0){
                cout<<K_sum+K2-j;
            } else{
                cout<<K_sum+K2-j;
                for(int m=0;m<K1+j-same_sum-2*zero_num;m++){
                    cout<<" "<<Poly_sum[m].exp<<" "<<Poly_sum[m].coeff;
                }
                for(;j<K2; j++){
                    cout<<" "<<Poly_two[j].exp<<" "<<Poly_two[j].coeff;
                }
            }
        }
    }
    return 0;
}

/*
3 3 1.1 2 5.6 1 -1.7
2 3 -1.1 1 1.7

4 15 -1.5 13 1.68 7 -8.95 6 -4.5
3 16 75 10 15.42 5 7.8

5 154 778 150 45 124 45 99 -458 14 -78
1 14 56
*/

