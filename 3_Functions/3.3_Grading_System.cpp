// Function for displaying grade of a student.
#include<iostream>
using namespace std;

char grade(int marks){
    // if(marks>=90){
    //     return 'A';
    // }
    // else if(marks>=70){
    //     return 'B';
    // }
    // else if(marks>=60){
    //     return 'C';
    // }
    // else if(marks>=50){
    //     return 'D';
    // }
    // else if(marks>=40){
    //     return 'E';
    // }
    // else{
    //     return 'F';
    // }
    
    switch(marks/10){
        case 10: return 'A'; break;
        case 9: return 'A'; break;
        case 8: return 'B'; break;
        case 7: return 'C'; break;
        case 6: return 'D'; break;
        case 5: return 'E'; break;
        default: return 'F';
        
    }
}

int main(){
    int marks;
    cout<<"Enter your total marks to know your grade: ";
    cin>>marks;

    char result=grade(marks);
    cout<<"Your achieved grade "<<result<<endl;

    return 0;
}