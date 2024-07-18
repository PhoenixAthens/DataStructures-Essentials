#include <stdio.h>
#include <math.h>
#include <utility>
using std::pair;

const double PI = acos(-1.0);
double fgcd(double num1, double num2){
    if(num1<num2){
        return fgcd(num2,num2);
    }
    if(fabs(num2) < 0.001)
        return num1;
    return fgcd(num2, num1-floor(num1/num2)*num2);
}
int main(int argc, char**){
    pair<double, double> point[3];
    for(int i=0;i<3;i++){
        scanf("%lf %lf",&point[i].first,&point[i].second);
    }
    
    //calculate lengths
    double a, b, c;
    a = sqrt(pow(point[0].first - point[1].first,2)+pow(point[0].second - point[1].second,2));
    b = sqrt(pow(point[1].first - point[2].first,2)+pow(point[1].second - point[2].second,2));
    c = sqrt(pow(point[2].first - point[0].first,2)+pow(point[2].second - point[0].second,2));
    
    //calculate the area of the triangle
    double semiPerimeter = (a+b+c)/2;
    double areaOfTriangle = sqrt(semiPerimeter*(semiPerimeter-a)*(semiPerimeter-b)*(semiPerimeter-c));
    
    //calculate the radius of the circumscribing circle
    double r = a*b*c/(4*areaOfTriangle);
    
    //calculate central angles
    double A, B, C;
    A = acos((b*b+c*c-a*a)/2*b*c);
    B = acos((c*c+a*c-b*b)/2*c*a);
    C = acos((a*a+b*b-c*c)/2*a*b);
    
    //Calculate GCD of central angles
    double x = 2*fgcd(A, fgcd(B,C));
    
    //Calculate the number of edges in a regular polygon
    int n = round(2*PI/x);
    
    //Calculate the area of a regular polygon
    areaOfTriangle = 0.5*n*r*r*sin(2*PI/n);
    
    printf("%.6lf\n",areaOfTriangle);
    return 0;
}

