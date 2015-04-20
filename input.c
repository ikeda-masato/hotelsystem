/*input.c チェックイン*/
#include"hotel.h"

input()
{
  FILE *file;
  int i,menu;

  printf("===チェックイン処理===\n");
  file=fopen("customer.txt","a");
  for(i=END;i<MAX;i++){
    
    printf("\nチェックイン処理を行う場合は1を、\n終了する場合は0を入力してください：");
    scanf("%d",&menu);

    if(menu==0)
      break;

    if(menu==1)
    printf("\n今日の日付を入力してください：");
    scanf("%d",&customer[i].p_reservation);
    fprintf(file,"%d ",customer[i].p_reservation);

    printf("名前を入力してください：");
    scanf("%s",customer[i].p_name);
    fprintf(file,"%s ",customer[i].p_name);

    printf("電話番号を入力してください：");
    scanf("%s",customer[i].p_tel);
    fprintf(file,"%s ",customer[i].p_tel);

    printf("住所を入力してください：");
    scanf("%s",customer[i].p_address);
    fprintf(file,"%s ",customer[i].p_address);

    printf("宿泊料金を入力してください：");
    scanf("%d",&customer[i].p_charge);
    fprintf(file,"%d ",customer[i].p_charge);

    printf("部屋のタイプを入力してください：");
    scanf("%s",customer[i].p_roomTyp);
    fprintf(file,"%s ",customer[i].p_roomTyp);

    printf("部屋番号を入力してください：");
    scanf("%d",&customer[i].p_roomNo);
    fprintf(file,"%d\n",customer[i].p_roomNo);
    

  }
  fclose(file);
  END=i;
}
