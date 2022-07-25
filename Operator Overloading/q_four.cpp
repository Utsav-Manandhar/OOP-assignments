#include<iostream>
using namespace std;
class hello_class
{
public:
    
    void operator ()()
    {
        cout<<"Hello There"<<endl;
    }
};
int main()
{
    hello_class h;
    h();
    
}