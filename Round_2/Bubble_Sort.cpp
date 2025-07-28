
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr={67,34,56,12,90,31};
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<" Sorted array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}