// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

int main()
{
     int test;
     cin >>test;

     map<string,int> vis;

     while ( test-- ) {
        string s;
        cin >> s;

        if (vis[s] == 0 ) {

            cout <<"OK"<<endl;
            vis[s]++;

        }

        else {

            cout <<s<<vis[s]<<endl;
            vis[s]++;

        }
    }

}
