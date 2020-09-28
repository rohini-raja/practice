#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int permutation_check(string s1,string s2){

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;


}
int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        string s1,s2;
        cin>>s1>>s2;
        if(permutation_check(s1,s2)==1) cout<<"True! The strings are permutations of each other";
        else cout<<"False";
        return 0;
}
