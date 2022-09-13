#include <iostream>
using namespace std;
int main(){
    int a[12][24];
    int i,j;
    int m,n;
    cout<<"enter value of m: ";
    cin>>m;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n ; j++){
            cin>>a[i][j];
        }
    }
    cout<<"the entered elements are: "<<endl;
    for(int i = 0; i<m; i++)
    {

        for (int j = 0; j < n; j++){

        
            cout<<" "<<a[i][j];  
        }
        cout<<endl;
    }      
}
