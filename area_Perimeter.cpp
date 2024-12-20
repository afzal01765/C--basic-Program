#include<bits/stdc++.h>
using namespace std;
double area_is(double a, double b){
    return a*b;
}
double primeter(double a, double b){
    return a+b;
}
int main(){
    double a,b;
    cin>>a>>b;
    cout<<"The value of area is:"<<area_is(a,b)<<endl;
    cout<<"The value of primeter:"<<2*primeter(a,b)<<endl;

    return 0;
}
