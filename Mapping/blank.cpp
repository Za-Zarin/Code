

#include<bits/stdc++.h>
using namespace std;

int main()
{
     int test;
     cin>>test;
     int count=0;
     int max=0;

     while(test--){

        int num;

        cin>>num;

        int a[num];

        for(int i=0;i<num;i++){

            cin>>a[i];
        }

        for(int i=num-1;i>=0;i--){

            if((a[i]&&a[i-1])==0){

                count++;

            }


        }




     }
}
