
// JOGO DA COBRINHA

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include<locale.h>

void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    setlocale(LC_ALL," ");
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int i,a,b,c,player[20][2],direcao,mac;
int h,g,pts,tempo;
int som(int f){
    Beep(f,150);/* primeiro a frequ�ncia depois o tempo de dura��o do som */
    return 0;
}
void desenha_lacraia(){
	setlocale(LC_ALL," ");
    a=player[0][0];                       /*pega a posi�o do rabo da lacraia*/
    b=player[0][1];                       /*pega a posi�o do rabo da lacraia*/
    for(i=0;i<20;i++){                    /* todos os vinte peda�os da lacraia */
        gotoxy(player[i][0],player[i][1]);/* coloca o cursor na posi��o */
        printf("%c",42);                  /* coloca cada um dos peda�o da lacraia */
    }
    gotoxy(player[19][0],player[19][1]);/* coloca o cursor na posi��o da cabe�a da lacraia */
    printf("O");    /* imprime a cabe�a da lacraia */
    gotoxy(a,b);    /* coloca o cursor na posi��o do rabo da lacraia */
    printf(" ");    /* apaga o �ltimo caractere da lacraia que � o rabo que tinha ficado para tras */
    gotoxy(59,2);   /*coloca o cursor na posi��o de imprimir os pontos */
    printf("                  ");/* apaga o que estiver escrito */
    gotoxy(59,2);   /* coloca o cursor na posi��o de imprimir os pontos */
    printf("Pontos -%c %d",16,pts);/* imprime os pontos */
    tempo++;        /* soma o tempo */
    if(tempo > 80){ /* tempo que a ma�� pode ficar no mesmo lugar */
        mac=0;      /* para poder colocar outra ma��*/
        gotoxy(h,g);/* coloca o cursor na posi��o da ma�� */
        printf(" ");/* remove a ma�� */
        som(1500);  /* som ma�� mudou de lugar */
    }
}
void atualiza_lacraia(){
	setlocale(LC_ALL," ");
    for(i=0;i<19;i++){                /* a lacraia tem vinte peda�os */
        player[i][0] = player[i+1][0];/* puxa os peda�os da lcraia para tras */
        player[i][1] = player[i+1][1];/* puxa os peda�os da lcraia para tras */
    }
}
int move_lacraia(){
	setlocale(LC_ALL," ");
    for(i=0;i<20;i++){
        c=0;
        if(kbhit())
            c=getch();
        if(c==27)
            return 0;
        if(c==77){                   /* seta p/direita */
            if(direcao==2)som(500);  /* tentou voltar para tras */
            else direcao=0;
        }
        if(c==80){                   /* seta p/baixo */
            if(direcao==3)som(500);  /* tentou voltar para tras */
            else direcao=1;
        }
        if(c==75){                   /* seta p/esquerda */
            if(direcao==0)som(500);  /* tentou voltar para tras */
            else direcao=2;
        }
        if(c==72){                   /* seta p/cima */
            if(direcao==1)som(500);  /* tentou voltar para tras */
            else direcao=3;
        }
    }
    switch(direcao){
        case 0:
            if(player[19][0] < 45){  /* coluna da posi��o da cabe�a da lacraia */
                atualiza_lacraia();  /* puxa os peda�os da lacraia para tras */
                player[19][0]++;     /* move a cabe�a da lacraia para direita */
            }else som(900);          /* som bateu nas bordas */
            break;
        case 1:
            if(player[19][1] < 23){  /* linha da posi��o da cabe�a da lacraia */
                atualiza_lacraia();  /* puxa os peda�os da lacraia para tras */
                player[19][1]++;     /* move a cabe�a da lacraia para baixo */
            }else som(900);          /* som bateu nas bordas */
            break;
        case 2:
            if(player[19][0] > 1){   /* coluna da posi��o da cabe�a da lacraia */
                atualiza_lacraia();  /* puxa os peda�os da lacraia para tras */
                player[19][0]--;     /* move a cabe�a da lacraia para esquerda */
            }else som(900);          /* som bateu nas bordas */
            break;
        case 3:
            if(player[19][1] > 1){   /* linha da posi��o da cabe�a da lacraia */
                atualiza_lacraia();  /* puxa os peda�os da lacraia para tras */
                player[19][1]--;     /* move a cabe�a da lacraia para cima */
            }else som(900);          /* som bateu nas bordas */
            break;
    }
    if(player[19][0]==h&&player[19][1]==g){/* se lacraia comeu a ma�� */
        mac=0;
        pts+=3;
        som(2200);                   /* som comu ma�� */
    }
    return 0;
}
int coloca_maca(){
	setlocale(LC_ALL," ");
    int t=0,u=0;
    //setlocale(LC_ALL," ");
    if(mac==0)tempo=0;
    if(mac==1)return 0;                         /*se j� tem ma�� n�o coloca outra*/
    do{
        h=rand()%45+1;                          /*escolhe coluna da ma��*/
        g=rand()%22+1;                          /*escolhe linh   da ma��*/
        for(i=0;i<20;i++){
            if(h==player[i][0]&&g==player[i][1])/*se algum peda�o da lacraia for = a posi��o da ma�� repete*/
                u=1;                            /*para repetir caso a ma�� esteja sobre a lacraia */
        }
        t++;
        if(t > 1000){                           /* se o sistema demorar muito para escolher a posi��o da ma�� */
            u=0;
            g=1;
            h=1;
        }
    }while(u!=0);
    gotoxy(h,g);             /*coluna e linha da ma��*/
    printf("%c",3);          /* coloca a ma�� no lugar */
    mac=1;                   /* informa que j� tem uma ma�� na tela */
    return 0;
}
int main (){
	setlocale(LC_ALL," ");
	system("color d");
    srand(time(NULL))    ;
    for(i=0;i<47;i++)    {   /* desenha as bordas */
        if(i<24)         {
            gotoxy(0,i)  ;   /* primeira coluna da tela */
            printf("%c",176);
        }
        if(i<24)         {
            gotoxy(46,i) ;
            printf("%c",176);/* 219 caractere branco */
        }
        gotoxy(i,0)      ;   /* primeira linha da tela */
        printf("%c",176) ; 
        gotoxy(i,24)     ;   /* ultima linha da tela */
        printf("%c",176) ;
    }
    for(i=0;i<20;i++)    {   /* coloca a posi�ao da lacraia no vetor */
        player[i][0]=i+5 ;   /* coloca as colunas */
        player[i][1]=10  ;   /* coloca as linhas */
    }
    do{
        desenha_lacraia();
        move_lacraia(   );
        coloca_maca(    );
        Sleep(200       );   /* velocidade da lacraia */
    }while(c != 27);
    return 0;
}

