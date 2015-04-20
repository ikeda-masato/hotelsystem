/*outputmain.c  出力 */

#include "hotel.h"

void output(void);
void sale(void);

outputmain(){
  int menu;

  ;

  while(1){
    printf("\n===出力処理====\n\n");

    printf("1:チェックアウト処理\n");
    printf("2:売上の出力\n");
    printf("3:終了\n");
    
    printf("メニュー番号を入力してください：");
    scanf("%d",&menu);

    switch(menu){
    case 1:
      output();
      break;
    case 2:
      sale();
      break;
    default:
      break;
    }

    if(menu==3)
      break;
  }
}
