
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <math.h>
#include <cctype>
#define MAX 1234

using namespace std;

struct furo{
	double x;
	double y;
} furo;

int main () {
	struct furo furos[MAX];
	double max[MAX];
	int menor;
	int n, teste=1;
	double dist,x,y;
	while(true){
		
		scanf("%d",&n);
		if(n==0)break;
		for(int i=0;i<n;i++){
			scanf("%lf %lf", &(furos[i].x), &(furos[i].y));
			max[i]=0;
			for(int j=i-1;j>=0;j--){
				dist=sqrt((furos[i].x-furos[j].x)*(furos[i].x-furos[j].x)+(furos[i].y-furos[j].y)*(furos[i].y-furos[j].y));
				//printf("y %lf y\n",dist);
				if(dist>max[i]){
					max[i]=dist;
				}
				if(dist>max[j]){
					max[j]=dist;
				}
			}
		}
		menor=0;
		for(int i=0;i<n;i++){
			//printf("x %lf x\n",max[i]);
			if(max[i]<max[menor]){
				menor=i;
			}
		}
		printf("Teste %d\n%d\n\n",teste,(int)((max[menor]*2+5)));
		teste++;
	}
	return 0;	
}