#include<iostream>
using namespace std;
class twelve
{
    int hour, minute, second;
public:
    twelve(int h, int m ,int s):hour(h),minute(m),second(s){}
    void show(){cout<<hour<<" : "<<minute<<" : "<<second<<endl;}
};
class twentyFour
{
    int hour, minute, second;
public:
    twentyFour(int h, int m ,int s):hour(h),minute(m),second(s){}
    operator twelve()
    {
        int k=hour--;
        return twelve((hour%12)+1,minute,second);
    }    
};
int main()
{
    twelve(twentyFour(16,30,40)).show();
}
