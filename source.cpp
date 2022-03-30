
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
/*
find the greater than or equal to given element of index in the array
*/
int main(){
int n, x;
cin>>n>>x;
vector<int> a(n);
for(auto &el : a) cin>>el;
int l=-1, r=n;
while(r>l+1){
	int mid=(l+r)/2;
	if(a[mid]<x){
		l=mid;
	}else{
		r=mid;
	}
}
if(r==n) cout<<"no element"<<endl;
else cout<<r<<endl;
}

/*
find the  less than or equal to given element in the given array
*/

int main(){
int n, x;
cin>>n>>x;
vector<int> a(n);
for(auto &el : a) cin>>el;
int l=-1, r=n;
while(r>l+1){
	int mid=(l+r)/2;
	if(a[mid]<x){
		l=mid;
	}else{
		r=mid;
	}
}
cout<<l<<endl;
}