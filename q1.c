#include<stdio.h>
int main()
{
  int n,a,b,k;
  scanf("%d %d %d %d",&n,&a,&b,&k);
  int count=0,f=0,i;
  for(i=1;i<=n;i++){
    if(i%a==0&&i%b!=0){
      count++;
    }
    else if(i%b==0){
      f++;
    }
  }
  if(count+f>=k){
    printf("win");
  }
  else{
    printf("lose");
  }
   return 0;
}
