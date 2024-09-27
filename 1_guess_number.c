#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int num=rand()%100;
    int upper_limit=100;
    printf("Please guess a number between 1 and 100,(it will give you some hints once you enter a number)\n");
    int guess;
    scanf("%d",&guess);
    int num_of_tries=0;
    while(guess!=num)
        {
            if(guess>num)
                {
                    printf("it is bigger than the answer\n");
                }
            else
                {
                    printf("it is smaller than the answer\n");
                }
            printf("Please guess again\n");
            scanf("%d",&guess);
            num_of_tries++;
            if(num_of_tries>=6)
                {
                    printf("Sorry,you fail");
                    goto end;
                }

        }
    printf("Congratulations!");
    end:return 0;
}
