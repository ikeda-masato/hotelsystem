/*output.c 削除*/
#include"hotel.h"

output(){
  int i=0,roomno;
  FILE *file;

  printf("\n===チェックアウト処理===\n\n");
  
  file=fopen("customer.txt","r");
  fseek(file,0,SEEK_SET);

  while(fscanf(file,"%d %s %s %s %d %s %d\n",&customer[i].p_reservation,customer[i].p_name,customer[i].p_tel,customer[i].p_address,&customer[i].p_charge,customer[i].p_roomTyp,&customer[i].p_roomNo)!=EOF){

      i++;

      }
  END=i;
  printf("チェックアウトする場合は顧客の部屋番号てください：");
  scanf("%d",&roomno);
  for(i=0;i<END;i++){
        
    if(roomno==customer[i].p_roomNo){
      customer[i].p_reservation=customer[i+1].p_reservation;
      strcpy(customer[i].p_name,customer[i+1].p_name);
      strcpy(customer[i].p_tel,customer[i+1].p_tel);
      strcpy(customer[i].p_address,customer[i+1].p_address);
      customer[i].p_charge=customer[i+1].p_charge;
      strcpy(customer[i].p_roomTyp,customer[i+1].p_roomTyp);
      customer[i].p_roomNo=customer[i+1].p_roomNo;
      customer[i+1].p_reservation=customer[i+2].p_reservation;
      strcpy(customer[i+1].p_name,customer[i+2].p_name);
      strcpy(customer[i+1].p_tel,customer[i+2].p_tel);
      strcpy(customer[i+1].p_address,customer[i+2].p_address);
      customer[i+1].p_charge=customer[i+2].p_charge;
      strcpy(customer[i+1].p_roomTyp,customer[i+2].p_roomTyp);
      customer[i+1].p_roomNo=customer[i+2].p_roomNo;
    }  
  }
  printf("チェックアウトしました\n"); 
  fseek(file,0,SEEK_END);
  fclose(file);
  
  file=fopen("customer.txt","w");
    fseek(file,0,SEEK_SET);
    for(i=0;i<END-1;i++){
      fprintf(file,"%d ",customer[i].p_reservation);
      fprintf(file,"%s ",customer[i].p_name);
      fprintf(file,"%s ",customer[i].p_tel);
      fprintf(file,"%s ",customer[i].p_address);
      fprintf(file,"%d ",customer[i].p_charge);
      fprintf(file,"%s ",customer[i].p_roomTyp);
      fprintf(file,"%d\n",customer[i].p_roomNo);
    }
    fseek(file,0,SEEK_END);
    fclose(file);
    
}
