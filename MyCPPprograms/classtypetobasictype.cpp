#include<iostream>
using namespace std;
class time
{
private:
    int hour,min;
public:
    time(int m)
    {
        hour=m/60;
        min=m%60;
    }
    operator int()
    {
        int z;
        z=hour*60+min;
        return(z);
    }
    void showtime()
    {
        cout<<hour<<":"<<min <<endl;
    }
};
int main()
{
    int x=100;
    time t1=x;
    t1.showtime();
    int y;
    y=t1;
    cout<<y<<endl;
    return(0);
}
