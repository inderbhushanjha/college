#include <iostream>

using namespace std;
class student
{
    int roll;
public:
    void sshow()
    {
        cout<<roll;
    }
    student (int r)
{
    roll=r;
}
};

class test : public student
{
protected:

    int tmarks1,tmarks2;
public:
    test(int r, int m1,int m2):student(r)
    {
        tmarks1=m1;
        tmarks2 =m2;
    }
    void Tshow()
    {
        cout<<"\n"<<tmarks1<<"\n"<<tmarks2;
    }
};
class result : public test
{
public:
    result(int r, int t1, int t2):test(r,t1,t2)
    {

    }
    void rshow()
    {
        sshow();
        Tshow();
        cout<<"\n"<<tmarks1+tmarks2;
    }
};

int main()
{
    result r(5002,90,80);
    r.rshow();
    return 0;
}
