#include<iostream>
using namespace  std;
 bool sercharr(int arr[],int n){
     for (int  i = 0; i <n; i++)
     {
         if (i<=n)
         {
            return 1;
         }
        
     }
     return 0;
 }
 void printarr(int arr[], int size)
 {
     for (int  i = 0; i < size; i++)
     {
         cout<<arr[i]<<" ";
         cout<<endl;
     }

     
 }
int main(){
    cout<<" enter the number : ";
    int arr[5] ={ 2,4,6,8,9};
    printarr( arr,5); // function coll
    int n;
    cin>>n;
    bool index = sercharr(arr,20);
    if (index)
    {
        cout<<"your element is present :"<<endl;
    }
    else
    {
        cout<<" your element is not present : "<<endl;
    }
    
     return 0;
}
