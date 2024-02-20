#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
struct employee
{
 int id;
 string name;
 string qu;
 float ex;
 string cont;
void getdata()
{
    cout<<"\n-----------------------------------------------------\n";
    cout<<"Employee Name : ";
    fflush(stdin);
    cin>>name;
    cout<<"\nQualification : ";
    fflush(stdin);
    cin>>qu;
    cout<<"\nExperience    : ";
    fflush(stdin);
    cin>>ex;
    cout<<"\nContact num.  : ";
    fflush(stdin);
    cin>>cont;
    /*cout<<"Employee Name : "<<name;
    cout<<"\nQualification : "<<qu;
    cout<<"\nExperience    : "<<ex;
    cout<<"\nContact num.  : "<<cont;*/
}
};
int main()
{
    int i,n,flag=0;
    char choice;
    struct employee E[1000];
    i=0;
    cout<<"Enter a number of employee you want detail of them : ";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cout<<"Enter an employee id : ";
        cin>>E[i].id;
        if(E[i].id>999 && E[i].id<=9999)
        {
            E[i].getdata();
        }
        else
        {
            cout<<"\n*****************************************************\n";
            cout<<"ERROR: Entered employee id does not exists\n";
        }
        cout<<"\n-----------------------------------------------------\n";    
    }
    do
    {
        int uid;
        cout<<"Enter an employee id to show: ";
        cin>>uid;
        for(i=0;i<n;i++)
        {
        if(E[i].id==uid)
        {
            cout<<"Employee Name : "<<E[i].name;
            cout<<"\nQualification : "<<E[i].qu;
            cout<<"\nExperience    : "<<E[i].ex;
            cout<<"\nContact num.  : "<<E[i].cont;
            flag=1;
            break;
        }
        if(flag==0)
        {
            cout<<"\n*****************************************************\n";
            cout<<"ERROR: Entered employee id does not exist\n";
            cout<<"\n-----------------------------------------------------\n";
        }
        }
        cout<<"\nPress Y to get another employee detial, press N to exit: ";
        fflush(stdin);
        cin>>choice;
        flag=0;
    } while (choice=='Y' || choice=='y');
       
}