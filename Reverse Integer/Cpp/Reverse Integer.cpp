#include<iostream>
using namespace std;

    int main() {
        int x;
        cout<<"Put a number: ";
        cin>>x;
    
        for(int i=1; i<=3; i++) {
            x=x%10;
            cout<<x;
        }
        
}

