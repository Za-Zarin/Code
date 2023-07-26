
#include<bits/stdc++.h>
using namespace std;

//int count[100123];
//map has no limit
//index can not be declared at any size array
int main(){

    //first int is the data type which would be inside the index
    // basically the input
    // second input is count

    // map<int,int>count;
    //vector<int> v={1,2,3,4};
    //count[2]++;

    map<string,int> id;
    // the string is being used as index
    // the index has certain number
    // working exactly like array
    id["Zarin"] =1;
    id["Zara"] =4;
    id["Za"] =5;
    id["Z"] =9;

    cout<<id["Zarin"]<<endl;
    cout<<id["Zara"]<<endl;
    cout<<id["Za"]<<endl;
    cout<<id["Z"]<<endl;

    // index is called key
    // the inside thing is called value

    map<string,string> gender;
    gender["Zarin"]="Female";
    gender["Rin"]="Female";
    gender["Arina"]="Female";
    gender["Ironman"]="Male";
    gender["Hulk"]="Male";

    cout<<gender["Zarin"]<<endl;
    cout<<gender["Rin"]<<endl;
    cout<<gender["Arina"]<<endl;
    cout<<gender["Ironman"]<<endl;
    cout<<gender["Hulk"]<<endl;

}
