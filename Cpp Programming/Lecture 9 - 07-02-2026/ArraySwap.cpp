# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    int a,b;
    cin>>a>>b;
    arr[a]=arr[a]+arr[b];
    arr[b]=arr[a]-arr[b];
    arr[a]=arr[a]-arr[b];

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}