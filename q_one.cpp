#include<iostream>
using namespace std;
class num_array
{
private:
    int *num = new int[5]{5,6,7,8,9};
    
public:
    
    int operator [](int n)
    {
        return num[n];
    }
};
int main()
{
    num_array n1;
    cout<<n1[4]<<endl;
}