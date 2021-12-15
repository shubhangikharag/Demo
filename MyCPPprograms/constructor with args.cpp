#include<iostream>
using namespace std;
class area
{
private:
    float r,a;
public:
    area(float r1)
    {
        r=r1;
        cout<<"constructor with args called!!\n";
    }
    void calculatearea()
    {
        a=3.14*r*r;
        cout<<"area is"<<a<<endl;
    }
};
int main()
{
    area ob(1.2);
    ob.calculatearea();
    area ob2(3.4);
    ob2.calculatearea();
    return(0);

}
