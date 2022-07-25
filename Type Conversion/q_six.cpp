#include<iostream>
using namespace std;
class metric
{
    float kg, gm;
public:
    metric(float k, float g):kg(k),gm(g){}
    void show(){cout<<kg<<" kg and "<<gm<<" gm"<<endl;}
};
class imperial
{
    float lbs, oz;
public:
    imperial(float l , float o):lbs(l),oz(o){}
    operator metric()
    {
        float pounds =lbs+16*oz;
        int kilograms = pounds*0.453592;
        float grams = (pounds*0.453592-kilograms)*1000;
        return metric(kilograms,grams);
    }
};
int main()
{
    metric(imperial(200,14)).show();
}
