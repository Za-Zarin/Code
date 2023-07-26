// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string,string>ipName;

    for (int i=0;i<n;i++) {
        string name,ip;//ip is key
        cin>>name>>ip;

        ipName[ip]=name;
    }

    while ( m-- ) {

        string s1,ip;
        cin>>s1>>ip;

        ip.pop_back();//deleting the semicolon cause and match with the previous input
        cout << s1 << " " << ip << "; #" << ipName[ip] << endl;
    }
}
