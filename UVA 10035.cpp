//UVA10035 - Primary Arithmetic

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b;
    
    while(cin>>a>>b and (a!=0 and b!=0)){
        int carry=0,ct=0;
        
        while(a!=0 or b!=0){
            if((a%10+b%10+carry)>9){
                ct++;
                carry=1;
            }
            else{
                carry=0;
            }
            a/=10;
            b/=10;
        }

    if(ct==0)
        cout<<"No carry operation."<<endl;
    else if(ct==1)
        cout<<ct<<" carry operation."<<endl;
    else
        cout<<ct<<" carry operations."<<endl;
    }

    return 0;
}