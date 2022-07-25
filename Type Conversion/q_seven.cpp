#include<iostream>
using namespace std;
class imperial
{
    float ft, in;
public:
    imperial(float f , float i):ft(f),in(i){}
    void show(){cout<<ft<<" ft "<<in<<" in"<<endl;}
};
class metric
{
    float m, cm;
public:
    metric(float a, float c):m(a),cm(c){}
    operator imperial()
    {
        float centis =m*100+cm;
        int feet = centis/(2.54*12);
        float inches = centis/(2.54)-feet*12;
        return imperial(feet,inches);
    }
};
int main()
{
    imperial(metric(1,80)).show();
}
