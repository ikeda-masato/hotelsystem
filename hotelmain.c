/*main.c　おおもとのプログ*/

#include "hotel.h"

void inputmain(void);
void searchmain(void);
void outputmain(void);
void revision(void);

int main(void){
  int mno;

  END=0;

  while(1){
    printf("\n====ホテル管理システム====\n");

    printf("1:入力処理\n");
    printf("2:検索処理\n");
    printf("3:出力処理\n");
    printf("4:修正処理\n");
    printf("5:終了\n\n");

    printf("メニュー番号を選んでください。：");
    scanf("%d",&mno);

    switch(mno){
    case 1:
      inputmain();
      break;
    case 2:
      searchmain();
      break;
    case 3:
      outputmain();
      break;
    case 4:
      revision();
      break;
    default:
      break;
    }
    if(mno==5)
      break;
  }
}
