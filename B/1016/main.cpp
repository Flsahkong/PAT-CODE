#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    string A,B,Da,Db,PaStr,PbStr;
    int countA=0,countB=0;
    cin>>A>>Da>>B>>Db;
    for (char i : A) {
        if(i == *Da.c_str()){
            countA++;
            PaStr.append(Da);
        }
    }
    for (char i : B) {
        if(i ==*Db.c_str()){
            countB++;
            PbStr.append(Db);
        }
    }
    cout<<atoi(PaStr.c_str())+atoi(PbStr.c_str())<<endl;
    return 0;
}