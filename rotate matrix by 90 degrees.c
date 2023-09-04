#include<stdio.h>
void main(){
	int a[3][3];
	int t[3][3];
	int n,i,j;
	printf("enter number");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		t[i][j]=a[j][i];
	}
}

for(i=0;i<3;i++){
	printf("\n");
		for(j=2;j>=0;j--){
			printf("%d\t",t[i][j]);
}
}
}


