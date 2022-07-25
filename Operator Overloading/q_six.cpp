#include<iostream>
using namespace std;
class num_class
{
private:
    int num;
    
public:
    num_class(int n):num(n){}
    int operator |(num_class n1)
    {
        return num|n1.num;
    }
    int operator &(num_class n1)
    {
        return num&n1.num;
    }
    int operator ^(num_class n1)
    {
        return num^n1.num;
    }
    int operator >>(int a)
    {   
        return (num>>a);
    }
    int operator <<(int a)
    {   
        return (num<<a);
    }
};
int main()
{
    num_class n1(5),n2(9);
    cout<<(n1|n2)<<endl;
    cout<<(n1&n2)<<endl;
    cout<<(n1^n2)<<endl;
    cout<<(n1>>1)<<endl;
    cout<<(n2<<1)<<endl;
}