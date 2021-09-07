#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int k;
		int a[100];
		scanf("%d",&k);
		for(int i = 0;i<k;i++){
			scanf("%d",&a[i]);
		}
		int b;
		for(int i = 0;i<k - 1;i++){
			for(int j = i + 1;j<k;j++){
				if(a[i] > a[j]) {
					b = a[i];
					a[i] = a[j];
					a[j] = b;
				}
			}
		}
		printf("%d\n",a[k - 1]+a[k - 2]+a[k - 3]);
	}
}