#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x){
    double a1 = x * M_PI / 180;
    return a1;
}

double rad2deg(double x){
    double a2 = x*180 / M_PI;
    return a2;
}

double findXComponent(double l1,double l2,double a1,double a2){
    double xcomp = (l1*cos(a1)) + (l2*cos(a2));
    return xcomp;
}

double findYComponent(double l1,double l2,double a1,double a2){
    double ycomp = (l1*sin(a1)) + (l2*sin(a2));
    return ycomp;
}

double pythagoras(double x,double y){
    double z = sqrt((pow(x,2) + pow(y,2)));
    return z;
}

double showResult(double x,double y){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << x << "\n";
    cout << "Direction of the resultant vector (deg) = " << y << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    return 0;
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
