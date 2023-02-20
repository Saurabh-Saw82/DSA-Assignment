#include <bits/stdc++.h>
 
using namespace std;
 
void Joshephus(vector<int> person, int k, int index)
{
    
    if (person.size() == 1) {
        cout<<"The last person is :"<<endl;
        cout << person[0] << endl;
        return;
    }
 
    
    index = ((index + k) % person.size());
 
    // remove the first person which is going to be killed
    person.erase(person.begin() + index);
 
    
    Joshephus(person, k, index);
}
int main()
{
    cout<<"Enter the value of n : "<<endl;
    int n ;
    cin>>n;
    cout<<"Enter the value of k: "<<endl;
    int k ;
    cin>>k;
    k--; 
    int index=0;
 
    vector<int> person;
    for (int i = 1; i <= n; i++) {
        person.push_back(i);
    }
 
    Joshephus(person, k, index);
}