
#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    string s;
    cout<<"enter the string "<<endl;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}