#include<bits/stdc++.h>	
#include<unordered_map>	
using namespace std;

// disjoint set union
// it is used to find seperated components


vector<int> parent(10000,0);
vector<int> price(10000,0);
// initialise parent and rank set
void makeSet(int n){
    for(int i=0; i<n; i++){
    	parent[i]=i;
    }
}
// find parent (constant time)
int findPar(int node){
    if(node==parent[node]){
    	return node;
    }
    return parent[node]=findPar(parent[node]);
}
// union two groups (constant time)
void unionOpe(int u, int v){
   	u=findPar(u); 
   	v=findPar(v);
    if(price[u]<price[v]){
    	parent[u]=v;
   	}
    else if(price[v]<price[u]){
    	parent[v]=u;
    }
    else{
   		parent[u]=v;
   		price[v]++;
    }
}


int main(){	
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	
#endif	
	ios_base::sync_with_stdio(false);	
    cin.tie(NULL);	
    cout.tie(0);	
    
    // int t; cin>>t;

    // while(t--){
    // 	solve();
    // }	

    // solve();

}