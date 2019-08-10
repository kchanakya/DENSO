#include<stdio.h>
#include<math.h>
int main()
{
    int cost,total=0;
    float disc;
    scanf("%d",&cost);
    scanf("%f",&disc);
    while(cost!=0)
    {
        total += cost;
        cost = trunc(cost - ((disc*cost)/100));
        
    }
    printf("%d",total);
    return 0;
}
