#include<iostream>
using namespace std;

int main(){
    int score;

    // Simple if-else
    cout<<"Enter the score: ";
    cin>>score;

    if(score<300){
        cout<< "India Wins"<<endl;
    }
    else{
        cout<<"Pak wins"<<endl;
    }

    // Nested if-else
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    if(marks>=90){
        cout<<"A grade";
    }
    else{
        if(marks>=80){
            cout<<"B grade";
            }
        else{
            if(marks>=60){
                cout<<"C grade";    
                } 
            else{
                if(marks>=40){
                    cout<<"D grade";
                    }
                else{
                    cout<<"F grade";
                    }
                }
            }
        }

    // if-else ladder
    if(marks>=90){
        cout<<"A grade";
    }
    else if(marks>=80){
        cout<<"B grade";
        }
    else if(marks>=60){
        cout<<"C grade";    
        } 
    else if(marks>=40){
        cout<<"D grade";
        }
    else{
        cout<<"F grade";
        }
        
    return 0;
}