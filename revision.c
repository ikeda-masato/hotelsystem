/*revision.c 修正処理*/

#include"hotel.h"
 
revision(){
  int i=0,menu,roomno;
  FILE *file;
    printf("\n===修正処理===\n\n");

    file=fopen("reservation.txt","r");
    fseek(file,0,SEEK_SET);

    while(fscanf(file,"%d %s %s %s %d %s %d\n",&customer[i].p_reservation_r,customer[i].p_name_r,customer[i].p_tel_r,customer[i].p_address_r,&customer[i].p_charge_r,customer[i].p_roomTyp_r,&customer[i].p_roomNo_r)!=EOF){
      
      i++;
      
    }
    END2=i;
    printf("予約をしている顧客の部屋番号を入力してください入力してください：\n");
    scanf("%d",&roomno);
   for(i=0;i<END2;i++){
     if(roomno==customer[i].p_roomNo_r){
       customer[i].p_reservation_r=customer[i+1].p_reservation_r;
       strcpy(customer[i].p_name_r,customer[i+1].p_name_r);
       strcpy(customer[i].p_tel_r,customer[i+1].p_tel_r);
       strcpy(customer[i].p_address_r,customer[i+1].p_address_r);
       customer[i].p_charge_r=customer[i+1].p_charge_r;
       strcpy(customer[i].p_roomTyp_r,customer[i+1].p_roomTyp_r);
       customer[i].p_roomNo_r=customer[i+1].p_roomNo_r;
       customer[i+1].p_reservation_r=customer[i+2].p_reservation_r;
       strcpy(customer[i+1].p_name_r,customer[i+2].p_name_r);
       strcpy(customer[i+1].p_tel_r,customer[i+2].p_tel_r);
       strcpy(customer[i+1].p_address_r,customer[i+2].p_address_r);
       customer[i+1].p_charge_r=customer[i+2].p_charge_r;
       strcpy(customer[i+1].p_roomTyp_r,customer[i+2].p_roomTyp_r);
       customer[i+1].p_roomNo_r=customer[i+2].p_roomNo_r;
       
       
     }
   }
   fseek(file,0,SEEK_END);
   fclose(file);
   
   file=fopen("reservation.txt","w");
   fseek(file,0,SEEK_SET);
   for(i=0;i<END2-1;i++){
     fprintf(file,"%d ",customer[i].p_reservation_r);
     fprintf(file,"%s ",customer[i].p_name_r);
     fprintf(file,"%s ",customer[i].p_tel_r);
     fprintf(file,"%s ",customer[i].p_address_r);
     fprintf(file,"%d ",customer[i].p_charge_r);
     fprintf(file,"%s ",customer[i].p_roomTyp_r);
     fprintf(file,"%d\n",customer[i].p_roomNo_r);
   }
   
   fseek(file,0,SEEK_END);
   fclose(file);
   
   file=fopen("reservation.txt","a");
   for(i=0;i<MAX;i++){
     printf("\n修正処理を行います、\n1を入力し以下の項目を入力してください：");
     scanf("%d",&menu);
     
     if(menu==0)
       break;
     
     printf("\n予約する日付を入力してください：");
     scanf("%d",&customer[i].p_reservation_r);
     fprintf(file,"%d ",customer[i].p_reservation_r);
     
     printf("名前を入力してください：");
     scanf("%s",customer[i].p_name_r);
     fprintf(file,"%s ",customer[i].p_name_r);
     
     printf("電話番号を入力してください：");
     scanf("%s",customer[i].p_tel_r);
     fprintf(file,"%s ",customer[i].p_tel_r);
     
     printf("顧客の住所を入力してください：");
     scanf("%s",customer[i].p_address_r);
     fprintf(file,"%s ",customer[i].p_address_r);
     
     printf("料金を入力してください：");
     scanf("%d",&customer[i].p_charge_r);
     fprintf(file,"%d ",customer[i].p_charge_r);
     
     printf("部屋のタイプを入力してください：");
     scanf("%s",customer[i].p_roomTyp);
     fprintf(file,"%s ",customer[i].p_roomTyp);
     
     printf("部屋番号を入力してください：");
     scanf("%d",&customer[i].p_roomNo_r);
     fprintf(file,"%d\n",customer[i].p_roomNo_r);
     
   }
   fclose(file);
}
