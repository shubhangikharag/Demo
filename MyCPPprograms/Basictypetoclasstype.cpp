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
    void showtime()
    {
        cout<<hour<<":"<<min<<endl;
    }
};
int main()
{
    int x=100;
    time t1=x;
    t1.showtime();
    return(0);
}
