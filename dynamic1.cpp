#include<iostream>
#include<stdlib.h>

using namespace std;

class Demo
{
    public :
        int A,B;
        Demo()
        {
            cout<<"Inside Constructor!!"<<endl;
            A = 11;
            B = 21;
        }
        ~Demo()
        {
            cout<<"Inside Destructor!!"<<endl;
        }
        void fun()
        {
            cout<<"Inside Fun Function!!"<<endl;
        }
};

int main()
{
    //Demo obj1;

    Demo *p = new Demo;
    //Demo *p = (Demo *)malloc(sizeof(Demo));
    p->fun();

    cout<<p->A<<endl;
    cout<<p->B<<endl;
    delete p;
    //free(p);
    return 0;
}