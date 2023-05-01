#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <conio.c>
#include <string.h>
#include <ctype.h>
/*
struct tarefanum // criar a stuct dentro da função program tbm
{
   char nometarefa[20];
   int prioridade;
   int dia;
   int mes;
   int ano;
};

struct tarefanum tarefa[50];//se o 50 não funcionar colocar a variavel num
*/

void artetarefas()
{
    printf(R"EOF(
                         /$$$$$$$$                             /$$$$$$
                        |__  $$__/                            /$$__  $$
                           | $$  /$$$$$$   /$$$$$$   /$$$$$$ | $$  \__//$$$$$$   /$$$$$$$
                           | $$ |____  $$ /$$__  $$ /$$__  $$| $$$$   |____  $$ /$$_____/
                           | $$  /$$$$$$$| $$  \__/| $$$$$$$$| $$_/    /$$$$$$$|  $$$$$$
                           | $$ /$$__  $$| $$      | $$_____/| $$     /$$__  $$ \____  $$
                           | $$|  $$$$$$$| $$      |  $$$$$$$| $$    |  $$$$$$$ /$$$$$$$/
                           |__/ \_______/|__/       \_______/|__/     \_______/|_______/



    )EOF");
}
void ribenitarefas()
{
    printf(R"EOF(

 /$$$$$$$  /$$ /$$                           /$$       /$$$$$$$$                             /$$$$$$
| $$__  $$|__/| $$                          |__/      |__  $$__/                            /$$__  $$
| $$  \ $$ /$$| $$$$$$$   /$$$$$$  /$$$$$$$  /$$         | $$  /$$$$$$   /$$$$$$   /$$$$$$ | $$  \__//$$$$$$   /$$$$$$$
| $$$$$$$/| $$| $$__  $$ /$$__  $$| $$__  $$| $$         | $$ |____  $$ /$$__  $$ /$$__  $$| $$$$   |____  $$ /$$_____/
| $$__  $$| $$| $$  \ $$| $$$$$$$$| $$  \ $$| $$         | $$  /$$$$$$$| $$  \__/| $$$$$$$$| $$_/    /$$$$$$$|  $$$$$$
| $$  \ $$| $$| $$  | $$| $$_____/| $$  | $$| $$         | $$ /$$__  $$| $$      | $$_____/| $$     /$$__  $$ \____  $$
| $$  | $$| $$| $$$$$$$/|  $$$$$$$| $$  | $$| $$         | $$|  $$$$$$$| $$      |  $$$$$$$| $$    |  $$$$$$$ /$$$$$$$/
|__/  |__/|__/|_______/  \_______/|__/  |__/|__/         |__/ \_______/|__/       \_______/|__/     \_______/|_______/


    )EOF");

}

void artetarefa()
{
    printf(R"EOF(

                                 /$$$$$$$$                             /$$$$$$
                                |__  $$__/                            /$$__  $$
                                   | $$  /$$$$$$   /$$$$$$   /$$$$$$ | $$  \__//$$$$$$
                                   | $$ |____  $$ /$$__  $$ /$$__  $$| $$$$   |____  $$
                                   | $$  /$$$$$$$| $$  \__/| $$$$$$$$| $$_/    /$$$$$$$
                                   | $$ /$$__  $$| $$      | $$_____/| $$     /$$__  $$
                                   | $$|  $$$$$$$| $$      |  $$$$$$$| $$    |  $$$$$$$
                                   |__/ \_______/|__/       \_______/|__/     \_______/



)EOF");

}

void bemvindo()
{
    printf(R"EOF(
                 /$$$$$$$                                  /$$    /$$ /$$                 /$$
                | $$__  $$                                | $$   | $$|__/                | $$
                | $$  \ $$  /$$$$$$  /$$$$$$/$$$$         | $$   | $$ /$$ /$$$$$$$   /$$$$$$$  /$$$$$$
                | $$$$$$$  /$$__  $$| $$_  $$_  $$ /$$$$$$|  $$ / $$/| $$| $$__  $$ /$$__  $$ /$$__  $$
                | $$__  $$| $$$$$$$$| $$ \ $$ \ $$|______/ \  $$ $$/ | $$| $$  \ $$| $$  | $$| $$  \ $$
                | $$  \ $$| $$_____/| $$ | $$ | $$          \  $$$/  | $$| $$  | $$| $$  | $$| $$  | $$
                | $$$$$$$/|  $$$$$$$| $$ | $$ | $$           \  $/   | $$| $$  | $$|  $$$$$$$|  $$$$$$/
                |_______/  \_______/|__/ |__/ |__/            \_/    |__/|__/  |__/ \_______/ \______/

)EOF");


}
void loginroxo()
{
    printf(R"EOF(
                                     /$$                           /$$
                                    | $$                          |__/
                                    | $$        /$$$$$$   /$$$$$$  /$$ /$$$$$$$
                                    | $$       /$$__  $$ /$$__  $$| $$| $$__  $$
                                    | $$      | $$  \ $$| $$  \ $$| $$| $$  \ $$
                                    | $$      | $$  | $$| $$  | $$| $$| $$  | $$
                                    | $$$$$$$$|  $$$$$$/|  $$$$$$$| $$| $$  | $$
                                    |________/ \______/  \____  $$|__/|__/  |__/
                                                         /$$  \ $$
                                                        |  $$$$$$/
                                                         \______/



)EOF");
}
  void registrar()
  {
printf(R"EOF(
                     /$$$$$$$                      /$$             /$$
                    | $$__  $$                    |__/            | $$
                    | $$  \ $$  /$$$$$$   /$$$$$$  /$$  /$$$$$$$ /$$$$$$    /$$$$$$  /$$$$$$   /$$$$$$
                    | $$$$$$$/ /$$__  $$ /$$__  $$| $$ /$$_____/|_  $$_/   /$$__  $$|____  $$ /$$__  $$
                    | $$__  $$| $$$$$$$$| $$  \ $$| $$|  $$$$$$   | $$    | $$  \__/ /$$$$$$$| $$  \__/
                    | $$  \ $$| $$_____/| $$  | $$| $$ \____  $$  | $$ /$$| $$      /$$__  $$| $$
                    | $$  | $$|  $$$$$$$|  $$$$$$$| $$ /$$$$$$$/  |  $$$$/| $$     |  $$$$$$$| $$
                    |__/  |__/ \_______/ \____  $$|__/|_______/    \___/  |__/      \_______/|__/
                                         /$$  \ $$
                                        |  $$$$$$/
                                         \______/
)EOF");
  }


int program()
{
    int menu_tarefas,num=0,resultado,resultado2;
    int dia[30],mes[30],ano[30],prioridade[30];

    textcolor(MAGENTA);

   struct tarefanum
{
   char nometarefa[20];
};
 struct tarefanum tarefastruct[30];

 prioridade[0]=0;
 prioridade[1]=0;
prioridade[2]=0;
prioridade[3]=0;
prioridade[4]=0;
prioridade[5]=0;
prioridade[6]=0;
prioridade[7]=0;
prioridade[8]=0;
prioridade[9]=0;
prioridade[10]=0;
prioridade[11]=0;
prioridade[12]=0;
prioridade[13]=0;
prioridade[14]=0;
prioridade[15]=0;
prioridade[16]=0;
prioridade[17]=0;
prioridade[18]=0;
prioridade[19]=0;
prioridade[20]=0;

  int menu_tarefas2=0,tarefa=1;
  char tecla2;
  int opc_tarefas,save; //opc acho que não é preciso

menu:
    textcolor(MAGENTA);
ribenitarefas();
   textcolor(YELLOW);

    menu2:

  gotoxy(31,14);
printf("Selecione alguma opção de acordo com o que deseja fazer:");


    if(opc_tarefas==1)
    {
        gotoxy(46,18);
        textbackground(WHITE);
        printf("1- Registrar Tarefa\n");
        textbackground(BLACK);
    }
    else
    {
        gotoxy(46,18);
        printf("1- Registrar Tarefa\n");
    }
    if(opc_tarefas==2)
    {
        gotoxy(46,20);
        textbackground(WHITE);
        printf("2- Ver Tarefas\n");
        textbackground(BLACK);
    }
    else
    {
        gotoxy(46,20);
        printf("2- Ver Tarefas\n");
    }

    if(opc_tarefas==3)
    {
      gotoxy(46,22);
      textbackground(WHITE);
      printf("3- Exit");
      textbackground(BLACK);
    }
    else
    {
        gotoxy(46,22);
        printf("3- Exit");
    }

    tecla2=getch();

    if(tecla2=='w')
    {
        opc_tarefas--;
    }
    if(tecla2=='s')
    {
        opc_tarefas++;
    }
    if(tecla2=='\r')
    {
        menu_tarefas2++;//controle do proximo passo não deixa avançar do menu enquanto não for verdade por causa do if abaixo
    }
    if(opc_tarefas>3)
    {
        opc_tarefas=1;
    }
    if(opc_tarefas<1)
    {
        opc_tarefas=3;
    }
    if(menu_tarefas2==0)//Este if
    {
        goto menu2;
    }
/*
gotoxy(46,22);
printf("3- Exit");
*/
switch(opc_tarefas){
case 1:
      num=save;
        num++;
    system("cls");

    textcolor(MAGENTA);
    artetarefa();
    textcolor(YELLOW);

    printf("                                Defina as característica da tarefa que deseja registar!!\n\n\n");
    printf("                                               Digite o nome da tarefa:\n\t\t\t\t\t\t");
    gets(tarefastruct[num].nometarefa);

    printf("                                           Digite a prioridade da tarefa:\n");
    printf("                                             1- Alta 2- Média 3- Baixa\n\t\t\t\t\t\t");
    scanf("%i",&prioridade[num]);
fflush(stdin);

    printf("                                        Digite o dia para finalizar a tarefa:\n\t\t\t\t\t\t");
    scanf("%i",&dia[num]);
    fflush(stdin);

    printf("                                        Digite o mês para finalizar a tarefa:\n\t\t\t\t\t\t");
    scanf("%i",&mes[num]);
    fflush(stdin);

    printf("                                        Digite o ano para finalizar a tarefa:\n\t\t\t\t\t\t");
    scanf("%i",&ano[num]);
    fflush(stdin);

 menu_tarefas2=0;
 save=num;
    system("cls");

    goto menu;

case 2:
    system("cls");
    textcolor(MAGENTA);
      artetarefas();
      textcolor(YELLOW);

num=1;

         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,12);
         printf("Tarefa %i",num);
         textcolor(YELLOW);

         gotoxy(56,13);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,14);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,14);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,14);
         printf("Baixa");
         }
         else{}


         gotoxy(45,15);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }


num=2;


         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,17);
         printf("Tarefa %i",num);
         textcolor(YELLOW);

         gotoxy(56,18);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,19);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,19);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,19);
         printf("Baixa");
         }
         else{}


         gotoxy(45,20);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }



     num=3;


         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,22);
         printf("Tarefa %i\n",num);
         textcolor(YELLOW);

         gotoxy(56,23);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,24);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,24);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,24);
         printf("Baixa");
         }
         else{}


         gotoxy(45,25);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }



         num=4;


         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,29);
         printf("Tarefa %i",num);
         textcolor(YELLOW);

         gotoxy(56,30);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,31);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,31);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,31);
         printf("Baixa");
         }
         else{}


         gotoxy(45,32);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }


         num=5;


         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,34);
         printf("Tarefa %i",num);
         textcolor(YELLOW);

         gotoxy(56,35);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,36);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,36);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,36);
         printf("Baixa");
         }
         else{}


         gotoxy(45,37);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }



         num=6;


         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,39);
         printf("Tarefa %i",num);
         textcolor(YELLOW);

         gotoxy(56,40);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,41);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,41);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,41);
         printf("Baixa");
         }
         else{}


         gotoxy(45,42);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }


         num=7;


         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,44);
         printf("Tarefa %i",num);
         textcolor(YELLOW);

         gotoxy(56,45);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,46);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,46);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,46);
         printf("Baixa");
         }
         else{}


         gotoxy(45,47);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }


          num=8;


         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,49);
         printf("Tarefa %i",num);
         textcolor(YELLOW);

         gotoxy(56,50);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,51);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,51);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,51);
         printf("Baixa");
         }
         else{}


         gotoxy(45,52);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }


         num=9;


         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,54);
         printf("Tarefa %i",num);
         textcolor(YELLOW);

         gotoxy(56,55);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,56);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,56);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,56);
         printf("Baixa");
         }
         else{}


         gotoxy(45,57);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }


          num=10;


         if(prioridade[num]==0)
         {
         }
         else{

         textcolor(MAGENTA);
         gotoxy(55,59);
         printf("Tarefa %i",num);
         textcolor(YELLOW);

         gotoxy(56,60);
         printf(tarefastruct[num].nometarefa);


         if(prioridade[num]==1)
         {
         gotoxy(56,61);
         printf("Alta");
         }
         else if(prioridade[num]==2)
         {
         gotoxy(56,61);
         printf("Média");
         }

         else if(prioridade[num]==3)
         {
         gotoxy(56,61);
         printf("Baixa");
         }
         else{}


         gotoxy(45,62);
         printf("Data de conclusão: %i/%i/%i",dia[num],mes[num],ano[num]);
         }

menu_tarefas2=0;
            gotoxy(45,64);
            printf("\n                                     Pressione qualquer tecla para voltar ao menu\n");
            sleep(3);
            system("cls");
            goto menu;
                 break;

case 3: return 0;



default: textcolor(GREEN);
      printf(R"EOF(


   ___ _____    ___   _____
  /   |  _  |  /   | |  ___|
 / /| | |/' | / /| | | |__ _ __ _ __ ___  _ __
/ /_| |  /| |/ /_| | |  __| '__| '__/ _ \| '__|
\___  \ |_/ /\___  | | |__| |  | | | (_) | |
    |_/\___/     |_/ \____/_|  |_|  \___/|_|


                        )EOF");
    textcolor(WHITE);
    break;

}
}

int main()
{
    char nometarefa[20];
    setlocale(LC_ALL,"Portuguese");

    char login[40],loginver[40], password[40], passwordver[40];

    int menu,opc,opc2;


    system("cls");

    textcolor(MAGENTA);

    bemvindo();

    textcolor(YELLOW);
    gotoxy(2,12);
    printf("                                       Bem vindo ao programa Ribeni Tarefas!!\n\n");
    gotoxy(2,14);
    printf("                          Aqui será o local onde você irá criar a sua conta neste programa\n");
    gotoxy(2,15);
    printf("                                 e logo em seguida se desejar podera realizar login.\n\n");
    gotoxy(2,18);
    printf("                                            Aguarde 3 segundos e depois ");
    gotoxy(2,20);
    printf("                       -----------------------------------------------------------------------------");
    gotoxy(2,22);
    printf("                                      Pressione qualquer tecla para continuar");

    /*
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    */
    getch();

menu_login://volta juntamente com o print do login

    system("cls");

    textcolor(MAGENTA);
    loginroxo();
    textcolor(YELLOW);

    int a=0;
    char tecla;

registrarelogin:
    if(opc==1)
    {
        gotoxy(54,17);
        textbackground(WHITE);
        printf("1- Register\n");
        textbackground(BLACK);
    }
    else
    {
        gotoxy(54,17);
        printf("1- Register\n");
    }
    if(opc==2)
    {
        gotoxy(55,19);
        textbackground(WHITE);
        printf("2- Login\n");
        textbackground(BLACK);
    }
    else
    {
        gotoxy(55,19);
        printf("2- Login\n");
    }

    tecla=getch();

    if(tecla=='w')
    {
        opc--;
    }
    if(tecla=='s')
    {
        opc++;
    }
    if(tecla=='\r')
    {
        a++;
    }
    if(opc>2)
    {
        opc=1;
    }
    if(opc<1)
    {
        opc=2;
    }
    if(a==0)
    {
        goto registrarelogin;
    }

    system("cls");


    switch(opc)
    {

    case 1:
        ;


        textcolor(MAGENTA);
        registrar();
        textcolor(YELLOW);
        FILE * f;

        f=fopen("logins.txt","a+");

        gotoxy(48,16);
        printf("Digite o seu login:\n\t\t\t\t\t\t");
        scanf(" %s",login);
        fflush(stdin);

        gotoxy(47,18);
        printf("Digite o seu password:\n\t\t\t\t\t\t");
        scanf(" %s",password);
        fflush(stdin);

        fprintf(f,"%s\n",login);
        fprintf(f,"%s\n\n",password);

        fclose(f);

        goto menu_login;

        break;

    case 2:

        textcolor(MAGENTA);
        loginroxo();
        textcolor(YELLOW);;
        gotoxy(48,16);
        printf("Digite o seu login:\n\t\t\t\t\t\t");
        scanf(" %s",&loginver);
        fflush(stdin);

        gotoxy(47,18);
        printf("Digite a sua password:\n\t\t\t\t\t\t");
        scanf(" %s",&passwordver);
        fflush(stdin);


          f=fopen("logins.txt","r");

       //   while(feof(fp) == 0)
         //   fscanf


int i;
        char ver[40];
        for(i=0;fscanf(f,"%s",ver)!=EOF;i++)
        {

           // fseek()
            if(i%2==0)
            {
                strcpy(login,ver);
            }
            else
            {
                strcpy(password,ver);
            }
        }
        fclose(f);
        if(strcmp(login, loginver) == 0 && strcmp(password, passwordver) == 0)
        {
            system("cls");
            program();
        }

        break;


    default:
        textcolor(GREEN);
        printf(R"EOF(


   ___ _____    ___   _____
  /   |  _  |  /   | |  ___|
 / /| | |/' | / /| | | |__ _ __ _ __ ___  _ __
/ /_| |  /| |/ /_| | |  __| '__| '__/ _ \| '__|
\___  \ |_/ /\___  | | |__| |  | | | (_) | |
    |_/\___/     |_/ \____/_|  |_|  \___/|_|


                        )EOF");
        textcolor(WHITE);
    }


    return 0;
}


