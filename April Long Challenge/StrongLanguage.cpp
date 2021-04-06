#include<iostream>
using namespace std;
int main(){
long long int n;
	cin>>n;
	for(long int i=0;i<n;i++){
	    	long int N,K;
	long int count=0;
		cin>>N>>K;
		string str;
		cin>>str;
		for(long int j=0;j<N;j++){
		   	if(str[j]=='*'){
		   		count=count+1;
		   	}
		   	else{
		   	       count=0;
		   	}
		   	if (count==K)
		   		 break;
		}
		if(count==K){
		   	cout<<"YES"<<endl;
		   }
		else{
		   	cout<<"NO"<<endl;
		   }
	}
}
