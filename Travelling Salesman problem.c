#include <stdio.h>

int main() {
    int a[4][4]={0,10,15,20,
                10,0,35,25,
                15,35,0,30,
                20,25,30,0};
    int i,j=0,k,temp,sum=0,x,y,flag=0,min;
    int num[4]={0,1,2,3};
    for(i=0;i<3;i++)
    {
        for(k=1;k<3;k++)
        {
            temp=num[k];
            num[k]=num[k+1];
            num[k+1]=temp;
            for(j=0;j<3;j++)
            {
                x=num[j];
                y=num[j+1];
                sum=sum+a[x][y];
            }
            x=num[j];
            y=num[0];
            sum=sum+a[x][y];
            if(flag==0)
            {
                min=sum;
                flag=1;
            }
            if(min>=sum)
            {
                min=sum;
            }
            sum=0;
        }
    }
    printf("%d",min);
	return 0;
}