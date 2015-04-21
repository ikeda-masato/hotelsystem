/*main.c　おおもとのプログ*/
#include "hotel.h"
void inputmain(void);
void search(void);
void outputmain(void);

int main(void){
  int mno;

  END = 0;

  while(1){
    printf("\n====ホテル管理システム====\n");

    printf("1:入力処理\n");
    printf("2:検索処理\n");
    printf("3:出力処理\n");
    printf("4:終了\n\n");

    printf("メニュー番号を選んでください。：");
    scanf("%d",&mno);

    switch(mno){
    case 1:
      inputmain();
      break;
    case 2:
      search();
      break;
    case 3:
      outputmain();
      break;
    default:
      break;
    }

    if(mno==4)
      break;
  }
}
