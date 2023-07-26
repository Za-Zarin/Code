#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<long long > v = {1,212324546,443345,212324546};
    map<long long, int> cnt;

    for( int i=0;i< v.size();i++){

        cnt[v[i]]++;//counting

    }

    cout<<cnt[212324546]<<endl;

    //index values : count numbers
    //u.first(key) : u.second(value)
    // gives sorted key values
    //ordered listed
    //also gives district keys

    for (auto u : cnt ){

        cout<<u.first<<" "<<u.second<<endl;

    }

//********************************************//
    map<string,int> id;

    id["Zarin"] =1;
    id["Zara"] =4;
    id["Za"] =5;
    id["Z"] =9;//searching complexity is log2(size of map)
    //here log2(3)

    for( auto u :id )
        cout<<u.first<<" "<<u.second<<endl;

//********************************************//


}
