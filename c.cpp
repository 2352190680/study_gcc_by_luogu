#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
struct point{
    double x,y;
    point(double A,double B){
        x=A,y=B;
    }
    point() = default;
};
struct line{
    point point_A,point_B;
    line(point A,point B){
        point_A = A,point_B = B;
    }
    line() = default;
};
point findMeetingPoint(line line_A,line line_B){
    // TODO:求直线 line_A 与 line_B 的交点
    double a=line_A.point_A.x-line_A.point_B.x;
    double b=line_A.point_B.y-line_A.point_A.y;
    double c=line_B.point_A.x-line_B.point_B.x;
    double d=line_B.point_B.y-line_B.point_A.y;
    double t=a*d-b*c;
    if (t==0){
        return point(-1,-1);
    }
    double t1=a*line_A.point_A.y+line_A.point_A.x*b;
    double t2=c*line_B.point_A.y+d*line_B.point_A.x;
    double x=(a*t2-c*t1)/t;
    double y=(t1*d-t2*b)/t;
    cout<<fixed<<setprecision(6);
    return point(x,y);
}
int main(){
    point A,B,C,D;
    cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y>>D.x>>D.y;
    line AB=line(A,B);
    line CD=line(C,D);
    point ans = findMeetingPoint(AB,CD);
    cout<<ans.x<<" "<<ans.y;
    return 0;
}