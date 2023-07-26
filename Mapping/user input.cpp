#include<bits/stdc++.h>
using namespace std;

int main(){


       map<string, int > id ;

       int n;
       cin>>n;
       for(int i=0;i<n;i++){

           string s;
           int d;
           cin>>s>>d;
           id[s]=d;
       }

       cout<<id["zarin"]<<endl;

// vector and map combination

     vector<map<string,int>> v;
     map<string, int>c;
     c["Zarin"]=1;
     v.push_back(c);
     cout<<v[0]["Zarin"]<<endl;

//SIZE OF MAP

}
