#include<iostream>
#include<cmath>
using namespace std;
class polar
{
private:
    float r;
    float theta;
public:
    polar(float a, float b):r(a),theta(b){}
    void show(){cout<<r<<" , "<<theta<<endl;}
};
class cartesian
{
private:
    float x,y;
public:
    cartesian(float a, float b):x(a),y(b){}
    operator polar()
    {
        float r1=pow(x*x+y*y,0.5);
        float t1=atan(y/x);
        return polar(r1,t1);
    }
};
int main()
{
    polar(cartesian(3,4)).show();
}