#include<iostream>
#include "home/home.hpp"
#include "auth/auth.hpp"

using namespace std;

int main(){
    while(true){ 
    if(make_authentication()){
        init_console();
    }
    else{
        cout<<"Wrong Credentials, please try again"<<endl;
    }
    }
    return 0;
}