#include<iostream>
#include"home.hpp"

using namespace std;

string locations_list [5] = { "Dhaka","Sylhet","Chittagong","Dinajpur","Khulna"};

void locations(){
    
    for( int i=0;i<5;i++){
        cout<<i+1<<" "<<locations_list[i]<<endl;
    }
}


void init_console(){    

    int starting_location;
    int destination;

    cout<<"Welcome to cli ticket booking system"<<endl;
    cout<<"Please select a boarding point: "<<endl;
    locations();
    cin>>starting_location;
    cout<<"Please select a destination: "<<endl;
    locations();
    cin>> destination;
    
    cout<<"Searching ticket from "<<locations_list[starting_location-1]<<" to "<<locations_list[destination-1]<<" ......."<<endl;
}