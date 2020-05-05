#include <stdio.h>
int main(void) {
	int x1,x2,v1,v2,i;
	scanf("%d",&x1);
	scanf("%d",&v1);
	scanf("%d",&x2);
	scanf("%d",&v2);
	if(v1>v2)
	{
	    if(x1>x2)
            printf("NO");
        else{
            if((x2-x1)%(v1-v2)==0)
                printf("YES");
            else
                printf("NO");
        }
	}
    else if (v2>v1){
        if(x2>x1)
            printf("NO");
        else{
            if((x1-x2)%(v2-v1)==0){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
    }
	
	return 0;
}