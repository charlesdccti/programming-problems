
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>
#include<list>

using namespace std;

list<string> saida;
map<string,list<string> > adj;
map<string,list<string> > adjinv;
map<string,int> vis;
list<string> iniciais;
int ciclo;


void visit(string no){
	iniciais.pop_front();
	saida.push_back(no);
	while(adj[no].size()!=0){
		string no2=adj[no].front();
		adj[no].pop_front();
		adjinv[no2].remove(no);
		if(adjinv[no2].size()==0)
			iniciais.push_back(no2);
	}
	

}

int main () {
	
	map<string,list<string> >::iterator iter;	
	map<string, int> * elem2;
	
	
	int n,m, teste=1, arestas;
	string nome1, nome2;
	while(true){
		ciclo=0;
		scanf("%d",&n);
		if(n==0)break;
		iniciais.clear();
		for(int i=0;i<n;i++){
			cin >>nome1;
			//iniciais.push_back(nome1);
		}
		saida.clear();
		arestas=0;
		adj.clear();
		adjinv.clear();
		vis.clear();
		
		for(int i=0;i<n;i++){
			cin >>nome1>>m;
			for(int j=0;j<m;j++){
				cin >>nome2;
				adj[nome2].push_back(nome1);
				adjinv[nome1].push_back(nome2);
				//iniciais.remove(nome2);

				
			}
			if(m==0)
				iniciais.push_back(nome1);
				
		}
		
		
		while(iniciais.size()!=0){
			//printf("ae");

			visit(iniciais.front());
			
		}
		
		for (iter = adj.begin(); iter != adj.end(); iter++) {
			if(iter->second.size()!=0){
				ciclo=1;
				break;
			}
		}
		
		printf("Teste %d\n",teste);
		if(saida.size()==0||ciclo==1)printf("impossivel");
		while(saida.size()!=0&&ciclo!=1){

			cout<< saida.front()<<" ";
			saida.pop_front();
		}
		printf("\n\n");
		teste++;
	
	}

	return 0;
}