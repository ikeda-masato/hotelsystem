/*searchmain.c　検索めいん*/

#include "hotel.h"

void search(void);
void searchcustom(void);

searchmain(){
  int mno;
  
  while(1){
    printf("\n===検索処理====\n\n");
    printf("1:宿泊者情報検索\n");
    printf("2:予約者情報検索\n");
    printf("3:終了\n\n");
    printf("メニュー番号を選んでください。：");
    scanf("%d",&mno);
    
    switch(mno){
    case 1:
      searchcustom();
      break;
    case 2:
      search();
      break;
    default:
      break;
    }
    
    if(mno==3)
      break;
  }
}
