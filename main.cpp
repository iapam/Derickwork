#include <iostream>

using namespace std;

int main()
{
    double balance=0;
    double withdraw;
    double deposite;
    cout << "Welcome !" << endl;
    cout<<"Enter your your balance: ";
     cin>>balance;
    cout<<endl;
    cout<<"----------------------------------------------------------------------------";
    cout<<endl;
    cout<<"select an option :"<<endl;
   cout<<"1. withdraw Amount :"<<endl;
   cout<<"2. Deposit Amount :"<<endl;
   cout<<"3. Exit :"<<endl;
   cout<<"---------------------------------------------------------------------------"<<endl;
   cout<<"How much amount you want to withdraw from your account?"<<endl;
   cout<<"Amount: ";
   cin>>withdraw;
   balance=balance-withdraw;
cout<<endl;
cout<<"Your new balance is :";
cout<<balance<<endl;
cout<<"How much amount you want to deposit in your account ?"<<endl;
 cout<<"Amount: ";
   cin>>deposite;
   balance=balance+deposite;
    cout<<endl;
    cout<<"Your new balance is :";
cout<<balance<<endl;
cout<<"Thank you for using the system!";
    return 0;
}
