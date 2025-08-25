// #include <iostream>
// #include<string>
// using namespace std;
// //像组
// struct student{
//     string name;
//     int age;
//     double score;
// };
// int main(){
//     student student[10];
//     cin>>student[1].name>>student[1].age>>student[1].score;
//     cout<<student[1].name<<endl;
//     cout<<student[1].age<<endl;
//     cout<<student[1].score<<endl;
//     student[2]=student[1];
//     student[2].name="name";
//     cout<<student[2].name<<endl;
//     cout<<student[2].age<<endl;
//     cout<<student[2].score<<endl;    
//     return 0;
// }

#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct stu{
    string name;
    int s1,s2;
}a[10];
// struct cj{
//     string name;
//     int yu;
//     int shu;
//     int ying;
// }a[10];
int main(){
    // int n,max=0,m;cin>>n;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i].name>>a[i].yu>>a[i].shu>>a[i].ying;
    //     int sum=a[i].yu+a[i].shu+a[i].ying;
    //     if (sum>max){
    //         max=sum;m=i;
    //     }
    // }
    // cout<<a[m].name<<" "<<a[m].yu<<" "<<a[m].shu<<" "<<a[m].ying;


    // int n;cin>>n;
    // for (int i=1;i<=2*n-1;++i){
    //     for (int j=1;j<=n-fabs(i-n);++j){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    int n;cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i].name>>a[i].s1>>a[i].s2;
    }
    for (int j=1;j<=n-1;++j){
        for(int k=j+1;k<=n;++k){
            if (a[j].s1+a[j].s2<a[k].s1+a[k].s2){
                stu d;d=a[j];a[j]=a[k];a[k]=d;
            }
        }
    }
    for (int i=1;i<=n;++i){
        cout<<a[i].name<<" "<<a[i].s1<<" "<<a[i].s2<<endl;
    }    
    return 0;
}