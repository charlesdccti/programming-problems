
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<cmath>

using namespace std;

int main () {
	int v[3], x=0;
	cin>>v[0]>>v[1]>>v[2];
	for(int i=0;i<3;i++){
		if(v[i]>=v[(i+1)%3]+v[(i+2)%3]){
			x=3;
			cout<<"n";
			break;
		}
		if(pow(v[i],2)>pow(v[(i+1)%3],2)+pow(v[(i+2)%3],2)){
			x=1;
		}
		if(pow(v[i],2)==pow(v[(i+1)%3],2)+pow(v[(i+2)%3],2)){
			x=2;
		}
	}
	if(x==0)cout<<"a";
	else if(x==1)cout<<"o";
	else if(x==2)cout<<"r";
}