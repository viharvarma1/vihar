#include<stdio.h>
int main(){
	int n,i,j,c[1000],sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	c[0]=1;
	for(i=1;i<n;i++)
         {
            if(a[i]>a[i-1])
                c[i]=c[i-1]+1;
            else
                c[i]=1;
         }
      for(i=n-2;i>=0;i--)
      {
          if(a[i]>a[i+1]){
          	if(c[i]>c[i+1]+1)
          	c[i]=c[i];
          	else
          	c[i]=c[i+1]+1;
		  }
            
      }
	for(i=0;i<n;i++){
	
	printf("%d",c[i]);
}
printf("\n");
for(i=0;i<n;i++){
	sum=sum+c[i];
}
printf("%d\n",sum);
}
