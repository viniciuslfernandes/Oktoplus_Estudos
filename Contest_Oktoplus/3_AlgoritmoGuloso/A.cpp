#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, acum=0; cin>>n;
    for(int i=0; i<n; i++){
        int a, b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            acum+=1;
        }
    }
    cout<<acum<<endl;
    return 0;
}