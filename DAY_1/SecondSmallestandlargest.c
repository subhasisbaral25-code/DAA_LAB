#include<stdio.h>
int main(){
int a[100],n,temp;
printf("Enter the size of the array: ");
scanf("%d",&n);

printf("Enter the elements of the array");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}

for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
if(a[i]>a[j]){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
}
}

printf("Second smallest element:%d\n",a[1]);
printf("Second largest element:%d\n",a[n-2]);
return 0;
}