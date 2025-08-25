#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main (){
    printf("在这里，你将扮演一名叫做小明的学生，你需要完成一个名叫作业的东西。注意：做对得10分，做错扣8分，你需要使自己的分数达到100分方可获胜\n");
    int mark=0,num=0;
    while (mark<100){
        srand(time(0));
        int choice=rand()%4+1;
        int result;
        num++;
        if (choice==1){
            int jiafa1=rand()%100+1,jiafa2=rand()%100+1;
            printf("请回答第%d道题目：%d + %d =\n",num,jiafa1,jiafa2);
            cin>>result;
            if (result==(jiafa1+jiafa2)){
                mark+=10;
                printf("恭喜你答对了，你真聪明，分数加10分，当前分数为%d，继续加油\n",mark);
            }else{
                mark-=8;
                printf("你算错了！！！没见过你这么笨的，正确答案是%d，分数扣8分，当前分数为%d，继续加油\n",(jiafa1+jiafa2),mark);
            }
        }
        else if (choice==2){
            bool hecha=false;int jianfa1,jianfa2;
            while (hecha==false){
            jianfa1=rand()%100+1,jianfa2=rand()%100+1;
            if(jianfa1>=jianfa2){hecha=true;}
            }
            printf("请回答第%d道题目：%d - %d =\n",num,jianfa1,jianfa2);
            cin>>result;
            if (result==(jianfa1-jianfa2)){
                mark+=10;
                printf("恭喜你答对了，你真聪明，分数加10分，当前分数为%d，继续加油\n",mark);
            }else{
                mark-=8;
                printf("你算错了！！！没见过你这么笨的，正确答案是%d，分数扣8分，当前分数为%d，继续加油\n",(jianfa1-jianfa2),mark);
            }
        }
         else if (choice==3){
            int chengfa1=rand()%100+1,chengfa2=rand()%100+1;
            printf("请回答第%d道题目：%d × %d =\n",num,chengfa1,chengfa2);
            cin>>result;
            if (result==(chengfa1*chengfa2)){
                mark+=10;
                printf("恭喜你答对了，你真聪明，分数加10分，当前分数为%d，继续加油\n",mark);
            }else{
                mark-=8;
                printf("你算错了！！！没见过你这么笨的，正确答案是%d，分数扣8分，当前分数为%d，继续加油\n",(chengfa1*chengfa2),mark);
            }
        }
        else if (choice==4){
            bool hecha=false;int chufa1,chufa2;
            while (hecha==false){
            chufa1=rand()%100+1,chufa2=rand()%100+1;
            if(chufa1%chufa2==0){hecha=true;}
            }
            printf("请回答第%d道题目：%d ÷ %d =\n",num,chufa1,chufa2);
            cin>>result;
            if (result==(chufa1/chufa2)){
                mark+=10;
                printf("恭喜你答对了，你真聪明，分数加10分，当前分数为%d，继续加油\n",mark);
            }else{
                mark-=8;
                printf("你算错了！！！没见过你这么笨的，正确答案是%d，分数扣8分，当前分数为%d，继续加油\n",(chufa1/chufa2),mark);
            }
        }
    }
    printf("恭喜你完成了作业，这次一共拿了%d分",mark);
    return 0;
}