/*search2.c 検索*/
#include"hotel.h"

searchcustom(){
  int i,roomno;
  FILE *file;

  printf("\n\n===検索処理===\n");
  file=fopen("customer.txt","r");
  fseek(file,0,SEEK_SET);
  for(i=0;i<MAX;i++){
    fscanf(file,"%d %s %s %s %d %s %d",&customer[i].p_reservation,customer[i].p_name,customer[i].p_tel,customer[i].p_address,&customer[i].p_charge,customer[i].p_roomTyp,&customer[i].p_roomNo);
  }
  for(i=0;i<MAX;i++){
    
  printf("\n宿泊者情報を検索する場合は部屋番号を入力、\n終了する場合は0を入力してください：");
  scanf("%d",&roomno);
  
  if(roomno==0)
    break;
  

  if(roomno==customer[i].p_roomNo)
      printf("予約日は%dです\n",customer[i].p_reservation);
      printf("予約者の名前は%sです\n",customer[i].p_name);
      printf("予約者の電話番号は%sです\n",customer[i].p_tel);
      printf("予約者の住所は%sです\n",customer[i].p_address);
      printf("予約者の料金は%dです\n",customer[i].p_charge);
      printf("予約者の部屋のタイプは%sです\n",customer[i].p_roomTyp);
      printf("予約者の部屋番号は%dです\n",customer[i].p_roomNo);

      break;

    }

  fseek(file,0,SEEK_END);

  fclose(file);
}
  
