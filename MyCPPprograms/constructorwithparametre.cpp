#include<iostream>
using namespace std;
class A
{
private:
    int i;
public:
    A(int x)
    {
        i=x;
        cout<<"constructor A with args called!!\n";
    }
    A()
    {
        i=10;
        cout<<"constructor A without args called!!\n";
    }
    int getI()
    {
        return i;
    }
};
class C
{
private:
    int k;
public:
    C (int x)
    {
        k=x;
        cout<<"constructor C with args called!!\n";
    }
    int getk()
    {
        return k;
    }
};
class B:public A,public C
{
private:
    int j;
public:
    B():A(100),C(200)
    {
        j=20;
    }
    void add()
    {
        cout<<getI()+getk()+j<<endl;
    }
};
int main()
{
    B ob;
    ob.add();
    return(0);
}
