
#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class car_detail{
    string model_name,transmission,air_bag,fuel_type; 
    float showroom_price,mileage,tank_capa;
    int seating,flag;
   public:
         void getdata() //this function is used to take input from user.
         {               
            cout<<"Enter model name: ";
            fflush(stdin);
            cin>>model_name;
            cout<<"Enter fuel type : ";
            fflush(stdin);
            getline(cin,fuel_type);
            cout<<"press 1 for petrol , 2 for diesel , 3 for cng , 4 for electric: ";
            cin>>flag;
            cout<<"Enter showroom price(in lakhs): ";
            cin>>showroom_price;
            cout<<"enter mileage(km/L): ";
            cin>>mileage;
            cout<<"enter transmission(auto or manual): ";
            fflush(stdin);
            cin>>transmission;
            cout<<"Enter seating of car: ";
            cin>>seating;
            cout<<"Enter tank capacity(in liters): ";
            cin>>tank_capa;
            cout<<"Air bag (yes or no): ";
            fflush(stdin);
            getline(cin,air_bag);
         } 
         void display_modelname(){              //this function will display according model name
            cout<<model_name<<"\t";
         }
         void display_details()
         {
                cout<<setw(15)<<left<<"Model name";
                cout<<setw(10)<<left<<"Fuel";
                cout<<setw(12)<<left<<"Price";
                cout<<setw(10)<<left<<"Mileage";
                cout<<setw(15)<<left<<"Transmission";
                cout<<setw(15)<<left<<"Tank capacity  ";
                cout<<setw(10)<<left<<"Seating";
                cout<<setw(10)<<left<<"Airbags"<<endl;
                cout<<setw(32)<<right<<"(lakhs)";
                cout<<setw(12)<<right<<"(km/l)";
                cout<<setw(27)<<right<<"(liters)"<<endl;
            cout<<setw(15)<<left<<model_name;
            cout<<setw(10)<<left<<fuel_type;
            cout<<setw(12)<<left<<showroom_price;
            cout<<setw(10)<<left<<mileage;
            cout<<setw(15)<<left<<transmission;
            cout<<setw(15)<<left<<tank_capa;
            cout<<setw(10)<<left<<seating;
            cout<<setw(10)<<left<<air_bag<<endl;
            
        }
        void display_acc_fuel(int fuel_choice)
        {
            if(fuel_choice == flag){
                cout<<setw(15)<<left<<model_name;
                cout<<setw(10)<<left<<fuel_type;
                cout<<setw(12)<<left<<showroom_price;
                cout<<setw(10)<<left<<mileage;
                cout<<setw(15)<<left<<transmission;
                cout<<setw(15)<<left<<tank_capa;
                cout<<setw(10)<<left<<seating;
                cout<<setw(10)<<left<<air_bag<<endl;
            }
        }
        void display_according_price(int budget)
        {
            if(showroom_price<=budget)
            {
                cout<<setw(15)<<left<<model_name;
                cout<<setw(10)<<left<<fuel_type;
                cout<<setw(12)<<left<<showroom_price;
                cout<<setw(10)<<left<<mileage;
                cout<<setw(15)<<left<<transmission;
                cout<<setw(15)<<left<<tank_capa;
                cout<<setw(10)<<left<<seating;
                cout<<setw(10)<<left<<air_bag<<endl;
            }
        }
        void print_table_outline()
        {
                cout<<setw(15)<<left<<"Model_name";
                cout<<setw(10)<<left<<"Fuel";
                cout<<setw(12)<<left<<"Price";
                cout<<setw(10)<<left<<"Mileage";
                cout<<setw(15)<<left<<"Transmission";
                cout<<setw(15)<<left<<"Tank capacity  ";
                cout<<setw(10)<<left<<"Seating";
                cout<<setw(10)<<left<<"Airbags"<<endl;
                cout<<setw(32)<<right<<"(lakhs)";
                cout<<setw(12)<<right<<"(km/l)";
                cout<<setw(27)<<right<<"(liters)"<<endl;
        }

};
int main(){
    car_detail car[999];
    int n;
    cout<<"Enter number of cars you wanna do: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nDETAILS OF  CAR "<<i+1<<" \n\n"<<endl;
        car[i].getdata();
    }
    int options;
    cout<<"\n\nWELCOME TO TATA MOTORS!\n"<<endl;
    cout<<"GET THE CAR DETAILS AS PER YOUR REFERENCE: \n"<<endl<<"\n";
    cout<<"(1) Model name \t (2) Fuel type \t (3) Price Range\n";
    cout<<"ENTER YOUR OPTION : ";
    cin>>options;
    cout<<"\n------------------------------------------------\n\n";
    switch(options)
    {
        case 1:
               
            for(int i=0;i<n;i++)
            {
                cout<<(i+1)<<"."<<" ";
                car[i].display_modelname();
            }
            int car_choose;
        cout<<"\n\nCHOOSE YOUR CAR TO GET DETAILS: ";
        cin>>car_choose;
        car[car_choose-1].display_details();
        break;
    case 2:
        cout<<"\n\nTATA MOTORS ARE ALSO AVAILABLE WITH FUEL OPTIONS: \n"<<endl;
        cout<<"(1) Petrol   (2) Diesel  (3) CNG  (4) Electric\n"<<endl;
        int choice;
        cout<<"Enter your choice : ";
        cin>>choice;
        car[0].print_table_outline();
        for(int i=0;i<n;i++)
        {
            car[i].display_acc_fuel(choice);
        }
        break;
    case 3:
        float budget;
        cout<<"Enter your Maximum affordable range in lakhs: ";
        cin>>budget;
        car[0].print_table_outline();
        for(int i=0;i<n;i++)
        {
            car[i].display_according_price(budget);
        }
}
    
    return 0;
}