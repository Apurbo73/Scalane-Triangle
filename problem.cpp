#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=b && b!=c && c!=a){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
	

}
