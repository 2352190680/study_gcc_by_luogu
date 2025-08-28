// #include<bits/stdc++.h>
// using namespace std;
// bool cmp(string a,string b){
// 	return a+b>b+a;
// }
// int main(){
// 	int n;
// 	cin >> n;
// 	string a[n];
// 	for (int i = 0;i<n;i++) cin >> a[i];
// 	sort(a,a+n,cmp);
// 	for (int i = 0;i<n;i++){
// 		cout << a[i];
// 	}
// 	cout << endl;
// 	return 0;
// }

#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;string a[n];
	for (int i=0;i<n;++i){
		cin>>a[i];
	}
	for (int i=0;i<n;++i){
		for (int j=i+1;j<n;++j){
			if( (a[i]+a[j])<(a[j]+a[i])){
				string b=a[i];a[i]=a[j];a[j]=b;
			}
		}
	}                //sort实现过程
	for (int i=0;i<n;++i){
		cout<<a[i];
	}


	return 0;
}