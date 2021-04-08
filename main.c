#include <stdio.h>
int main(void) {
  int dizi[10],number=0;
  for(int i =0;i<10;i++){
    printf("enter the %d. number",i+1);
    scanf("%d",&dizi[i]);
  }
  for(int i =0;i<10;i++){
    number =0;
    for(int j=0;j<10;j++){
      if(dizi[j]==dizi[i]){
        for(int k =0;k<i;k++){
          if(dizi[k]==dizi[j]){
            number=0;
          }
        }
        number++;
      }
    }
    if(number>1){
      printf("%d is in %d times\n",dizi[i],number);
    }
  }
   return 0;
}
