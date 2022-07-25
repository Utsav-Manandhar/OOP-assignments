#include<iostream>
using namespace std;
class num_class
{
private:
    int num;
    
public:
    
    void operator =(int n)
    {
        num =n;
    }
    void show()
    {
        cout<<num<<endl;
    }
};
int main()
{
    num_class n1;
    n1=5;
    n1.show();
}