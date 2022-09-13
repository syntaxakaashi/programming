#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int i;
     cout<<"Enter the array elements: "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"The Array elements are :"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
