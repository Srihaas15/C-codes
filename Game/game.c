#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n;
    printf("Enter the number of players:\n");
    scanf("%d",&n);
    char name[n][100];    
    for (int i = 0; i < n; i++) {
    printf("Enter the name of player %d :\n",i+1);
        scanf("%s", name[i]);
    }

    char *arr[]={"Who do you think is the most annoying person?",
                "Who is the ugliest?","Who is the smartest?",
                "Who is the most beautiful?","Who is your crush?",
                "Whats your biggest lie?",
                "What do you regret the most?",
                "What do you think is your greatest acheivement?"};
    int p=sizeof(arr)/sizeof(arr[0]);
   
   
    srand(time(NULL));
    int randomindex1=rand()%p;
    int randomindex2=rand()%n;
    printf("The person who should answer a question is %s\n",name[randomindex2]);    
    printf("And the question is %s\n",arr[randomindex1]);
     
     return 0;


}

