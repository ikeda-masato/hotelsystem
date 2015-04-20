/*reservation.c よやく*/
#include "hotel.h"

reservation()
{
  int i,menu;
  FILE *file;
  
  
  printf("\n====予約処理====\n");
  file=fopen("reservation.txt","a");
  for(i=0;i<MAX;i++){
    printf("\n予約処理を行う場合は1、\n終了する場合は0を入力してください：");
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
  END2=i;
}
