#include<iostream>
#include<string>
using namespace std;

class bank{
    private:

    string acno;
    string name;
    int id , p ,rate , year;
    float si;
    long double amnt;
    public:
    void getinput();
    void display();
    void interest();


};
void bank :: getinput()
{
    cout<<"\nenter the name :";
    cin>>name;
    cout<<"\nenter the account no :";
    cin>>acno;
    cout<<"\nenter the amount to deposite : " ;
    cin>>amnt;
    
}
void bank :: display()
{
    cout<<"\nenter the name :"<<name;
    cout<<"\nenter the account no :"<<acno;
    cout<<"\nenter the amount to deposite : "<<amnt;
    
}
void bank :: interest()
{
    cout<<"\nenter the principle : ";
    cin>>p;
    cout<<"\nenter the no of years :";
    cin>>year;
    cout<<"\nenter the rate :";
    cin>>rate;
    si = (p*year*rate)/100;
    cout<<"\n the simple interest is :"<<si;


}
int main(){
    int s;
    bank b;
    
    cout<<"                                                      ----------------------- Welcome to bank of Baroda -----------------------------"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"choose the following functions to perform the required task :  "<<endl;
    cout<<"1. Enter details"<<endl;
    cout<<"2. Display details"<<endl;
    cout<<"3. Interest calculation"<<endl;
    cin>>s;
    switch (s)
    {
    case 1:
        b.getinput();
        break;
    case 2:
        b.display();
        break;
    case 3:
        b.interest();
        break;
    
    default:
        cout<<"enter valid option:";
        break;
    }
    
}