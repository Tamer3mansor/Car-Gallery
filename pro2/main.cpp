#include<iostream>
using namespace std;
class car_insert
{
protected:
    string type;
    int id;
    double price;
public:
    static int counter1;
    static int counter2;
    static double scash;
    car_insert()//constructor
    {
        type =" ";
        id = 0;
        price = 0.0;
        counter1++;

    }
    int get_id()
    {
        return id;
    }
    void set_car(string type, int id, double price)
    {
        this->type = type;
        this->id = id;
        this->price = price;
        scash -= price;

    }

};
class sold_car :car_insert
{
public:
    sold_car()//constructor
    {
        counter2++;
        counter1--;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_price(double price)
    {
        this->price = price;
        scash += price;
    }
};

class show_data: car_insert
{
protected:
    int budget; int cars;
    public:
        show_data()
 {

 cout<<"\t\tYou Will Show your Data for this day\n";
 counter1--;
 }
void set_data()
{
            cout<<"Enter number of car and your budget at start of day\n";
            int s,m;
            cout<<"Cars number:    ";cin>>s; cout<<" "; cout<<"budgate:  ";cin>>m; cout<<"\n";
            budget=m; cars=s;
            cout<<"\t\t\tThanks Now! That is yor Information \n";
}
 void get_car()
{

     cout<<"\t\tnumber of car That Entered Gallary today  "<<counter1<<" \n\n\t\tThe number of cars that left the Gallary today  "<<counter2<<"\n";
     cout<<"\n\t\tNumber of car at Gallary Now "<<cars+counter1-counter2<<"\n";

}
 void get_cash()
 {
          scash=scash+budget;

     if(scash==budget)
        cout<<"\n\t\tYour budget still like started of day\n";
     else{
     if(scash>0)
     {
         cout<<"\n\t\tYour earn is "<<scash<<"\n\n";
     }
     else if(scash<0)
     {
         cout<<"\n\t\tFor sorry Today you don't earn ,You lost \n"<<-1*scash<<endl;
     }
 }}
};

int car_insert::counter1 = 0;
int car_insert::counter2=0;
double car_insert::scash = 0;

int n=0;
void fun_insert()
{
    cout << "\n\tenter number of car : ";
        int n; cin >> n;
    car_insert arr[n];
        for (int i = 0; i < n; i++)
        {
            string type;
            int d;
            double s;
            cout<<"Enter the car  "<< i+1<<"  type   : ";
            cin >> type;
            cout<<"Enter the car  "<< i+1<<"  id     : ";
            cin>> d;
            cout<<"Enter the car  "<< i+1<<"  price  : ";
            cin >> s;
            arr[i].set_car(type, d, s);
        }
}
void fun_sold()
{
       cout<<"Enter The number of cars sold\n";
            int t; cin>>t;
            sold_car arry[t];
            for(int i=0;i<t;i++)
            {
                cout<<"Enter the car  "<< i+1<<"  id : ";
                double id; cin>>id;
                cout<<"Enter the car  "<< i+1<<"  price  : ";
                int price; cin>>price;
                arry[i].set_id(id);
                arry[i].set_price(price);
            }
}
void fun_show()
{
               show_data s1;
                s1.set_data();
                s1.get_car();
                s1.get_cash();

}
int main()
{
loop:
    int c;

    cout << "\n\t\t1-insert car \n\t\t2-sold car\n\t\t3-show today data\n";
    cout << "\nEnter the operation : ";
    cin >> c;
    switch (c)
    {
    case 1:
    {
        fun_insert();
        cout<<"To Main Menu Prees 1 else press eny Key to Exit programm\n";
        int y; cin>>y;
        if(y==1) goto loop;
        break;

    }
        case 2:
        {
            fun_sold();
          cout<<"To Main Menu Prees 1 else press eny Key to Exit programm\n";
        int y; cin>>y;
        if(y==1) goto loop;
        break;

        }
        case 3:
            {

                     fun_show();
                     cout<<"To Main Menu Prees 1 else press eny Key to Exit programm\n";
        int y; cin>>y;
        if(y==1) goto loop;
        break;



            }


    }


        }
