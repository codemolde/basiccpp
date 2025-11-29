#include <iostream>

class fanspeed{
    private:
    double rpm = 43.780;
    public:
 double getRpm(){
       return rpm;
    }
 void setRpm(double rpm){
    if(rpm<0){

    this->rpm=0;

}
else if(rpm>4900){
    this->rpm=4900;
}
else{
    this->rpm=rpm;
}
 }
};

int main(){
    fanspeed rpm1;
    rpm1.setRpm(-34545.54);
    std::cout << rpm1.getRpm();

    return 0;
}