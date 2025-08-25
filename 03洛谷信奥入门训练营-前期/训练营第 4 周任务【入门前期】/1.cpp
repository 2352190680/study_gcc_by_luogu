#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a;char b;cin>>a>>b;int m,s;cin>>m>>s;
    if (b=='A'){
        if (a<=3){
            if ((m*60+s)<=300)printf("10.0");
            else if ((m*60+s)>300&&(m*60+s)<450)printf("11.0");
            else if ((m*60+s)>=450){
                printf("%.1lf",11+1*floor(((m*60+s)-300)/150));
            }
        }
        else{
            if ((m*60+s)<=300)printf("%.1lf",10+0.9*ceil((a-3)/0.5));
            else if ((m*60+s)>300&&(m*60+s)<450)printf("%.1lf",11+0.9*ceil((a-3)/0.5));
            else if ((m*60+s)>=450){
                printf("%.1lf",11+1*floor(((m*60+s)-300)/150)+0.9*ceil((a-3)/0.5));
            }
        }
    }
    else if(b=='P'){
        if (a<=3){
            if ((m*60+s)<=300)printf("11.0");
            else if ((m*60+s)>300&&(m*60+s)<450)printf("12.1");
            else if ((m*60+s)>=450){
                printf("%.1lf",12.15+1.15*floor(((m*60+s)-300)/150));
            }
        }
        else{
            if ((m*60+s)<=300)printf("%.1lf",11+1.1*ceil((a-3)/0.5));
            else if ((m*60+s)>300&&(m*60+s)<450)printf("%.1lf",12.15+1.1*ceil((a-3)/0.5));
            else if ((m*60+s)>=450){
                printf("%.1lf",12.15+1.15*floor(((m*60+s)-300)/150)+1.1*ceil((a-3)/0.5));
            }
        }        
    }
    return 0;
}