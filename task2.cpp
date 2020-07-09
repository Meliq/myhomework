#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,d=0;
    cout<<"n=";
    cin>>n;
    for(int i=1;i<=n;++i)
     d=d+pow(i,i);
     cout<<d<<endl;
     return 0;

}