#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string student_id, student_name;
    int sem,i,j,grade_p[3],grade_t[3];
    string sub1,sub2,sub3;
    float sgpa=0;
    string a[3],b[3];
    int theory[3];
    int practical[3];
//all inputs
    cout<<left<<setw(21)<<"enter student ID "<<":";
    fflush(stdin);
    cin>>student_id;
    
    cout<<left<<setw(21)<<"enter student name "<<":"; 
    fflush(stdin);
    cin>>student_name;
   
    cout<<left<<setw(21)<<"enter sem "<<":";
    cin>>sem;
    fflush(stdin);
    cout<<"Enter subject 1 name : ";
    cin>>sub1;
    fflush(stdin);
    cout<<"Enter subject 2 name : ";
    cin>>sub2;
    fflush(stdin);
    cout<<"Enter subject 3 name : ";
    cin>>sub3;
    fflush(stdin);

    for ( i = 0; i < 3; i++)//input for practical marks
    {
        cout<<"enter practical marks "<<i+1<<": ";
        cin>>practical[i];
        fflush(stdin);
    }

    for ( j = 0; j < 3; j++)//input for marks of theory 
    {
        cout<<"enter marks of theory  "<<j+1<<": ";
        cin>>theory[j];
        fflush(stdin);
    }
        
    
    for ( j = 0; j < 3; j++)//b variable for theory, garde_t for theory
    {
        
            if (theory[j]>=80)
            {
                grade_t[j]=10;
                b[j]="AA";
            }
            else if (theory[j]>=73 && theory[j]<80)
            {
                grade_t[j]=9;
                b[j]="AB";
            }
            else if (theory[j]>=66 && theory[j]<73)
            {
                grade_t[j]=8;
                b[j]="BB";
            }
            else if (theory[j]>=60 && theory[j]<66)
            {
                grade_t[j]=7;
                b[j]="BC";
            }
            else if (theory[j]>=55 && theory[j]<60)
            {
                grade_t[j]=6;
                b[j]="CC";
            }
            else if (theory[j]>=50 && theory[j]<55)
            {
                grade_t[j]=5;
                b[j]="CD";
            }
             else if (theory[j]>=45 && theory[j]<50)
            {
                grade_t[j]=4;
                b[j]="DD";
            }
            else
            {
                grade_t[j]=0;
                b[j]="FF";
            }
        }
   
        for ( i = 0; i < 3; i++)//a variable for practical, garde_p for practical
        {
            if (practical[i]>=80)
            {
                grade_p[i]=10;
                a[i]="AA";
            }
            else if (practical[i]>=73 && practical[i]<80)
            {
                grade_p[i]=9;
                a[i]="AB";
            }
            else if (practical[i]>=66 && practical[i]<73)
            {
                grade_p[i]=8;
                a[i]="BB";
            }
            else if (practical[i]>=60 && practical[i]<66)
            {
                 grade_p[i]=7;
                a[i]="BC";
            }
            else if (practical[i]>=55 && practical[i]<60)
            {
                 grade_p[i]=6;
                a[i]="CC";
            }
            else if (practical[i]>=50 && practical[i]<55)
            {
                 grade_p[i]=5;
                a[i]="CD";
            }
             else if (practical[i]>=45 && practical[i]<50)
            {
                 grade_p[i]=4;
                a[i]="DD";
            }
            else
            {
                 grade_p[i]=0;
                a[i]="FF";
            }
        }
    //sgpa=credit*grade/sum of credits
    for ( i = 0; i < 3; i++)
    {
        sgpa +=(float)4*grade_p[i]+(float)4*grade_t[i];
    }
    sgpa=sgpa/24;//dividing sgpa by sum of cerdits

    cout<<"--------------Details--------------"<<endl;
    cout<<"Student ID"<<setw(11)<<":   "<<student_id<<endl;
    cout<<"Student name"<<setw(9)<<":   "<<student_name<<endl;
    cout<<"Semester"<<setw(13)<<":   "<<sem<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<left<<setw(10)<<"subject"<<setw(35)<<right<<"Thoery" <<setw(15) <<"Practcal"<<endl;
    cout<<left<<setw(30)<<sub1<<right<<setw(15)<<b[0]<<right<<setw(15)<<a[0]<<endl;
    cout<<left<<setw(30)<<sub2<<right<<setw(15)<<b[1]<<right<<setw(15)<<a[1]<<endl;
    cout<<left<<setw(30)<<sub3<<right<<setw(15)<<b[2]<<right<<setw(15)<<a[2]<<endl;
    cout<<"SGPA"<<setw(15)<<": "<<setprecision(2)<<sgpa;
}