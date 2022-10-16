#include <iostream>
using namespace std;
int main()
{
    int r1,c1;
    int r2,c2;
    int i,j;
    int arr1[50][50];
    int arr2[50][50];
    int mult[50][50];
    cout<<"enter the rows and coloumn of the array: ";
    cin>>r1;
    cin>>c1;
    cout<<"enter the rows and coloumn of the array: ";
    cin>>r2;
    cin>>c2;
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++){
        cout<<"enter array elements: "<<i+1<<j+1<<": ";
        cin>>arr1[i][j];
    }
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++){
        cout<<"enter array elements: "<<i+1<<j+1<<": ";
        cin>>arr2[i][j];
    }
    cout<<endl<<"arr1";
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++)
        {
        cout<<" "<<arr1[i][j];
    }
    }
    cout<<endl<<"arr2";
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++)
        {
        cout<<" "<<arr2[i][j];
    }
    }
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            mult[i][j]=0;
    }
    }
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
        for(int k=0; k<c1; k++){
            mult[i][k] += arr1[i][k] * arr2[k][j];        
    }
    cout<<endl<<"result array";
    for(i=0; i<r1; i++)
    for(j=0; j<c2; j++){
        cout<<" "<<mult[i][j];
    }
    return 0;
}
