
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<map>

using namespace std;

int main () {
	int l, d, k,p,r=0;
	cin>>l>>d>>k>>p;
	if(l<d)r=l*k;
	else r=(l/d)*p+l*k;
	cout<<r;
}