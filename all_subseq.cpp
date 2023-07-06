#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int c=0;
void allsubseq(string ip,string op){
    if(ip.empty()){
        c++;
        cout<<op<<endl;
        return;
    }
    allsubseq(ip.substr(1),op+ip[0]);
    allsubseq(ip.substr(1),op);
}
int main(){
    string op="";
    string ip="abab";
    allsubseq(ip,op);
    cout<<"   c="<<c;
    return 0;
}