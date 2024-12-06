#include <iostream>
using namespace std;

int main(){
cout << "welcome to math machine" << "\n";
int k,n,a,b,q,w,e,t,r,answer;
q=1 , w=2 , e=3 , t=4 , r=5,n=1,k=1;
cout << "please enter two number" << "\n\n" << "Enter a:";
cin >> a ;
cout << "Enter b:";
cin >> b;
cout << "\n" << "What can I do for you?" << "\n\n" << "1:sum of two numbers" << "\n" << "2:subtracting two numbers" << "\n" << "3:multiplying two numbers" << "\n" << "4:dividing two numbers" << "\n" << "5:Exit" << "\n\n" << "please enter your answer:" ;
while (n==k){
        k=-k;
cin >> answer;
if (answer>0&&answer<6){
   if (answer==q)
    cout << "a+b:" <<a+b;
else if( answer==w)
    cout << "a-b:" << a-b << " and " << "b-a:" << b-a;
else if ( answer==e)
    cout << "a*b:" << a*b;
else if (answer==t)
    cout << "a/b:" << a/b << " and " << "b/a:" << b/a;
else if (answer==r)
    cout << "THANKS FOR CHOOSING US";
else
    cout << "THANKS FOR CHOOSING US";
}
else{
    k=-k;
    cout << "The selected number is not correct. Please choose a suitable number.";
}
}
return 0;
}
