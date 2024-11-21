
#include<stdio.h>

int main(){
int size,i,Smallest=100;

printf("\t\t *** Array Smallest Number Finder *** \n\n");

printf("Enter Array Size:");
scanf("%d",&size);


int numbers[size];

printf("Enter Array Element:\n");
for(i=0;i<size;i++){
    printf("%d",i);
    scanf("%d",&numbers[i]);


    if (numbers[i]<Smallest){
        Smallest=numbers[i];
    }

}

printf("\n Smallest Number:%d",Smallest);

return 0;
}
