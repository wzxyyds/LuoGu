#include <stdio.h>
int min(int a,int b);
int main()
{
    int a[5000005],d[5000005],n,p,ans;
    scanf("%d%d",&n,&p);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        d[i]=a[i]-a[i-1];
    }
    for(int i=1;i<=p;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        d[x]+=z;
        d[y+1]-=z;
    }
    ans=d[1];
    for(int i=1;i<=n;i++)
    {
        a[i]=a[i-1]+d[i];
        ans=min(a[i],ans);
    }
    printf("%d",ans);
    return 0;
}
int min(int a,int b){
    if(a>b)return b;
    else return a;
}