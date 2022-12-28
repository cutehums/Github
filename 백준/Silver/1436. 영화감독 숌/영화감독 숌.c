#include <stdio.h>
#include <math.h>

int count_6(int *p,int x)
{
    int count=0;
    int num = 0;
    while(1)
    {
        if(x%10==6){
            num += 6 * pow(10,count);
            count++;
            x/=10;
        }
        else{
            *p = count;
            break;
        }

        // if(x==0)
        //     break;

    }

    return num;
}


int main(){
        int N;
        int end = 666;
        int num;
        int cnt;
        int OneisTrue = 0;
        // N = i;
    scanf("%d", &N);
    // for (int i = 1; i < 200; i++){

        // printf("N은: %d\n",N);
    N -= 1;
    while(N--){
        int thousand = end / 1000;
        
        if (thousand % 10 == 5){
            end += 1000;
            num = end;
            int thousand = end / 1000;
            //
            end -= count_6(&cnt, thousand);
            // printf("cnt: %d\n", cnt);
            continue;
        }
        
        else if (thousand % 10 == 6){
            end++;
            if (end % (int)(pow(10,cnt)) == pow(10,cnt)-1){
                OneisTrue = 1;
            }
            else if (OneisTrue == 1){
                end = num + 1000;
                OneisTrue = 0;
            }
            continue;
        }
        else{
            end += 1000;
        }
    
    // }
    }
    printf("%d\n",end);
    
    return 0;    
}




    
