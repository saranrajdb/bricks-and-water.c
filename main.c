#include <stdio.h>

int main()
{
    int n,p,l=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=a[0],k=a[0];
    for(int i=0;i<n;i++)
    {
        if(c<a[i])
        {
            c=a[i];
            p=i;
        }
    }
    for(int i=0;i<p;i++)
    {
        if(a[i]<=k)
        {
            l=l+(k-a[i]);
        }
        else
        {
            k=a[i];
        }
    }
    printf("%d",l);
}

// input: 7
// input: 3 2 0 4 1 6 5

// output: 7