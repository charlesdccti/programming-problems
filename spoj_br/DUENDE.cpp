
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include<stack>
#include<queue>

#include<cmath>
#include<math.h>
using namespace std;

typedef struct{
	int x;
	int y;
	int visitado;
	int val;
}pos;

int main () {
	queue<pos> fila;
	int n,m;
	pos mat[10][10];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&mat[i][j].val);
			mat[i][j].x=i;
			mat[i][j].y=j;
			mat[i][j].visitado=500;
			if(mat[i][j].val==3){
				mat[i][j].visitado=0;
				fila.push(mat[i][j]);
			}
			if(mat[i][j].val==2){
				mat[i][j].visitado=-5;
			}
		}
	}
	pos x;
	int maior=2000;
	while(fila.size()!=0){
		x=fila.front();
		fila.pop();
		if(x.visitado<maior&&x.val==0)maior=x.visitado;
		if(x.x+1!=n&&mat[x.x+1][x.y].visitado>x.visitado){
			mat[x.x+1][x.y].visitado=x.visitado+1;
			fila.push(mat[x.x+1][x.y]);
		}
		if(x.x-1!=-1&&mat[x.x-1][x.y].visitado>x.visitado){
			mat[x.x-1][x.y].visitado=x.visitado+1;
			fila.push(mat[x.x-1][x.y]);
		}
		if(x.y+1!=m&&mat[x.x][x.y+1].visitado>x.visitado){
			mat[x.x][x.y+1].visitado=x.visitado+1;
			fila.push(mat[x.x][x.y+1]);
		}
		if(x.y-1!=-1&&mat[x.x][x.y-1].visitado>x.visitado){
			mat[x.x][x.y-1].visitado=x.visitado+1;
			fila.push(mat[x.x][x.y-1]);
		}
		
	}	
	cout<<maior;		
		
	return 0;
	
}