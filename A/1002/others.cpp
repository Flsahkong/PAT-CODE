//
// Created by hotwi on 2018/9/12.
//

#include<iostream>
#include<cstdio>
using namespace std;
#include<algorithm>
#include<cmath>
#include<set>
#include<map>
#include<string>
#include<cstring>
#include<vector>
#include<cstdlib>
#define ll long long int
const int maxn=1005;
int main()
{
    double num[maxn];
    memset(num,0,sizeof(num));
    int k;
    int b=0;
    for(int j=0;j<2;j++){
        cin>>k;
        int n;
        double a;
        for(int i=0;i<k;i++){
            cin>>n>>a;
            num[n]+=a;
        }
    }
    for(int i=0;i<maxn;i++)    //加好后才来记录count
        if(num[i]!=0)	b++;
    printf("%d",b);
    for(int i=maxn-1;i>=0;i--){
        if(num[i]!=0){
            printf(" %d %.1f",i,num[i]);
        }
    }
}
