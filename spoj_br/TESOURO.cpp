
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


int main () {
	int teste=0;
	//comprimento,frases
	int c, f, a, b, soma;
	//n caracteres, n desculpa
	int n, d;
	int tab[101][12345];
	int p[101], v[101];
	while(true){
		teste++;
		scanf("%d %d %d", &a, &b, &f);
		//cout<<"y"<<a<<"y"<<b<<"y"<<endl
		soma=0;
		
		if(f==0)break;
		printf("Teste %d\n", teste);
		
		
		
		for(int j=1;j<=f;j++){
			scanf("%d", &n);
			p[j]=n;
			soma+=n;
			//v[j]=d;
		}
		c=((a+b+soma)/2)-a;
		if((a+b+soma)%2!=0){
			cout<<"N"<<endl<<endl;
			continue;
		}
		/*for(int i=0;i<=c;i++){
			for(int j=0;j<=f;j++){
				tab[j][i]=0;
			}
		}*/
		
		//cout<<"x"<<a<<"x"<<b<<"x"<<soma<<"x"<<c<<"x"<<endl;
		int s=0;		
		for(int i=0;i<=c;i++)tab[0][i]=0;
		for(int i=0;i<=f;i++)tab[i][0]=1;
		for(int i=1; i<=f;i++){
			for(int j=0;j<=c;j++){
				s=tab[i-1][j];
				if(s==0&&p[i]<=j){
					s=tab[i-1][j-p[i]];
				}
				tab[i][j]=s;
			}
		}
/*
		if(tab[f][c]==0){
			cout<<"N"<<endl<<endl;
			continue;
		}
		
		c=((a+b+soma)/2)-b;
		
		for(int i=0;i<=c;i++){
			for(int j=0;j<=f;j++){
				tab[j][i]=0;
			}
		}
		
		s=0;		
		for(int i=0;i<=c;i++)tab[0][i]=0;
		for(int i=0;i<=f;i++)tab[i][0]=1;
		for(int i=1; i<=f;i++){
			for(int j=0;j<=c;j++){
				s=tab[i-1][j];
				if(s==0&&p[i]<=j){
					s=tab[i-1][j-p[i]];
				}
				tab[i][j]=s;
			}
		}
		*/
		if(tab[f][c]==1){
			cout<<"S"<<endl<<endl;
		}
		else
			cout<<"N"<<endl<<endl;
	}	
	return 0;
	
}