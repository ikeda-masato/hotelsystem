/*inputmain.c　入力めいん*/

#include "hotel.h"

void input(void);
void reservation(void);
void delete(void);

inputmain(){
  int mno;

  END=0;

  while(1){
    printf("\n===入力処理====\n\n");

    printf("1:チェックイン処理\n");
    printf("2:予約処理\n");
    printf("3:削除処理\n");
    printf("4:終了\n\n");

    printf("メニュー番号を選んでください。：");
    scanf("%d",&mno);

    switch(mno){
    case 1:
      input();
      break;
    case 2:
      reservation();
      break;
    case 3:
      delete();
      break;
    default:
      break;
    }

    if(mno==4)
      break;
  }
}
