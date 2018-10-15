#include <bits/stdc++.h>
using namespace std;
int n,u;
vector<int> v;
int main(){
	while (cin>>n){
		if (!(n+1)){
			break;
		}
		v.push_back(n);
	}
	while (cin>>n){
		if (!(n+1)){
			break;
		}
		u=1;
		for (auto p=v.begin();p!=v.end();p++){
			if (*p==n){
				v.erase(p);
				p--;
				u=0;
			}
		}
		if (u){
			cout<<"-1"<<endl;
		}
	}
	for (auto p=v.begin();p!=v.end();p++){
		printf("%d%c",*p,p+1==v.end()?'\n':' ');
	}
}