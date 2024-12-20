#include<bits/stdc++.h>
using namespace std;


//Method 1
/*
int main(){
    double a,b,c;
    if(a>b && a > ){
        cout<<"a is big"<<endl;
    }
    else if (b>a && b>c){
        cout<<"b is big"<<endl;
    }
    else{
        cout<<"c is big"<<endl;
    }


 return 0;
}

*/
int main(){
    int a,b;cin>>a>>b>>c;
    if(a>=b){
        if (a>=c){
            cout<<"a is big"<<endl;

        }
        else{
            cout<<"c is big"<<endl;
        }
    }
    else if(a>=c){
        if (a>=b){
            cout<<"b is big"<<endl;
        }
        else{
            cout<<"c is big"<<endl;
        }
    }
    else{
        cout<<"c is big"<<endl;
    }

    return 0;

}


