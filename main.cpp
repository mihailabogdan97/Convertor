#include<iostream>
using namespace std;
void convertor_masa()
{
    float m;
    char c;
    cout<<"---Convertor masa---";
    cout<<endl;
    cout<<"Da-ti masa in kilograme: ";
    cin>>m;
    cout<<"Alege-ti 1 pentru a convertii masa in miligrame;";
    cout<<endl;
    cout<<"Alege-ti 2 pentru a convertii masa in centigrame;";
    cout<<endl;
    cout<<"Alege-ti 3 pentru a convertii masa in decigrame;";
    cout<<endl;
    cout<<"Alege-ti 4 pentru a convertii masa in grame;";
    cout<<endl;
    cout<<"Alege-ti 5 pentru a convertii masa in decagrame;";
    cout<<endl;
    cout<<"Alege-ti 6 pentru a convertii masa in hectograme;";
    cout<<endl;
    cout<<"Alege-ti 7 pentru a convertii masa in tone;";
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
    cout<<"Da-ti timpul in ore: ";
    cin>>t;
    cout<<"Alege-ti 1 pentru a convertii timpul in minute;";
    cout<<endl;
    cout<<"Alege-ti 2 pentru a convertii timpul in secunde;";
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
    cout<<"Da-ti lungimea in metrii: "<<endl;
    cin>>l;
    cout<<"Alege-ti 1 pentru convertirea lungimii in milimetrii;";
    cout<<endl;
    cout<<"Alege-ti 2 pentru convertirea lungimii in centimetrii;";
    cout<<endl;
    cout<<"Alege-ti 3 pentru convertirea lungimii in decimetrii;";
    cout<<endl;
    cout<<"Alege-ti 4 pentru convertirea lungimii in decametrii;";
    cout<<endl;
    cout<<"Alege-ti 5 pentru convertirea lungimii in hectometrii;";
    cout<<endl;
    cout<<"Alege-ti 6 pentru convertirea lungimii in kilometrii;";
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
    cout<<"Alege-ti 1 pentru mph;";
    cout<<endl;
    cout<<"Alege-ti 2 pentru m/s;";
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
    case '2':
    {l=l/10000;
    cout<<"Aria in hectometri patrati este "<<l;}
    case '3':
    {l=l/100;
    cout<<"Aria in kilometri patrati este "<<l;}
    case '4':
    {l=l*100;
    cout<<"Aria in decimetri patrati este "<<l;}
    case '5':
    {l=l*10000;
    cout<<"Aria in centimetri patrati este "<<l;}
    case '6':
    {l=l*1000000;
    cout<<"Aria in milimetri patrati este "<<l;}
    }

}
int main()
{
    char a;
    cout<<"Alege'ti 1 pentru convertor lungime"<<endl;
    cout<<"Alege'ti 2 pentru convertor arie"<<endl;
    cout<<"Alege'ti 3 pentru convertor volum"<<endl;
    cout<<"Alege'ti 4 pentru convertor timp"<<endl;
    cout<<"Alege'ti 5 pentru convertor viteza"<<endl;
    cout<<"Alege'ti 6 pentru convertor temperatura"<<endl;
    cout<<"Alege'ti 7 pentru convertor masa"<<endl;
    cout<<"Alege'ti 8 pentru convertor energie"<<endl;
    cout<<"Alege'ti 9 pentru convertor presiune"<<endl;
    cout<<"Alege'ti 10 pentru convertor densitate"<<endl;
    cout<<"Alege'ti 11 pentru convertor consum combustibil"<<endl;
    cin>>a;
    switch(a)
    {
    case '1':
    {
        convertor_lungime();
    }
    case '2':
    {
        convertor_arie();
    }
    case '3':
    {
        convertor_volum();
    }
    case '4':
    {

        convertor_timp();
    }
    case '5':
    {
        convertor_viteza();
    }
    case '6':
    {
        convertor_temperatura();
    }
    case '7':
    {
        convertor_masa();
    }
    case '8':
    {
        convertor_energie();
    }
    case '9':
    {
        convertor_presiune();
    }
    case '10':
    {
        convertor_densitate();
    }
    case '11':
    {
        convertor_consum();
    }

    }



    return 0;
}
