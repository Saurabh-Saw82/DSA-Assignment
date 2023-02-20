//Naive solution O(n^2)
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int x;
    cout<<"Enter the elements of the array: "<<endl;
    cout<<"to stop enter a charcter ";
    while(cin>>x){   // taking input from user
        v.push_back(x);
    }
    cout<<"The array before the operation: ";
    for(int i:v) cout<<i<<" "; //array before the operation is applied
    for(int i=0;i<v.size();++i){    
        int max=v[i];
        for(int j=i+1;j<v.size();++j){
            if(v[j]>max){
                max=v[j];
                break;
            }
        }
        v[i]=max;
    }
    cout<<"\nThe array after the operation: "; // array after the operation is applied
    for(int i : v) cout<<i<<" ";
}