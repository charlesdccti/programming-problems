
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>

using namespace std;

int main () {
	map<int,int> candivoto;
	map<int,int>::iterator iter;	
	int x=0;
	int y=0;
	int maior=0, cand=0;
	
	scanf("%d",&x);
	
	for(int i=0;i<x;i++){
		scanf("%d",&y);
		candivoto[y]++;
	}
	
	for (iter = candivoto.begin(); iter != candivoto.end(); iter++) {
		if(iter->second>maior){
			maior=iter->second;
			cand=iter->first;
		}
	}
	cout<<cand;	

	return 0;
}