#include<iostream>
using namespace std;
main(){
	float x=6;
	float ans=0,y=0;
	while(x<=19){
		y=1/x;
		ans=ans+y;
		x=x+1;
	}
	cout<<" "<<ans;
	return 0;
}	