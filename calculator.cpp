#include <iostream> 
using namespace std;
class calculator
{
    int a,b;
    public:
    void add()
        {
                int c;
                cout<<"enter value of a:";
                cin>>a;
                cout<<"enter value of b:";
                cin>>b;
                c=a+b;
                cout<<"Addition is :"<<c;
        }
};
int main()
{
    calculator obj;
    obj.add();
    return 0;
}
