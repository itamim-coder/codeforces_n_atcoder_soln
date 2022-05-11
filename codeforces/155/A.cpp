#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int score[n];
 for (int i=0; i<n; i++){
    scanf("%d", &score[i]);
 }

 int answer = 0, minValue = score[0], maxValue = score[0];

 for (int i=1; i<n; i++){
    if(score[i] > maxValue || score[i] < minValue){
        answer++;
    }
    if(score[i] > maxValue){
        maxValue = score[i];
    }
      if(score[i] < minValue){
        minValue = score[i];
    }

 }
  printf("%d", answer);

}

/* analysis
   max[0]< .....
   min[0]> .....

   4664 --> current max value and Min value
    6496 --> current Max value +1
     5814 --> !max[0]< || min[0]>
      7010 --> current Max value +2
       5762 --> !max[0]< || min[0]>
        5736 --> !max[0]< || min[0]>
         6944 --> !max[0]< || min[0]>
          4850 --> !max[0]< || min[0]>
           3968 --> current Min value +3
            7242 --> current Max value +4

            */




