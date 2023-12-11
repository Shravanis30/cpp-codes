#include <iostream>
using namespace std;
//calculate the valume of cylinder
int volume(double r , int h){
    return(3.14*r*r*h);
}
//caluclate the valume of cube 
int volume(int a){
    return(a*a*a);
}
//volume of rectangle
int volume(int l , int b , int h){
    return(l*b*h);
}
int main(){
    //calling a function
    cout<<"the volume of cube:"<<volume(3)<< endl;
    cout<<"the volume of cylimder:"<<volume(3,6)<<endl;
    cout<<"the volume of rectangle:"<< volume(3,6,2)<< endl;
    return 0;
}