/* sale.c  売上*/

#include"hotel.h"

sale(){
  int i=0,day=0,sum=0;
  FILE *file;
  
  printf("\n===売上の処理===\n\n");

  file=fopen("customer.txt","r");
  fseek(file,0,SEEK_SET);
  
  while(fscanf(file,"%d %s %s %s %d %s %d\n",&customer[i].p_reservation,customer[i].p_name,customer[i].p_tel,customer[i].p_address,&customer[i].p_charge,customer[i].p_roomTyp,&customer[i].p_roomNo)!=EOF){

      i++;
  
  }
  END=i;
  printf("売上を出力する日付を入力してください：");
  scanf("%d",&day);
  for(i=0;i<END;i++){
    
    if(day==customer[i].p_reservation)
      sum=sum+customer[i].p_charge;
  }
  printf("%d日の合計売上は￥%dです。\n",day,sum);
}
