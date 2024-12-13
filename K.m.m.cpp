#include <iostream>
using namespace std;

int kmm (int a,int b ){
    int g , res;
    res=a*b;
    g=a%b;
    if (g!=0){
        a=b;
        b=g;
    }
    else {
        g=b;
        res=res/g;
    }
    return res;
}

int main (){
    cout << "please enter two number:" ;
    int c, v,f;
    cin >> c >>v;
    f=kmm(c,v);
    cout << f;
}