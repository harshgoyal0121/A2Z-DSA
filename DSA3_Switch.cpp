#include<bits/stdc++.h>
using namespace std;

int main(){
    int day_number;

    cout<<"Enter the day number you want: ";
    cin>>day_number;

    switch(day_number){
        case 1: 
            cout<<"Monday\n";
            break;
        case 2:
            cout<<"Tuesday\n";
            break;
        case 3:
            cout<<"Wednesday\n";
            break;
        case 4:
            cout<<"Thursday\n";
            break;
        case 5:
            cout<<"Friday\n";
            break;
        case 6:
            cout<<"Saturday\n"; 
            break;
        case 7:
            cout<<"Sunday\n";
            break;
        default: 
            cout<<"Enter the day between 1 and 7!\n";
    }
    cout<<"\nThanks\n";
}