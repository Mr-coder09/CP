
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"size od array =";
    cin>>n;
    int arr[n],i;
    cout<<"Enter the array elemnets ";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"keyn ";
    cin>>key;
        for( i=0;i<n;i++){
            if(arr[i]==key){
                cout<<"elemnt is present at index no:"<<i;
                break;
            }
        }
        if(i==n){
            cout<<"Invalkid no";
        }

    return 0;
}