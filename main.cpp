#include<iostream>
using namespace std;
void convertor_masa()
{
    float m;
    char c;
    cout<<"---Convertor masa---";
    cout<<endl;
    cout<<"Dati masa in kilograme: ";
    cin>>m;
    cout<<"Alegeti 1 pentru a convertii masa in miligrame;";
    cout<<endl;
    cout<<"Alegeti 2 pentru a convertii masa in centigrame;";
    cout<<endl;
    cout<<"Alegeti 3 pentru a convertii masa in decigrame;";
    cout<<endl;
    cout<<"Alegeti 4 pentru a convertii masa in grame;";
    cout<<endl;
    cout<<"Alegeti 5 pentru a convertii masa in decagrame;";
    cout<<endl;
    cout<<"Alegeti 6 pentru a convertii masa in hectograme;";
    cout<<endl;
    cout<<"Alegeti 7 pentru a convertii masa in tone;";
    cout<<endl;
    cin>>c;
    switch(c)
    {
    case '1':
    {
        m*=1000000;
        cout<<"Masa in miligrame este: "<<m;
    }
    break;
    case '2':
    {
        m*=100000;
        cout<<"Masa in centigrame este: "<<m;
    }
    break;
    case '3':
    {
        m*=10000;
        cout<<"Masa in decigrame este: "<<m;
    }
    break;
    case '4':
    {
        m*=1000;
        cout<<"Masa in grame este: "<<m;
    }
    break;
    case '5':
    {
        m/=10;
        cout<<"Masa in decagrame este: "<<m;
    }
    break;
    case '6':
    {
        m*=100;
        cout<<"Masa in hectograme este: "<<m;
    }
    break;
    case '7':
    {
        m/=1000;
        cout<<"Masa in tone este: "<<m;
    }
    break;
    }

}
void convertor_timp()
{
    cin.get();
    cout<<endl;
    cout<<"---Convertor timp---"<<endl;
    long t;
    char x;
    cout<<"Dati timpul in ore: ";
    cin>>t;
    cout<<"Alegeti 1 pentru a convertii timpul in minute;";
    cout<<endl;
    cout<<"Alegeti 2 pentru a convertii timpul in secunde;";
    cout<<endl;
    cin>>x;
    switch(x)
    {
    case '1':
    {
        t=t*60;
        cout<<"Timpul convertit in minute reprezinta: "<<t<<"minute";
    }
    break;
    case '2':
    {
        t=t*3600;
        cout<<"Timpul convertit in secunde reprezinta: "<<t<<" secunde";
    }
    break;
    }

}
void convertor_lungime()
{
    cin.get();
    float l;
    char k;
    cout<<"---Convertor lungime---"<<endl;
    cout<<"Dati lungimea in metrii: "<<endl;
    cin>>l;
    cout<<"Alegeti 1 pentru convertirea lungimii in milimetrii;";
    cout<<endl;
    cout<<"Alegeti 2 pentru convertirea lungimii in centimetrii;";
    cout<<endl;
    cout<<"Alegeti 3 pentru convertirea lungimii in decimetrii;";
    cout<<endl;
    cout<<"Alegeti 4 pentru convertirea lungimii in decametrii;";
    cout<<endl;
    cout<<"Alegeti 5 pentru convertirea lungimii in hectometrii;";
    cout<<endl;
    cout<<"Alegeti 6 pentru convertirea lungimii in kilometrii;";
    cout<<endl;
    cin>>k;
    switch(k)
    {
    case '1':
    {
        l*=1000;
        cout<<"Lungimea reprezinta "<<l<<" milimetrii;";
    }
    break;
    case '2':
    {
        l*=100;
        cout<<"Lungimea reprezinta "<<l<<" centimetrii;";
    }
    break;
    case '3':
    {
        l*=10;
        cout<<"Lungimea reprezinta "<<l<<" decimetrii;";
    }
    break;
    case '4':
    {
        l/=10;
        cout<<"Lungimea reprezinta "<<l<<" decametrii;";
    }
    break;
    case '5':
    {
        l/=100;
        cout<<"Lungimea reprezinta "<<l<<" hectometrii;";
    }
    break;
    case '6':
    {
        l/=1000;
        cout<<"Lungimea reprezinta "<<l<<" kilometrii;";
    }
    break;
    }
}
void convertor_viteza()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor viteza---"<<endl;
    cout<<"Dati viteza in km/h;"<<endl;
    cin>>l;
    cout<<"Alegeti 1 pentru mph;";
    cout<<endl;
    cout<<"Alegeti 2 pentru m/s;";
    cout<<endl;
    cin>>a;
    switch(a)
    {
    case '1':
    {
        l=l*0.621371192;
        cout<<"Viteza reprezentata in mile este "<<l;
    }
    break;
    case '2':
    {
        l=l*0.2777777777778;
        cout<<"Viteza reprezentata in m/s este "<<l;
    }
    break;
    }

}
void convertor_arie()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor arie---"<<endl;
    cout<<"Dati aria in metri patrati"<<endl;
    cin>>l;
    cout<<"Alegeti 1 pentru decametru patrat"<<endl;
    cout<<"Alegeti 2 pentru hectometru patrat"<<endl;
    cout<<"Alegeti 3 pentru kilometru patrat"<<endl;
    cout<<"Alegeti 4 pentru decimetru patrat"<<endl;
    cout<<"Alegeti 5 pentru centimetru patrat"<<endl;
    cout<<"Alegeti 6 pentru milimetru patrat"<<endl;
    cin>>a;
    switch(a)
    {
    case '1':
    {l=l/1000000;
    cout<<"Aria in decametri patrati este "<<l;}
    break;
    case '2':
    {l=l/10000;
    cout<<"Aria in hectometri patrati este "<<l;}
       break;
    case '3':
    {l=l/100;
    cout<<"Aria in kilometri patrati este "<<l;}
       break;
    case '4':
    {l=l*100;
    cout<<"Aria in decimetri patrati este "<<l;}
       break;
    case '5':
    {l=l*10000;
    cout<<"Aria in centimetri patrati este "<<l;}
       break;
    case '6':
    {l=l*1000000;
    cout<<"Aria in milimetri patrati este "<<l;}
       break;
    }

}
void convertor_temperatura()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor temperatura---"<<endl;
    cout<<"Dati temperatura in grade Celsius"<<endl;
    cin>>l;
    cout<<"Alegeti 1 pentru grade Fahrenheit"<<endl;
    cout<<"Alegeti 2 pentru grade Kelvin"<<endl;
    cin>>a;
    switch(a)
    {
    case '1':
    {l=l*1.8+32;
    cout<<"Temperatura in grade Fahrenheit este "<<l;}
       break;
    case '2':
    {l=l+273,15;
    cout<<"Temperatura in grade Kelvin este "<<l;}
       break;
    }

}
void convertor_energie()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor energie---"<<endl;
    cout<<"Dati temperatura in grade Celsius"<<endl;
    cin>>l;
}
void convertor_presiune()
{

}
void convertor_volum()
{

}
void convertor_densitate()
{

}
void convertor_consum()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor consum combustibil---"<<endl;
    cout<<"Alegeti 1 pentru convertor din l/100km in galoane la 100 mile"<<endl;
    cout<<"Alegeti 2 pentru convertor din galoane la 100 mile in l/100km"<<endl;
    cin>>a;
    switch(a)
    {
    case '1':
    {cout<<"Dati consumul dumneavoastra in l/100km"<<endl;
    cin>>l;
    l=l*0.4251;
    cout<<"Consumul dumneavoastra in galoane la 100 mile este "<<l;}
    break;
    case '2':
    {cout<<"Dati consumul dumneavoastra in galoane la 100 mile"<<endl;
    cin>>l;
    l=l*2.352;
    cout<<"Consumul dumneavoastra in l/100km este "<<l;}
    break;
    }

}
int main()
{

    int a;
    cout<<"Alegeti 1 pentru convertor lungime"<<endl;
    cout<<"Alegeti 2 pentru convertor arie"<<endl;
    cout<<"Alegeti 3 pentru convertor volum"<<endl;
    cout<<"Alegeti 4 pentru convertor timp"<<endl;
    cout<<"Alegeti 5 pentru convertor viteza"<<endl;
    cout<<"Alegeti 6 pentru convertor temperatura"<<endl;
    cout<<"Alegeti 7 pentru convertor masa"<<endl;
    cout<<"Alegeti 8 pentru convertor energie"<<endl;
    cout<<"Alegeti 9 pentru convertor presiune"<<endl;
    cout<<"Alegeti 10 pentru convertor densitate"<<endl;
    cout<<"Alegeti 11 pentru convertor consum combustibil"<<endl;
    cin>>a;
    switch(a)
    {
    case 1:
    {
        convertor_lungime();
    }
       break;
    case 2:
    {
        convertor_arie();
    }
       break;
    case 3:
    {
        convertor_volum();
    }
       break;
    case 4:
    {

        convertor_timp();
    }
       break;
    case 5:
    {
        convertor_viteza();
    }
       break;
    case 6:
    {
        convertor_temperatura();
    }
       break;
    case 7:
    {
        convertor_masa();
    }
       break;
    case 8:
    {
        convertor_energie();
    }
       break;
    case 9:
    {
        convertor_presiune();
    }
       break;
    case 10:
    {
        convertor_densitate();
    }
       break;
    case 11:
    {
        convertor_consum();
    }
       break;

    }



    return 0;
}
