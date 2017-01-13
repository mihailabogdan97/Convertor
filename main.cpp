#include<iostream>
using namespace std;
void convertor_masa()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor masa---"<<endl;
    cout<<"Alegeti 1 pentru convertor din kg in tone"<<endl;
    cout<<"Alegeti 2 pentru convertor din tone in kg"<<endl;
    cout<<"Alegeti 3 pentru convertor din kg in g"<<endl;
    cout<<"Alegeti 4 pentru convertor din g in kg"<<endl;
    cout<<"Alegeti 5 pentru convertor din tone in g"<<endl;
    cout<<"Alegeti 6 pentru convertor din g in tone"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati masa in kg"<<endl;
    cin>>l;
    l=l*0.001;
    cout<<"Masa in tone este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati masa in tone"<<endl;
    cin>>l;
    l=l*1000;
    cout<<"Masa in kg este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati masa in kg"<<endl;
    cin>>l;
    l=l*1000;
    cout<<"Masa in g este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati masa in g"<<endl;
    cin>>l;
    l=l*0.001;
    cout<<"Masa in kg este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati masa in tone"<<endl;
    cin>>l;
    l=l*1000000;
    cout<<"Masa in g este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati masa in g"<<endl;
    cin>>l;
    l=l*0.000001;
    cout<<"Masa in tone este "<<l;}
    break;
    }


}
void convertor_timp()
{
   cin.get();
    float l;
    char a;
    cout<<"---Convertor timp---"<<endl;
    cout<<"Alegeti 1 pentru convertor din ore in minute"<<endl;
    cout<<"Alegeti 2 pentru convertor din minute in ore"<<endl;
    cout<<"Alegeti 3 pentru convertor din ore in secunde"<<endl;
    cout<<"Alegeti 4 pentru convertor din secunde in ore"<<endl;
    cout<<"Alegeti 5 pentru convertor din minute in secunde"<<endl;
    cout<<"Alegeti 6 pentru convertor din secunde in minute"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati timpul in ore"<<endl;
    cin>>l;
    l=l*60;
    cout<<"Timpul in minute este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati timpul in minute"<<endl;
    cin>>l;
    l=l/60;
    cout<<"Timpul in ore este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati timpul in ore"<<endl;
    cin>>l;
    l=l*3600;
    cout<<"Timpul in secunde este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati timpul in secunde"<<endl;
    cin>>l;
    l=l*0.0002777777777777778;
    cout<<"Timpul in ore este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati timpul in minute"<<endl;
    cin>>l;
    l=l*60;
    cout<<"Timpul in secunde este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati timpul in secunde"<<endl;
    cin>>l;
    l=l*0.016666666666666666;
    cout<<"Timpul in minute este "<<fixed<<l;}
    break;
    }

}
void convertor_lungime()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor lungime---"<<endl;
    cout<<"Alegeti 1 pentru convertor din m in km"<<endl;
    cout<<"Alegeti 2 pentru convertor din km in m"<<endl;
    cout<<"Alegeti 3 pentru convertor din mile maritime in km"<<endl;
    cout<<"Alegeti 4 pentru convertor din km in mile maritime"<<endl;
    cout<<"Alegeti 5 pentru convertor din mile maritime in m"<<endl;
    cout<<"Alegeti 6 pentru convertor din m in mile maritime"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati lungimea  in m"<<endl;
    cin>>l;
    l=l*0.001;
    cout<<"Lungimea in km este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati lungimea  in km"<<endl;
    cin>>l;
    l=l*1000;
    cout<<"Lungimea in m este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati lungimea  in mile"<<endl;
    cin>>l;
    l=l*1.852;
    cout<<"Lungimea in km este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati lungimea  in km"<<endl;
    cin>>l;
    l=l*0.539956;
    cout<<"Lungimea in mile este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati lungimea  in mile"<<endl;
    cin>>l;
    l=l*1852;
    cout<<"Lungimea in m este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati lungimea  in m"<<endl;
    cin>>l;
    l=l*0.000539956803;
    cout<<"Lungimea in mile este "<<fixed<<l;}
    break;
    }
}
void convertor_viteza()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor viteza---"<<endl;
    cout<<"Alegeti 1 pentru convertor din km/h in mph"<<endl;
    cout<<"Alegeti 2 pentru convertor din mph in km/h"<<endl;
    cout<<"Alegeti 3 pentru convertor din km/h in m/s"<<endl;
    cout<<"Alegeti 4 pentru convertor din m/s in km/h"<<endl;
    cout<<"Alegeti 5 pentru convertor din mph in m/s"<<endl;
    cout<<"Alegeti 6 pentru convertor din m/s in mph"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati viteza  in km/h"<<endl;
    cin>>l;
    l=l*0.62137;
    cout<<"Viteza in mph este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati viteza  in mph"<<endl;
    cin>>l;
    l=l*1.60934;
    cout<<"Viteza in km/h este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati viteza  in km/h"<<endl;
    cin>>l;
    l=l*0.27777;
    cout<<"Viteza in m/s este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati viteza  in m/s"<<endl;
    cin>>l;
    l=l*3.59999;
    cout<<"Viteza in km/h este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati viteza  in mph"<<endl;
    cin>>l;
    l=l*0.44704;
    cout<<"Viteza in m/s este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati viteza  in m/s"<<endl;
    cin>>l;
    l=l*2.23693;
    cout<<"Viteza in mph este "<<fixed<<l;}
    break;
    }

}
void convertor_arie()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor arie---"<<endl;
    cout<<"Alegeti 1 pentru convertor din metri patrati in cm patrati"<<endl;
    cout<<"Alegeti 2 pentru convertor din cm patrati in metri patrati"<<endl;
    cout<<"Alegeti 3 pentru convertor din metri patrati in feets patrati"<<endl;
    cout<<"Alegeti 4 pentru convertor din feets patrati in metri patrati"<<endl;
    cout<<"Alegeti 5 pentru convertor din cm patrati in feets patrati"<<endl;
    cout<<"Alegeti 6 pentru convertor din feets patrati in cm patrati"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati aria in metri patrati"<<endl;
    cin>>l;
    l=l*10000;
    cout<<"Aria in cm patrati este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati aria  in cm patrati"<<endl;
    cin>>l;
    l=l*0.0001;
    cout<<"Aria in metri patrati este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati aria  in metri patrati"<<endl;
    cin>>l;
    l=l*10.76426;
    cout<<"Aria in feets patrati este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati aria  in feets patrati"<<endl;
    cin>>l;
    l=l*0.0929;
    cout<<"Aria in metri patrati este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati aria  in cm patrati"<<endl;
    cin>>l;
    l=l*0.001076426264;
    cout<<"Aria in feets patrati este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati aria  in feets patrati"<<endl;
    cin>>l;
    l=l*928.99999;
    cout<<"Aria in cm patrati este "<<fixed<<l;}
    break;
    }

}
void convertor_temperatura()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor temperatura---"<<endl;
    cout<<"Alegeti 1 pentru convertor din Celsius in Fahrenheit"<<endl;
    cout<<"Alegeti 2 pentru convertor din Fahrenheit in Celsius"<<endl;
    cout<<"Alegeti 3 pentru convertor din Celsius in Kelvin"<<endl;
    cout<<"Alegeti 4 pentru convertor din Kelvin in Celsius"<<endl;
    cout<<"Alegeti 5 pentru convertor din Fahrenheit in Kelvin"<<endl;
    cout<<"Alegeti 6 pentru convertor din Kelvin in Fahrenheit"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati temperatura  in Celsius"<<endl;
    cin>>l;
    l=(l*1.8)+32;
    cout<<"Temperatura in Fahrenheit este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati temperatura  in Fahrenheit"<<endl;
    cin>>l;
    l=(l-32)/1.8;
    cout<<"Temperatura in Celsius este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati temperatura  in Celsius"<<endl;
    cin>>l;
    l=l+273.15;
    cout<<"Temperatura in Kelvin este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati temperatura  in Kelvin"<<endl;
    cin>>l;
    l=l-273.15;
    cout<<"Temperatura in Celsius este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati temperatura  in Fahrenheit"<<endl;
    cin>>l;
    l=((l-32)/1.8)+273.15;
    cout<<"Temperatura in Kelvin este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati temperatura  in Kelvin"<<endl;
    cin>>l;
    l=(l-273.15);
    l=(l*1.8)+32;
    cout<<"Temperatura in Fahrenheit este "<<fixed<<l;}
    break;
    }

}
void convertor_energie()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor energie---"<<endl;
    cout<<"Alegeti 1 pentru convertor din J in kW/h"<<endl;
    cout<<"Alegeti 2 pentru convertor din kW/h in J"<<endl;
    cout<<"Alegeti 3 pentru convertor din J in cal"<<endl;
    cout<<"Alegeti 4 pentru convertor din cal in J"<<endl;
    cout<<"Alegeti 5 pentru convertor din kw/h in cal"<<endl;
    cout<<"Alegeti 6 pentru convertor din cal in kw/h"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati energia  in J"<<endl;
    cin>>l;
    l=l*2.77777;
    cout<<"Energia in kW/h este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati energia  in kW/h"<<endl;
    cin>>l;
    l=l*3600000;
    cout<<"Energia in J este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati energia  in J"<<endl;
    cin>>l;
    l=l*0.23884;
    cout<<"Energia in cal este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati energia  in cal"<<endl;
    cin>>l;
    l=l*4.1868;
    cout<<"Energia in J este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati energia  in kW/h"<<endl;
    cin>>l;
    l=l*859845.22785;
    cout<<"Energia in cal este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati energia  in cal"<<endl;
    cin>>l;
    l=l*0.000001163;
    cout<<"Energia in kW/h este "<<fixed<<l;}
    break;
    }

}
void convertor_presiune()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor presiune---"<<endl;
    cout<<"Alegeti 1 pentru convertor din Pa in bar"<<endl;
    cout<<"Alegeti 2 pentru convertor din bar in Pa"<<endl;
    cout<<"Alegeti 3 pentru convertor din bar in psi"<<endl;
    cout<<"Alegeti 4 pentru convertor din psi in bar"<<endl;
    cout<<"Alegeti 5 pentru convertor din Pa in psi"<<endl;
    cout<<"Alegeti 6 pentru convertor din psi in Pa"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati presiunea  in Pa"<<endl;
    cin>>l;
    l=l*0.000010204081632;
    cout<<"Presiunea in bar este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati presiunea  in bar"<<endl;
    cin>>l;
    l=l*98000;
    cout<<"Presiunea in Pa este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati presiunea  in bar"<<endl;
    cin>>l;
    l=l*14.213698;
    cout<<"Presiunea in psi este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati presiunea  in psi"<<endl;
    cin>>l;
    l=l*0.0703546;
    cout<<"Presiunea in bar este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati presiunea  in Pa"<<endl;
    cin>>l;
    l=l*0.000145037737;
    cout<<"Presiunea in psi este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati presiunea  in psi"<<endl;
    cin>>l;
    l=l*6894.757293;
    cout<<"Presiunea in Pa este "<<fixed<<l;}
    break;
    }


}
void convertor_volum()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor volum---"<<endl;
    cout<<"Alegeti 1 pentru convertor din metri cubi in yarzi"<<endl;
    cout<<"Alegeti 2 pentru convertor din yarzi in metri cubi"<<endl;
    cout<<"Alegeti 3 pentru convertor din metri cubi in feets"<<endl;
    cout<<"Alegeti 4 pentru convertor din feets in metri cubi"<<endl;
    cout<<"Alegeti 5 pentru convertor din yarzi in feets"<<endl;
    cout<<"Alegeti 6 pentru convertor din feets in yarzi"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati volumul  in metri cubi"<<endl;
    cin>>l;
    l=l*1.30794;
    cout<<"Volumul in yarzi este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati volumul  in yarzi"<<endl;
    cin>>l;
    l=l*0.76456;
    cout<<"Volumul in metri cubi este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati volumul  in metri cubi"<<endl;
    cin>>l;
    l=l*35.31073;
    cout<<"Volumul in feets este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati volumul  in feets"<<endl;
    cin>>l;
    l=l*0.02832;
    cout<<"Volumul in metri cubi este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati volumul  in yarzi"<<endl;
    cin>>l;
    l=l*26.99717;
    cout<<"Volumul in feets este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati volumul  in feets"<<endl;
    cin>>l;
    l=l*0.03704;
    cout<<"Volumul in yarzi este "<<fixed<<l;}
    break;
    }

}
void convertor_densitate()
{
    cin.get();
    float l;
    char a;
    cout<<"---Convertor densitate---"<<endl;
    cout<<"Alegeti 1 pentru convertor din kg/m cub in g/m cub"<<endl;
    cout<<"Alegeti 2 pentru convertor din g/m cub in kg/m cub"<<endl;
    cout<<"Alegeti 3 pentru convertor din kg/m cub in kg/cm cub"<<endl;
    cout<<"Alegeti 4 pentru convertor din kg/cm cub in kg/m cub"<<endl;
    cout<<"Alegeti 5 pentru convertor din kg/m cub in g/cm cub"<<endl;
    cout<<"Alegeti 6 pentru convertor din g/cm cub in kg/m cub"<<endl;
    cin>>a;
    switch(a)
     {
    case '1':
    {cout<<"Dati densitatea  in kg/m cub"<<endl;
    cin>>l;
    l=l*1000;
    cout<<"Densitatea in g/m cub este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati densitatea  in g/m cub"<<endl;
    cin>>l;
    l=l*0.001;
    cout<<"Densitatea in kg/m cub este "<<fixed<<l;}
    break;
    case '3':
    {cout<<"Dati densitatea  in kg/m cub"<<endl;
    cin>>l;
    l=l*0.000001;
    cout<<"Densitatea in kg/cm cub este "<<fixed<<l;}
    break;
    case '4':
    {cout<<"Dati densitatea  in kg/cm cub"<<endl;
    cin>>l;
    l=l*1000000;
    cout<<"Densitatea in kg/m cub este "<<fixed<<l;}
    break;
    case '5':
    {cout<<"Dati densitatea  in kg/m cub"<<endl;
    cin>>l;
    l=l*0.001;
    cout<<"Densitatea in g/cm cub este "<<fixed<<l;}
    break;
    case '6':
    {cout<<"Dati densitatea  in g/cm cub"<<endl;
    cin>>l;
    l=l*1000;
    cout<<"Densitatea in kg/m cub este "<<fixed<<l;}
    break;
    }
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
    cout<<"Consumul dumneavoastra in galoane la 100 mile este "<<fixed<<l;}
    break;
    case '2':
    {cout<<"Dati consumul dumneavoastra in galoane la 100 mile"<<endl;
    cin>>l;
    l=l*2.352;
    cout<<"Consumul dumneavoastra in l/100km este "<<fixed<<l;}
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
cout<<endl<<endl<<endl;
cout<<"+++Convertor facut de Bogdan Mihaila+++"<<endl;
cout<<"   Anul 1 ,grupa A2";
cout<<endl<<endl;
cout<<"   Universitatea ALEXANDRU IOAN CUZA ,IASI";

    return 0;
}
