#include<iostream>
using namespace std;

int main(){

    char c;

    cout<<"enter alphabet :";
    cin>>c;

    if(c =='a' || c =='e' || c =='i' || c =='o' || c =='u' || c =='A' || c =='E' || c =='I' || c =='O' || c =='U' ){
        cout<<"alphabet is a Vowel";
    }
    else{
        cout<<"alphabet is a Consonant";
    }
}

