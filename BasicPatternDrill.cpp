#include <iostream>
using namespace std;

int main(){

    //Inputs for pattern Drill...
    int nrow, ncol;
    cout<<"Enter nrow and ncol :"<<endl;
    cin>>nrow>>ncol;

    cout<<"Solid Rectangle Pattern..."<<endl;
    for(int i=1;i<=nrow;i++){ //i=1
        for(int j=1;j<=ncol;j++){ //j=1
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Hollow Rectangle Pattern..."<<endl;
    for(int i=1;i<=nrow;i++){
        for(int j=1;j<=ncol;j++){
            if(i==1 || i==nrow || j==1 || j==ncol){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
   
    cout<<"Half Pyramid Pattern..."<<endl;
    for(int i=1;i<=nrow;i++){
       for(int j=1;j<=i;j++){
        cout<<"*";
       }
       cout<<endl;
    }

    cout<<"Inverted Half Pyramid..."<<endl;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Inverted and Rotated Half Pyramid || Half Pyramid after 180 rotation..."<<endl;
    for(int i=1;i<=nrow;i++){

        int space = nrow - i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    cout<<"Half Pyramid using numbers..."<<endl;
    for(int i=1;i<=nrow;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}