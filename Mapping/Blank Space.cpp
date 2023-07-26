
// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

int main()
{
     int test;
     int n;
     int num;
     cin>>test;

     map<int,int>cnt;


     while( test-- ) {
        cin>>num;
        int m=0;
        int cnt[n]=0;

        while(num--){

        cin>>n;

        if (n == 0 ) {

            cnt[n]++;
        }
        else {

            cnt[n]=0;
        }
        m=max(m,cnt[n]);
       }

       cout<<m<<endl;

    }

}
