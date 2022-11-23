#include <stdio.h>
#include <stdlib.h>
struct dugum{
   int icerik;
   struct dugum*sonraki
   };


    void ekranayazdugumu(struct dugum*q){
    while(q->sonraki!=NULL){
        printf("%d",q->icerik);
        q=q->sonraki;
    }
    }
   void siraliekle(int icerik,struct dugum **listebasi){
       struct dugum *a,*b,*eklenen;
       b=*listebasi;
       while(b!=NULL && b->icerik<=icerik){
        a=b;
        b=b->sonraki;
       }
       eklenen=(struct dugum*)malloc (sizeof (struct dugum));
       eklenen->icerik=icerik;
       if(b==*listebasi){

         eklenen->sonraki=*listebasi;
         *listebasi=eklenen;
       }
       else{
       a->sonraki=eklenen;
       eklenen->sonraki=b;






       }





       }







int main()
{ struct dugum*listebasi;
listebasi=(struct dugum*)malloc (sizeof (struct dugum));
listebasi=NULL;
siraliekle(25,listebasi);
ekranayazdugumu(listebasi);
siraliekle(1,listebasi);
siraliekle(190,listebasi);
siraliekle(6,listebasi);
siraliekle(66,listebasi);
siraliekle(100,listebasi);
siraliekle(999,listebasi);
siraliekle(99,listebasi);
siraliekle(66,listebasi);
siraliekle(61,listebasi);
ekranayazdugumu(listebasi);








    return 0;
}
