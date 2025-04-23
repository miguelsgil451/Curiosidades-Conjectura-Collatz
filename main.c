#include <stdio.h>

int isEven(int num)
{
        if(num % 2 == 0)
        {
                return 0; // Is even
        }
        else
        {
                return 1; // Is odd
        }
}   

int main()
{
        int max_number = 10000;
        for (int i = 0; i<max_number;i++) {
                if (i == 0) {
                        continue;
                }
                int source_number = i;
                int climbs = 0;
                int decent = 0;
                printf("Source Number: %d\n", source_number);
                while (1)
                {
                        if (source_number == 1)
                        {
                                break;
                        }
                        if (isEven(source_number) == 0)
                        {
                                source_number = source_number/2;
                                decent+=1;
                        } else if (isEven(source_number) == 1)
                        {
                                source_number = source_number*3;
                                source_number = source_number+1;
                                climbs+=1;
                        }
                }
                printf("Climbs: %d\n", climbs);
                printf("Decent: %d\n\n", decent);
        }
        
        return 0;
}
