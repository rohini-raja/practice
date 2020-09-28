#include<iostream>
#include<string.h>
using namespace std;
bool Isunique(string s){
        int k = s.length();
        for(int i=0;i<k-1;i++)
                for(int j=i+1;j<k;j++)
                        if(s[i]==s[j])
                                return false;
        return true;}
        int main(){
                int i,j;
                string s;
                cin>>s;
               // bool answer;
                if(Isunique(s)==0) cout<<"\nNot Unique";
                else cout<<"\n Unique";
                return 0;
        }
~                                                                               
~           
