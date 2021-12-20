#include<stdio.h>
#include <limits.h>

int main(){
    int a = 100;
    char producer_id;
    int s_year[5],s_month[3],s_day[3],s_hour[3],s_mimutes[3],s_seconds[3];
    int e_year[5],e_month[3],e_day[3],e_hour[3],e_mimutes[3],e_seconds[3];
    
    char title[20];
    FILE *fp;

    //「fprintfExample.txt」のファイルを書き込みモード（"w"）で開く
    fp = fopen("scheduler.ics", "w");
    printf("イベントのタイトルを30文字以内お書きください\n");//Title画面の出力
    scanf("%s",title);//Title画面の入力
    printf("イベントの開催年を半角入力してください\n");//Title画面の出力
    scanf("%d",s_year);
    printf("イベントの開催月を半角入力してください\n");//Title画面の出力
    scanf("%d",s_month);
    printf("イベントの開催日を半角入力してください\n");//Title画面の出力
    scanf("%d",s_day);
    printf("イベントの開催時を半角入力してください\n");//Title画面の出力
    scanf("%d",s_hour);
    printf("イベントの開催分を半角入力してください\n");//Title画面の出力
    scanf("%d",s_mimutes);
    printf("イベントの開催秒を半角入力してください\n");//Title画面の出力
    scanf("%d",s_seconds);
    printf("イベントの終了年を半角入力してください\n");//Title画面の出力
    scanf("%d",e_year);
    printf("イベントの終了月を半角入力してください\n");//Title画面の出力
    scanf("%d",e_month);
    printf("イベントの終了日を半角入力してください\n");//Title画面の出力
    scanf("%d",e_day);
    printf("イベントの終了時を半角入力してください\n");//Title画面の出力
    scanf("%d",e_hour);
    printf("イベントの終了分を半角入力してください\n");//Title画面の出力
    scanf("%d",e_mimutes);
    printf("イベントの終了秒を半角入力してください\n");//Title画面の出力
    scanf("%d",e_seconds);

    //「fprintfExample.txt」に「aは100です」と書き込む
    fprintf(fp, "BEGIN:VCALENDER\n");
    fprintf(fp, "VERSION:2.0\n");
    fprintf(fp, "PRODID:2.0\n");
    fprintf(fp, "BEGIN:VEVENT\n");
    fprintf(fp, "DTSTART:%d%d%d"+"T"+"%d%d%d"+"Z\n",s_year,s_month,s_day,s_hour,s_mimutes,s_seconds);
    fprintf(fp, "DTEND:%s%s%s"+"T"+"%s%s%s"+"Z\n",e_year,e_month,e_day,e_hour,e_mimutes,e_seconds);
    fprintf(fp, "SUMMARY:%s\n",title);
    fprintf(fp, "END:VEVENT\n");
    fprintf(fp, "END:VCALENDAR\n");


    
    
    fprintf(fp, "aは%dです\n", a);

    //「fprintfExample.txt」のファイルを閉じる
    fclose(fp);

    return 0;
}
