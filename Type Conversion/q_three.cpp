#include<iostream>
using namespace std;
class feet
{
    float ft;
public:
    feet(float f):ft(f){}
    void show(){cout<<ft<<" feet "<<endl;}
};
class meters
{
    float m;
public:
    meters(float m1):m(m1){}
    operator feet()
    {
        return feet(m*2.54*1.2);
    }
};
int main()
{
    (feet(meters(2))).show();
}