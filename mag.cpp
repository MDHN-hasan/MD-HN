#include <iostream>
using namespace std;

int MaG(int n){
    int b,r;
    b=0;
    while (n!=0){
    r=n%10;
    b=10*b+r;
    n=n/10;
    }
    return b;
}

int main (){
    cout <<" please enter a number:";
    int x,y;
    cin>>x;
    y=MaG(x);
    cout << y ;
}