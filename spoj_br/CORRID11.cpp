
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<cmath>

using namespace std;

int main () {
	int n, m,menor=-1, menori=-1,atual,natual;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		atual=0;
		for(int j=0;j<m;j++){
			cin>>natual;
			atual+=natual;
		}
		if(menor==-1){
			menor=atual;
			menori=i;
		}
		else if(menor>atual){
			menor=atual;
			menori=i;
		}
	}
	cout<<menori+1<<endl;
	
	

}