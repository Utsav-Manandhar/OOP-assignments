#include<iostream>
using namespace std;
class logic_class
{
private:
    bool flag;
    
public:
    logic_class(bool a):flag(a){}
    
    bool operator &&(logic_class l)
    {
        return flag && l.flag;
    }
    bool operator ||(logic_class l)
    {
        return flag || l.flag;
    }
    bool operator !()
    {
        return !flag ;
    }

};
int main()
{
    logic_class l1(0), l2(1);
    cout<<(l1&&l2)<<endl;
    cout<<(l1||l2)<<endl;
    cout<<(!l1)<<endl;
    return 0;
}