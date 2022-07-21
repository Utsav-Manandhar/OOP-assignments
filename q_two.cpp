#include<iostream>
using namespace std;
class ptr_class
{
private:
    int* ptr;
    int *size;
public:
    void* operator new(size_t s )
    {
        void* p = malloc(s);
        cout<<"Newly allocated address: "<<p<<endl;
        return p;
    }
    void operator delete(void* p)
    {
        cout<<"Deleting address : "<<p<<endl;
        free(p);
    }

};
int main()
{
    ptr_class *p1 = new ptr_class;
    delete p1;

}
