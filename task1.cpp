#include<iostream>
using namespace std;
class parent{
    public:
    int add(int x , int y)
    {
        cout<<"Parent Int function "<<endl;
        return(x+y);
    }
    float add(int a , float b)
    {
        cout<<"Parent Float function "<<endl;
        return(a+b);
    }
};
class child : public parent{
    public:
    int add(int x , int y){
        cout<<"Child Int function "<<endl;
        return(x+y+1);
    }
};
int main()
{
  parent obj1;
  child obj2;

  cout<<obj1.add(3,4)<<endl;
  cout<<endl;

  cout<<obj1.add(4 , 3.7f )<<endl;
  cout<<endl;

  cout<<obj2.add(8 , 4)<<endl;
  cout<<endl;

//method which is hidden from child from child class object is “ int add(int x , int y)”
}
