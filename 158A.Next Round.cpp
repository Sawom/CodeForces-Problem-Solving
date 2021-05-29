#include<iostream>
using namespace std;
int main(){
    int i,n,k,ary[100] , count=0;
    cin>>n>>k;

    for(i=0;i<n;i++){
        cin>>ary[i];
    }

    for(i=0;i<n;i++){
        if(ary[i]>0 && ary[i]>=ary[k-1] ){
            count++;
        }
    }
    cout<<count;

}
