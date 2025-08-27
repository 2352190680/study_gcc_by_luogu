#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    // int n;cin>>n;
    // cout<<char(n);

    // string s;
    // while(cin>>s){
    //     int l=s.length();
    //     for (int i=0;i<l;++i){
    //         if (i%2==1){
    //             cout<<char(tolower(s[i]));
    //         }else{
    //             cout<<char(toupper(s[i]));
    //         }
    //     }
    //     cout<<" ";
    // }

    // string a,b;cin>>a>>b;long long j1=1,j2=1;int l1=a.length(),l2=b.length();
    // for (int i=0;i<l1;++i){
    //     j1*=int(a[i]-'A'+1);
    // }
    // for (int i=0;i<l2;++i){
    //     j2*=int(b[i]-'A'+1);
    // }
    // if (j1%47==j2%47){
    //     cout<<"yes";
    // }else{
    //     cout<<"no";
    // }

    // string s;cin>>s;int sum1=0,sum2=0;int l=s.length();
    // for (int i=0;i<l;++i){
    //     if (s[i]=='b')sum1++;
    //     else if (s[i]=='o')sum1++;
    //     else if (s[i]=='y')sum1++;
    //     else if (s[i]=='g')sum2++;
    //     else if (s[i]=='i')sum2++;
    //     else if (s[i]=='r')sum2++;
    //     else if (s[i]=='l')sum2++;
    //     if (s[i]=='b'&&s[i+1]=='o')sum1--;
    //     else if (s[i]=='o'&&s[i+1]=='y')sum1--;
    //     else if (s[i]=='g'&&s[i+1]=='i')sum2--;
    //     else if (s[i]=='i'&&s[i+1]=='r')sum2--;
    //     else if (s[i]=='r'&&s[i+1]=='l')sum2--;
    // }
    // cout<<sum1<<endl;
    // cout<<sum2;

    // int n;cin>>n;string name[n+1],information[n+1];int max=0;int num[n+1];memset(num,0,sizeof(num));
    // for (int i=0;i<n;++i){
    //     cin>>name[i]>>information[i];
    // }
    // for (int i=0;i<=n;++i){
    //     int l=information[i].length();
    //     for (int j=0;j<l;++j){
    //         if (information[i][j]=='s'&&information[i][j+1]=='o'&&information[i][j+2]=='s')num[i]++;
    //     }
    //     if (num[i]>=max)max=num[i];
    // }
    // for (int i=0;i<=n;++i){
    //     if (num[i]==max)cout<<name[i]<<" ";
    // }
    // cout<<endl;
    // cout<<max;

    int a,b,c;string s;cin>>a>>b>>c>>s;int l=s.length();
    for (int i=0;i<l;++i){
        if (i!=0&&s[i]=='-'&&((s[i-1]>='0'&&s[i-1]<='9'&&s[i+1]>='0'&&s[i+1]<='9')||(s[i+1]>='a'&&s[i+1]<='z'&&s[i-1]>='a'&&s[i-1]<='z'))){
            if (s[i-1]!=s[i+1]){
                if (c==1){
                    if (a==1){
                        for (int j=s[i-1]+1;j<s[i+1];++j){
                            for (int k=1;k<=b;++k){
                                cout<<char(j);
                            }
                        }
                    }
                    else if (a==2&&s[i+1]>='a'&&s[i+1]<='z'){
                        for (int j=s[i-1]+1;j<s[i+1];++j){
                            for (int k=1;k<=b;++k){
                                cout<<char(toupper(j));
                            }
                        }                    
                    }
                    else if (a==2&&s[i+1]>='0'&&s[i+1]<='9'){
                        for (int j=s[i-1]+1;j<s[i+1];++j){
                            for (int k=1;k<=b;++k){
                                cout<<char(j);
                            }
                        }                    
                    }
                    else if (a==3){
                        for (int j=s[i-1]+1;j<s[i+1];++j){
                            for (int k=1;k<=b;++k){
                                cout<<"*";
                            }
                        }                    
                    }
                }
                else if (c==2){
                    if (a==1){
                        for (int j=s[i+1]-1;j>s[i-1];--j){
                            for (int k=1;k<=b;++k){
                                cout<<char(j);
                            }
                        }
                    }
                    else if (a==1&&s[i+1]>='0'&&s[i+1]<='9'){
                        for (int j=s[i+1]-1;j>s[i-1];--j){
                            for (int k=1;k<=b;++k){
                                cout<<char(j);
                            }
                        }                    
                    }
                    else if (a==2&&s[i+1]>='a'&&s[i+1]<='z'){
                        for (int j=s[i+1]-1;j>s[i-1];--j){
                            for (int k=1;k<=b;++k){
                                cout<<char(toupper(j));
                            }
                        }                    
                    }
                    else if (a==2&&s[i+1]>='0'&&s[i+1]<='9'){
                        for (int j=s[i+1]-1;j>s[i-1];--j){
                            for (int k=1;k<=b;++k){
                                cout<<char(j);
                            }
                        }                    
                    }
                    else if (a==3){
                        for (int j=s[i+1]-1;j>s[i-1];--j){
                            for (int k=1;k<=b;++k){
                                cout<<"*";
                            }
                        }                    
                    }
                }
            }else{
                cout<<s[i];
            }
        }
        else{
            cout<<s[i];
        }
    }

    return 0;
}