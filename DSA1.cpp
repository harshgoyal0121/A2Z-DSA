#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout<<"Enter a number: ";
    // int n;
    // cin>> n;
    // cout<<"n = "<<n<<endl;

    cout<<"Enter a string: ";
    string str;
    cin>> str;
    cout<< str<< endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout<<"Enter another string: ";
    string str1 ;
    getline(cin, str1);
    cout<<str1;
    return 0;
}