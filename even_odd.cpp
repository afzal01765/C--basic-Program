
#include<bits/stdc++.h>
using namespace std;
/*
Method 1
int main(){

    int n;cin>>n;
    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }

 return 0;
}
*/
//Method 2

/*
int main(){

    int n;cin>>n;
    if((n&1)==0){
        cout<<"Even"<<endl;

    }
    else{
        cout<<"odd"<<endl;
    }


    return 0;

}
*/
int main(){

    int n,temp ;
    cin>>n;

    temp = n ;

    temp = temp>>1;

    temp = temp<<1;

    if(temp == n){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd"<<endl;

    }

 return 0;
}
