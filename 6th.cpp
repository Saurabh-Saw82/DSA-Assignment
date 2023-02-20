//naive solution
//to optimize use map
#include<bits/stdc++.h>
using namespace std;
int main() {
  vector<int> v;
    int x;
    int sum;
    cout<<"\nEnter the sum : ";
    cin>>sum;
    cout<<"Enter the elements of the array: "<<endl;
    cout<<"to stop enter a charcter ";
    while(cin>>x){   // taking input from user
        v.push_back(x);
    }
    
    cout<<"The array before the operation: ";
    for(int i:v) cout<<i<<" "; //array before the operation is applied
    cout<<"\nThe pairs whose sum is "<<sum<<"are:\n";
    for(int i=0;i<v.size();++i){
        for(int j=i+1;j<v.size();++j){
            if(v[j]== sum-v[i]){
                cout<<v[i]<<" "<<v[j]<<"\n";
                break;
            }
            
        }
    }   

}