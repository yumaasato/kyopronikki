// いもす法で実装
#include<stdio.h>

int a[200010];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		a[l]++;
		a[r]--;
	}
	for(int i=1;i<=200005;i++)a[i]+=a[i-1];
	for(int i=1;i<=200005;i++){
		if(a[i-1]==0&&a[i]!=0)printf("%d ",i);  // 閉区間
		if(a[i-1]!=0&&a[i]==0)printf("%d\n",i); // 開区間
	}
}
