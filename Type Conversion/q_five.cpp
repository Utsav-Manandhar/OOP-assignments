#include<iostream>
using namespace std;
class gallon
{
    float gallons;
public:
    gallon(float g):gallons(g){}
    void show(){cout<<gallons<<" gallons"<<endl;}
};
class litre
{
    float litres;
public:
    litre(float l):litres(l){}
    operator gallon()
    {
        return gallon(0.264172*litres);
    }
};
int main()
{
    gallon(litre(2)).show();
}