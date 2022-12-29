#include <iostream>  
using namespace std;
void fun(int a[],int y){
     for (int i = 0; i < y; ++i){
         cout<<a[i];
   }
   
}  
int main()  
{ 
  int r;
  cout<<"ENter the size of array " ;
  cin>>r;
  int arr[r];
  for (int i = 0; i < r; i++)
  {
     cin>>arr[i];
  }
    for (int i = 0; i < r; i++)
  {
     cout<<arr[i];
  }
  cout<<"Second array\n";
  int t;
  cout<<"ENter the size of array " ;
  cin>>t;
    int ar[t];
    for (int i = 0; i < t; i++)
  {
     cin>>ar[i];
  }

    for (auto i:ar)
  {
     cout<<ar[i];
  }

cout<<"third array\n";
   int y;
   cout<<"ENter the size of array " ;
   cin>>y;
   int arrr[y];
   cout<<"enter array";
   for (int i = 0; i < y; i++)
   {
     cin>>arrr[i];
   }
    fun(arrr,y);
     return 0;
     

}