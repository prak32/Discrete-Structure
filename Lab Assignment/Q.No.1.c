#include<stdio.h>
#include<conio.h>
int a[10],b[10],c[10],d[10],i,j,k=0,n,m,flag=0;
void unio()
{
 for(i=0;i<n;i++)
 {
 c[k]=a[i];
 k++; }
for(i=0;i<m;i++)
 {
flag=0;
 for(j=0;j<n;j++)
 {
 if(b[i]==a[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 c[k]=b[i];
 k++;
 }
}
printf("\n Union:\n");
for(i=0;i<k;i++)
{
printf("%d ",c[i]);
}
}
void intersection()
{
 printf("\nIntersections:\n");
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 if(a[i]==b[j])
 printf("%d ",a[i]);
 }
 }
}
void difference()
{
 printf("\nA-B\n");
 for(i=0;i<n;i++)
 {
 flag=0;
 for(j=0;j<m;j++)
 {
 if(a[i]==b[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 printf("%d ",a[i]);
 }
 printf("\n\nB-A\n");
 for(i=0;i<m;i++)
 {
 flag=0;
 for(j=0;j<n;j++)
 {
 if(b[i]==a[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 printf("%d ",b[i]);
 }
}
void symmetric_diff()
{
 k=0;
 for(i=0;i<n;i++)
 {
 flag=0;
 for(j=0;j<m;j++)
 {
 if(a[i]==b[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 d[k]=a[i];
 k++;
 }
 }
 for(i=0;i<m;i++)
 {
 flag=0;
 for(j=0;j<n;j++)
 {
 if(b[i]==a[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 d[k]=b[i];
 k++;
 }
 }
 
 printf("\n(A-B)U(B-A):\n");
 for(i=0;i<k;i++)
 {
 printf("%d ",d[i]);
 }
}
int main()
{
 printf("Enter the size of first set A\n");
 scanf("%d",&n);
 printf("Enter the element of first set A\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the size of second set B\n");
 scanf("%d",&m);
 printf("Enter the elements of second set B\n");
 for(j=0;j<m;j++)
 {
 scanf("%d",&b[j]);
 }
 unio();
 printf("\n");
 intersection();
 printf("\n");
 printf("difference of set:\n");
 difference();
 printf("\n");
 symmetric_diff();
 printf("\n");
 return 0;
 }

