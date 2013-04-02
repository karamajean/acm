#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

#define SWAP(a,b) (a ^= b,b = a ^ b,a ^= b)

int main()
{
    int num1,num2,num3;
    int length;
	int max=0;
    int i;

    //while (scanf("%s", buffer)!=EOF) // 這個比較好
    while (scanf("%d %d", &num1,&num2)==2) // 引數配對為1
    {
        printf("num1 = %d\n", num1);
        printf("num2 = %d\n", num2);
        if ( num1 < 1 || num2 >= 10000  ) return 0;
		if (num1 > num2) SWAP(num1,num2);

        if ( num1 < num2 )
        {
            for (i=num1; i<num2+1; i++)
            {
				length =0;
                num3 = i;

                if (num3==1) 
				{
					length +=1 ;
				}
				length +=1;
                while ( num3 != 1 )
                {					
					dbg_printf("num3 = %d\n",num3);
                    if ( num3%2 == 0)
                    {
						//sleep(1);
                        num3 /= 2;
                        length +=1;
						dbg_printf("num3 = %d\n",num3);
                    }
                    else if( num3%2 == 1)
                    {
						
                        num3 = (num3*3)+1;
                        length +=1;
						dbg_printf("num3 = %d\n",num3);
                    }
                }
				dbg_printf("length = %d, max = %d\n", length, max);
				if( length > max) max = length;
				dbg_printf("length = %d, max = %d\n", length, max);
				printf("\n");
            }
        }
#if 0
        if (num1 > num2)
        {
            for (i=num2; i<num1; i++)
            {


            }

        }
#endif
        printf("max = %d",max);
    }
    return 0;
}
