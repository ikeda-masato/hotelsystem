/*search.c 検索*/
#include"hotel.h"

search(){
  int i,roomno;
  FILE *file;

  printf("\n===検索処理===\n");
  file=fopen("reservation.txt","r");
  fseek(file,0,SEEK_SET);
  for(i=0;i<MAX;i++){
    fscanf(file,"%d %s %s %s %d %s %d",&customer[i].p_reservation_r,customer[i].p_name_r,customer[i].p_tel_r,customer[i].p_address_r,&customer[i].p_charge_r,customer[i].p_roomTyp_r,&customer[i].p_roomNo_r);
  }
  for(i=0;i<MAX;i++){
    
  printf("\n予約者情報を検索する場合は部屋番号を入力、\n終了する場合は0を入力してください：");
  scanf("%d",&roomno);
  
  if(roomno==0)
    break;
  

  if(roomno==customer[i].p_roomNo_r)
      printf("予約日は%dです\n",customer[i].p_reservation_r);
      printf("予約者の名前は%sです\n",customer[i].p_name_r);
      printf("予約者の電話番号は%sです\n",customer[i].p_tel_r);
      printf("予約者の住所は%sです\n",customer[i].p_address_r);
      printf("予約者の料金は%dです\n",customer[i].p_charge_r);
      printf("予約者の部屋のタイプは%sです\n",customer[i].p_roomTyp_r);
      printf("予約者の部屋番号は%dです\n",customer[i].p_roomNo_r);

      break;

    }

  fseek(file,0,SEEK_END);

  fclose(file);
}
  
