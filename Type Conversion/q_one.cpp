#include<iostream>
using namespace std;
class pound
{
private:
    float lb;
public:
    pound(float p):lb(p){}
    void show()
    {
        cout<<lb<<" pounds"<<endl;
    }
   
};
class kilogram
{
private:
    float kg;
public:
  kilogram(float k):kg(k) {}
  float get_kg(){ return kg;}
  operator pound()
  {
      float p =kg*2.20462;
      return pound(p);
  }
   
};
int main()
{
    (pound(kilogram(10))).show();
}