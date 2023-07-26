#include<bits/stdc++.h>
using namespace std;

int count[100123];// globally declared
//this is a count array
// inside the main function each count of the vector is now 0

int main(){

    vector<int> v = {2,2,3,4,2};

    for( auto u : v){
        // not counting index
        count[u]++;//count[v[i]]++, v[i] is the element
        //if it becomes negative its not possible
        //so we need mapping
    }
}
