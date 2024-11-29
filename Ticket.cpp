#include <iostream>
using namespace std;

int main()
{
    cout << "welcome to cinema";
    int age, customerclub, answer, code;
    code = 7;
    cout << "Enter age:";
    cin >> age;
    cout << "Enter customerclub code:";
    cin >> customerclub;
    cout << " You want a ticket? (yes=1and no=0)"<< "\n"<< "answer:";
    cin >> answer;
    if (answer == 1 && age <= 12 )
        cout << "You have to pay 10 tomans.";
    else if (age <= 18 && customerclub == code)
            cout << "You have to pay 12 tomans.";
            else if ( age <=18 && customerclub!=code)
            cout << "You have to pay 15 tomans.";
            else if (age <=60 && customerclub==code)
            cout << "You have to pay 20 tomans.";
            else if (age <=60 && customerclub!=code)
            cout << "You have to pay 25 tomans.";
            else if (age >60)
            cout << "You are included in the special discount." << "\n" << "You have to pay 10 tomans."
            else
                        cout << "\n" <<"your welcome";
}
