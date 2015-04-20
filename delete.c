/*delete.c 削除*/
#include"hotel.h"

delete(){
  int i=0,roomno;
  FILE *file;
 
    printf("\n===削除処理===\n");
 
    file=fopen("reservation.txt","r");
    fseek(file,0,SEEK_SET);

   while(fscanf(file,"%d %s %s %s %d %s %d\n",&customer[i].p_reservation_r,customer[i].p_name_r,customer[i].p_tel_r,customer[i].p_address_r,&customer[i].p_charge_r,customer[i].p_roomTyp_r,&customer[i].p_roomNo_r)!=EOF){

      i++;

      }
   END2=i;

   printf("\n予約を削除する場合は顧客の部屋番号を入力してください:");
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
	printf("削除しました\n");
	
	
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

}
