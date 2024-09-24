#include <iostream>
using namespace std;
int main() {
int bench  = 0;
int squat = 0;
int deadlift=0;
cout<<"How much do you bench ";
cin>> bench ;
if (bench == 45){
  cout<<"you are starting to workout now"<<endl;

}
else if (bench < 135 ){
    cout<<"you should exercise more "<<endl;
}
else{
    cout<<"you bench more then one plate"<<endl;
}
cout<<"how much do you squat";
cin>>squat;
if(squat==45){
    cout<<"welcome to the gym"<<endl;
}
else if(squat<135){
cout<<"You should exercise more"<<endl;
}
else{
    cout<<"you squat more then one plate"<<endl;
}
cout<<"how much do you deadlift";
cin>>deadlift;
if(deadlift==45){
    cout<<"welcome to the gym"<<endl;
}
else if(deadlift<135){
    cout<<"exercise more"<<endl;
}
else{
    cout<<"you deadlift more then one plate"<<endl;
}
}