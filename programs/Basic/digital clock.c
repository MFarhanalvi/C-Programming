 #include<stdio.h>
 #include<windows.h>
 #include<conio.h>
 void main()
 {
     system("color 0b");
     int h=0,m=0,s=0;
     double i;
     printf("Enter Time in HH-MM-SS format:");
     scanf("%d-%d-%d",&h,&m,&s);
     start:;
     for(h;h<24;h++){
        for(m;m<60;m++){
            for(s;s<60;s++){
                    system("cls");
                printf("\n\n\n\n\n\n\n\n\n\t\t\t\t%d:%d:%d\n",h,m,s);
                for(i=0;i<111111900;i++){
                    i++;
                    i--;
                }
            }
        s=0;}
     m=0;}
     goto start;
 }
