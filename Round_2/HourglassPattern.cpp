#include<iostream>
using namespace std;
int main(){
  int row=7;
  for(int i=1;i<=7;i++){
    for(int k=1;k<i;k++){
        cout<<" ";
    }
    for(int j=row-i+1;j>=1;j--){
        cout<<" * ";
    }
    cout<<endl;
  }
  for(int i=2;i<=row;i++){
    for(int k=row-i;k>=1;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<" * ";
    }
    cout<<endl;
  }
}