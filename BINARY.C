#include<stdio.h>
#include<conio.h>
void binary_search(int[],int,int);
int main()
{
int  a[50], i,s,n;
printf("Binary Linear Search ");
printf("\n How many Elements Do you Want : \n");
scanf("%d",&n);
printf("\nEnter  %d  Elements: \n", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
printf("Enter Element to Search : ");
scanf("%d", &s);
binary_search(a,n,s);
getch();
return 0;
}
void binary_search(int a[],int n,int s)
{
int f = 0, r =n,mid;
while (f <= r) {
mid = (f+r)/2;

if (a[mid] == s)
{
printf("\nSearch Element  : %d  : Found :  Position : %d.\n",s, mid+1);
break;
}
else if (a[mid] < s)
f = mid + 1;
else
r = mid - 1;
}
if (f > r)
printf("\nSearch Element : %d  : Not Found \n", s;
}


