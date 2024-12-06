#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Identifying prime numbers" << "\n";
    cout << "prime=1 (adad aval) " << " " << "prime=0 (adad morakab)" << "\n";
    cout << "enter number:";
    int n,d,prime;
    prime=1;
float w;
cin >> n;
d=2;
w=sqrt(n);
while ((d<=w)&&(prime)){
    if (n%d==0)
        prime=0 , d++;
    else
        d++;
}
if (prime == 1)
cout << "This is the prime number" ;
else
cout << "This is not a prime number";
return 0;
}


