#include<stdio.h>
int y(int x){
	return x;
}
int main(){
int	n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a[n];
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++){
		int a[n],c;
		c=y(a[i]);
	printf("%d\n",c);
}
	return 0;
}
