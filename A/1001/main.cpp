#include <iostream>
#include <stack>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    long a, b;
    while (scanf("%ld %ld", &a, &b) != EOF) {
            long sum = a + b;
        long sum_obj = abs(sum);
        stack<long> S;
        while (sum_obj >= 1000) {
            S.push(sum_obj % 1000);
            sum_obj /= 1000;
        }
        if (sum < 0 && !S.empty()) {
            cout << "-" << sum_obj << ",";
        } else if(sum<0 && S.empty()) {
            cout << "-" << sum_obj;
        } else if(sum == 0 || (sum>0 && S.empty())){
            cout << sum_obj;
        } else{
            cout << sum_obj << ",";
        }
        while (!S.empty()) {
            if (S.size() == 1) {
                if(S.top()/100>0)
                    cout<<S.top()/100;
                else
                    cout<<0;
                if((S.top()%100)/10>0)
                    cout<<(S.top()%100)/10;
                else
                    cout<<0;
                if(S.top()%10>0)
                    cout<<S.top()%10;
                else
                    cout<<0;
            } else {
                if(S.top()/100>0)
                    cout<<S.top()/100;
                else
                    cout<<0;
                if((S.top()%100)/10>0)
                    cout<<(S.top()%100)/10;
                else
                    cout<<0;
                if(S.top()%10>0)
                    cout<<S.top()%10<<",";
                else
                    cout<<0<<",";
            }
            S.pop();
        }
    }
    return 0;
}