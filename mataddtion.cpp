#include <iostream>
using namespace std;
int main(){
    int r1,c1;
    int r2,c2;
    int i,j;
    int arr1[50][50];
    int arr2[50][50];
    int add[50][50];
    cout<<"Enter the size of Rows and Coloums for arr1: ";
    cin>>r1;
    cin>>c1;
    cout<<"Enter the size of Rows and Coloums for arr2: ";
    cin>>r2;
    cin>>c2;
    for(i=0; i<r1; i++)
        for(j=0; j<c1 ; j++){
                cout<<"Enter the Elments of the arr1: "<<i+1<<j+1<<endl;
                cin>>arr1[i][j];
        }
    for(i=0; i<r2; i++)
        for(j=0; j<c2 ; j++){
                cout<<"Enter the Elements of the arr2: "<<i+1<<j+1<<endl;
                cin>>arr2[i][j];
        }
    cout<<endl<<"arr1: ";
    for(i=0; i<r1; i++)
        for(j=0; j<c1 ; j++){
            cout<<" "<<arr1[i][j];
        }
    cout<<endl<<"arr2: ";
    for(i=0; i<r2; i++)
        for(j=0; j<c2 ; j++){
            cout<<" "<<arr2[i][j];
        }
    for(i=0; i<r1; i++)
        for(j=0; j<r2 ; j++){
            add[i][j]=0;
        }
    for(i=0; i<r1; i++)
        for(j=0; j<c2 ; j++){
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    cout<<endl<<"result array: ";
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++){
            cout<<" "<<add[i][j];
        }
    return 0;           
}
