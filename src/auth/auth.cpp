#include<iostream>
#include "auth.hpp"

using namespace std;

struct user {
    string name;
    string email;
    string password; 
}  ;

string hash_password(string password){
    // todo write logic to hash password
    return password;
}

bool get_user_by_email(string email){
    // todo search user in DB
    return false;
}


user create_new_user(string email,string password){
    user new_user;

    new_user.name="";
    new_user.email=email;
    new_user.password=password;    

    return new_user;
}


void registration(string email,string password){
    
    if (get_user_by_email(email)){
        return ;
    }
    string hashed_password = hash_password(password);
    user new_user  = create_new_user(email,hashed_password);
    cout<<new_user.email<<" "<<new_user.password<<endl;
     

}

bool login(string email,string password){
    if(password=="1234"){
        return false;
    }
    return true ;
}

bool make_login(){
    string email;
    string password;
    
    cout<<"email: ";
    cin>>email;

    cout<<endl;

    cout<<"password: ";
    cin>>password;

    if(login(email,password)){
        return true;
    }else{
        return false;
    }
}

bool make_registration(){
    string email;
    string password;

    cout<<"email: ";
    cin>>email;

    cout<<endl;

    cout<<"password: ";
    cin>>password;

    registration(email,password);
    return true;
}

bool make_authentication(){
    while(true){ 
    int input = 0;
    cout<<"1. Sign In"<<endl;
    cout<<"2. Sign Up"<<endl;
    cin>>input;

    if(input==1){
        if(make_login()){
            cout<<"Successfully logged in"<<endl;
            return true;
        }
        cout<<"Wrong Credentials, please try again"<<endl;
    }else if( input==2){
        if(make_registration()){
            return true;
        }
        //cout<<"Wrong Credentials, please try again"<<endl;
    }
    }
    return false;
    
}