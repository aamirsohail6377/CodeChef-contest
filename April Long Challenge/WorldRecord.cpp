#include<iostream>
using namespace std;
float round(float res) 
{ 
    float value = (int)(res * 100 + .5); 
    return (float)value / 100; 
} 
int main(){
	float k1,k2,k3,v;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k1>>k2>>k3>>v;
		float res;
		res=k1*k2*k3*v;
		res= 100/res;
		res =round(res);
		if (res>9.57){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}
