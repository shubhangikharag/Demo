#include<iostream>
using namespace std;
class test
{
private:
    int i,j;
public:
    test(int x,int y)
    {
        i=x;
        j=y;
        cout<<"constructor with args called!!\n";
    }
    test(test & ob) //copy & constructor
    {
        i=ob.i;
        j=ob.j;
        cout<<"copy constructor called!!\n";
    }
    test()
    {
        i=100;
        j=200;
        cout<<"constructor without args called!!\n";
    }
    void add()
    {
        cout<<"addition is"<<i+j<<endl;
    }
};
int main()
{
    test t1;
    test t2(300,400);
    test t3(t2);
    t1.add();
    t2.add();
    t3.add();
    return(0);
}
