#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    virtual void show() = 0; 
    int add(int x)
    {
        return (x+2);
    }
};
class Derived: public Base{
    public:
    int y;
    void show() 
    { 
        cout << "Show() called";
        cout<<endl;
    }
    virtual int add(int y)
    {
        return(y+3);
    }
};
int main(void)
{
    Base *p;
    Derived obj;
    p = &obj;
    p->show();

   //abstraction was in Base class as pure virtual function is in base class
}
