#include<bits/stdc++.h>

using namespace std;

int main(){

    int age;
    cout<<"Enter the age of that person: "<<endl;
    cin>> age;

    if(age<18 && age>0){
        cout<<"Not an adult"<<endl;
        cin.ignore();
    }
    else if(age>=18){
        cout<<"He is an adult"<<endl;
    }
    else{
        cout<<"Enter a valid age!";
    }
}