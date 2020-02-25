
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>
main()
{
int dice1, dice2, dice3, dice4, dice5, dice6, diceB, diceC, diceE, diceF, diceG, diceL, diceM, diceN, diceP = 0, diceQ = 0, diceR = 0, diceQ1 = 0, diceS = 0, diceT = 0, diceZ = 0, diceZB = 0, diceZC = 0;
int ctr = 0, ctr2 = 0, playerhp = 5, enemyhp = 5, contest = 0, consecvic = 0, consecvic2 = 0, consectr = 0, spctrbon = 0, ctrbonon = 0, ctrbondef = 0, consecvic3 = 0, spctrbon2 = 0;
int spatt = 0, supspatt = 0, hypsp = 0, enspcomb1 = 0, enspcomb2 = 0, enspcomb3 = 0, enemspcombC = 0, c = 0, d = 0, e = 0, f = 0, g = 0, cpmag = 0, cpmag2 = 0, c2 = 0;
int spmag = 0, spmag2 = 0, magsp = 0, magsp2 = 0, normag = 0, magsp3 = 0, sumag2 = 0, sumag = 0, magsp7 = 0, consecvic5 = 0, consecvic7 = 0, spctrbon7 = 0, spdup = 0, supdup = 0, supdup2 = 0;
int diflev = 0, posdef = 0, posmag = 0, posbon = 0, bonchn = 0, bonchn2 = 0, cpusp = 0, cpusp2 = 0, consecvic4 = 0, spctrbon3 = 0, ultsp = 0, ultsp3 = 0, ultsp4 = 0, ultdup = 0, magdup = 0, magdup2 = 0;
int ans6 = 1, sumag5 = 0, spmag5 = 0, spmag6 = 0, magchn = 0, posmag2 = 0, cpusp3 = 0, spctrdf = 0, mspatt = 0, emgspcom = 0, mspatt2 = 0, emgspcom2 = 0, emgsupatt = 0, emagsup = 0, emagsup6 = 0;
int mspatt3 = 0, emgspcom3 = 0, hypsp2 = 0, spatt2 = 0, supspatt2 = 0, emgspcom4 = 0, mspatt4 = 0, new0 = 1, bonrec5 = 0, dmg = 0, dmg2 = 1, a = 0, b = 0, magdup3 = 0, magdup4 = 0;
int emgspcom5 = 0, emagsup5 = 0, mspatt5 = 0, enspcomb6 = 0, bonrec = 0, magrec = 0, bonrec2 = 0, magrec2 = 0, spmag3 = 0, fghton = 0, fghton2 = 0, new9 = 0, wnct8 = 0, cpuwn8 = 0;
int wnct = 0, cpuwn = 0, wnct2 = 0, wnctrec = 0, new1 = 0, new2 = 0, new3 = 0, new4 = 0, new5 = 0, new6 = 0, cpuwnct = 0, cpuwn2 = 0, new7 = 0, cpuwn3 = 0, wnct3 = 0, new10 = 0, new8 = 0;
int cpuwn4 = 0, wnct4 = 0, cpuwn5 = 0, wnct5 = 0, wnct6 = 0, cpuwn6 = 0, spoff = 0, spoff2 = 0, emgspcom7 = 0, enspcomb1b = 0, enspcomb2b = 0, enspcomb3b = 0, mgoff = 0, mspatt8 = 0, magcom = 0;
int maghyp = 0, maghyp1 = 0, maghyp2 = 0, wnct7 = 0, wnctrec7 = 0, fghton3 = 0, magcom2 = 0, cpulow = 0, boncncl = 0, magcncl = 0, hypsp3 = 0, wnctrecA = 0, prntcor = 0, dubon = 0, cpwncop = 0;
float wnrt = 0, wnrtrec = 0, torwnrt = 0, torwnrt2 = 0, torwnrt3 = 0, wnrt2 = 0, wnrtrec2 = 0, wnrtrec3 = 0, wnrtrec4 = 0, wnrtrec5 = 0, wnrt3 = 0, wnrt6 = 0, wnrt5 = 0, cpuwnrt = 0, cpuwnrt2 = 0;
time_t t;
char choice, ans, ans2, ans3;
srand(time(&t));
do {
++diflev;
++dmg;
enemyhp = 5;
playerhp = 5;
posdef = 0;
if (diflev > 1)
{
enemyhp = (enemyhp) + (10 * diflev);
playerhp = (playerhp) + (5 * diflev);
}
if (dmg > 7)//10 7
{
++dmg2;
dmg = 1;
}
for (contest = 1; contest < 5; contest++)
{
do {
if (posdef == 0)
{
if (diflev < 2)
{
printf("\n\n\n     WELCOME TO TEXT FIGHTER %d\n\n\n", dmg2);
printf("     TEXT LEVEL %d", dmg);
printf(" - FIGHT TEXT %d\n\n\n", contest);
}
if ((dmg2 < 2) && (diflev > 1))
{
printf("     TEXT FIGHTER %d\n\n\n", dmg2);
printf("     TEXT LEVEL %d", dmg);
printf(" - FIGHT TEXT %d\n\n\n", contest);
}
if ((dmg2 > 1) && (diflev > 1))
{
printf("     WELCOME TO TEXT FIGHTER %d\n\n\n", dmg2);
printf("     TEXT LEVEL %d", dmg);
printf(" - FIGHT TEXT %d\n\n\n", contest);
}
}
else
{
if ((cpuwn2 >= 1) && (fghton == 0))
printf("\n");
printf("\n\n     TEXT FIGHTER %d\n\n\n", dmg2);
printf("     TEXT LEVEL %d", dmg);
printf(" - FIGHT TEXT %d \n\n\n", contest);
++fghton;
}
if ((posdef < 1) && (diflev < 2) && (contest < 2))
printf("\n");
printf("     Player HP =  %d\n\n", playerhp);
printf("     CPU HP    =  %d\n\n", enemyhp);
if (cpusp3 > 1)
{
if (new1 < 1)
printf("\n");
if (new1 > 0)
{
printf("\n     NEW RECORD!\n");
new1 = 0;
}
printf("     Special Round Chain Record: %d\n", cpusp3);
}
if (bonrec2 > 2)
{
if ((new2 < 1) && (bonrec2 > 2))
{
printf("\n");
}
if (new2 > 0)
{
printf("\n     NEW RECORD!\n");
new2 = 0;
}
printf("     Bonus Round Chain Record: %d\n", bonrec2);
}
if (magrec2 > 2)
{
if ((new3 < 1) && (magrec2 > 2))
printf("\n");
if (new3 > 0)
{
printf("\n     NEW RECORD!\n");
new3 = 0;
}
printf("     Magic Bonus Round Chain Record: %d\n", magrec2);
}
if ((wnctrec7 > 2) && (new6 > 0) && (wnctrec > 1) && (wnctrecA > 0))
{
printf("\n     NEW RECORD!");
new6 = 0;
}
if (wnctrec > 1)
++wnctrecA;
if (wnctrec > 1)
{
printf("\n     Consecutive Matches Won: %d\n", wnctrec);
}
if ((wnctrec < 2) && (wnctrec7 > 2))
{
printf("\n     Consecutive Matches Won: 0\n");
}
if (wnctrec7 > 2)
{
printf("\n     Consecutive Match Win Record: %d\n", wnctrec7);
}
if (((cpusp3 > 1) && (wnctrec > 1)) || ((wnctrec7 > 2) && (cpusp3 > 1)))
printf("\n");
else
if (((bonrec2  > 2) && (magrec2 > 2)) || ((magrec2 > 2) && (bonrec > 2)))
printf("\n");
else
if (((cpusp3  > 1) && (magrec2 > 2)) || ((bonrec > 2) && (wnctrec > 1)) || ((wnctrec7 > 2) && (bonrec2 > 2)) || ((wnctrec > 1) && (bonrec2 > 2)) || ((wnctrec7 > 2) && (bonrec > 2)))
printf("\n");
else
if (((wnctrec  > 1) && (magrec2 > 2)) || ((wnctrec7  > 2) && (magrec2 > 2)))
printf("\n");
else
if (((bonrec > 2) && (cpusp3 > 1)) || ((bonrec2 > 2) && (cpusp3 > 1)))
printf("\n");
if (ctr2 > 0)
{
printf("\n     Total Won/Lost: %d/%d\n\n", wnct, cpuwn);
printf("     Total Rounds Played: %d\n\n", ctr2);
}
if ((posdef > 0) && ((wnrtrec3 > 0) || (wnrtrec > 0) || (torwnrt > 0) || (wnrt > 0) || (torwnrt == 0)))
printf("\n");
if ((posdef > 0) && ((cpuwnct == 1) && (wnct == 0)))
printf("\n");
if (((fghton > 0) || (cpuwn > 0)) || ((fghton2 < 2) && (cpuwn > 0)))
{
Sleep (300);
if ((posdef > 0) && (torwnrt < 10) && (wnrtrec == 100) && (cpuwn2 < 2))
printf("     Tournament Win Rate:   %.2f%%", torwnrt);
if (((posdef > 0) && (torwnrt < 100) && (torwnrt >= 10) && (wnrtrec == 100) && (cpuwn2 < 2)) || ((posdef > 0) && (torwnrt < 100) && (torwnrt < 10) && (wnrtrec < 100) && (wnrtrec >= 10) && (cpuwn2 < 2)))
printf("     Tournament Win Rate:  %.2f%%", torwnrt);
if (((posdef > 0) && (torwnrt < 1) && (wnrtrec < 1) && (cpuwn2 > 1)) || ((posdef > 0) && (torwnrt >= 10) && (wnrtrec3 < 10) && (cpuwn2 > 1)) || ((posdef > 0) && (torwnrt == 100) && (cpuwn2 < 2)) || ((posdef > 0) && (torwnrt >= 10) && (wnrtrec3 >= 10) && (cpuwn2 > 1)) || ((posdef > 0) && (torwnrt > 0) && (torwnrt < 10) && (wnrtrec3 < 10) && (cpuwn2 > 1)) || ((posdef > 0) && (torwnrt < 100) && (torwnrt >= 10) && (wnrtrec < 100) && (wnrtrec >= 10) && (cpuwn2 < 2)) || ((posdef > 0) && (torwnrt < 100) && (torwnrt < 10) && (wnrtrec < 100) && (wnrtrec < 10) && (cpuwn2 < 2)))
printf("     Tournament Win Rate: %.2f%%", torwnrt);
Sleep(300);
if (((posdef > 0) && (wnrt > 0)) || ((posdef > 0) && (wnrt < 1) && (cpuwn > 0)))
printf("  ");
if (posdef < 1)
printf("     ");
if (((wnrtrec3 >= 10) && (wnrt >= 10)) || ((wnrtrec3 < 10) && (wnrt < 10)) || ((wnrtrec3 < 10) && (wnrt >= 10)))
printf("Win Rate Total/Avg: %.2f%%\n", wnrt);
if ((wnrtrec3 >= 10) && (wnrt < 10))
printf("Win Rate Total/Avg:  %.2f%%\n", wnrt);
if (((wnrtrec > wnrtrec3) && (torwnrt >= wnrt) && (wnrtrec >= wnrt) && (wnrtrec >= torwnrt) && (cpuwn2 <= 1)) || ((wnrtrec > wnrtrec3) && (torwnrt <= wnrt) && (wnrtrec >= wnrt) && (wnrtrec >= torwnrt) && (cpuwn2 <= 1)) || ((wnrtrec > wnrtrec3) && (torwnrt < wnrt) && (wnrtrec < wnrt) && (wnrtrec > torwnrt) && (cpuwn2 <= 1)) || ((wnrtrec > wnrtrec3) && (torwnrt < wnrt) && (wnrtrec < wnrt) && (wnrtrec == torwnrt) && (cpuwn2 <= 1)))
{
Sleep (300);
if (((torwnrt > 0) && (posdef > 0) && (torwnrt != 100) && (wnrtrec == 100)) || ((torwnrt > 0) && (posdef > 0) && (torwnrt != 100) && (wnrtrec > 0) && (wnrtrec3 < 10)) || ((torwnrt > 0) && (posdef > 0) && (torwnrt != 100) && (wnrtrec != 100) && (wnrtrec3 >= 10)))
printf("\n     Tournament Win High: %.2f%%", wnrtrec);
if ((torwnrt > 0) && (posdef > 0) && (torwnrt == 100))
printf("\n     Tournament Win High: %.2f%%", wnrtrec);
}
}
if (cpuwn2 > 0)
Sleep(300);
if (cpuwn2 > 0)
{
if ((cpuwn2 >= 1) && (torwnrt > wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec3 < torwnrt) && (wnrtrec3 > 0) && (prntcor == 0))
{
printf("\n     ");
++prntcor;
++a;
}
if ((cpuwn2 == 1) && (torwnrt < 1) && (torwnrt == wnrt) && (wnrtrec == wnrtrec3) && (wnrtrec == wnrt) && (torwnrt == wnrtrec3) && (prntcor == 0))
{
printf("\n     ");
++prntcor;
++a;
}
if ((prntcor == 0) && (((cpuwn2 > 0) && (torwnrt == wnrt) && (wnrtrec == wnrtrec3) && (wnrt == wnrtrec3)) || ((cpuwn2 > 1) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrt == wnrtrec3))))
{
printf("\n     ");
++prntcor;
++a;
}
if ((cpuwn2 >= 1) && (torwnrt < wnrt) && (wnrtrec == wnrtrec3) && (wnrtrec < wnrt) && (torwnrt == wnrtrec3) && (prntcor == 0))
{
printf("\n     ");
++prntcor;
++a;
}
if ((cpuwn2 > 1) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec > wnrt) && (torwnrt > wnrtrec3) && (prntcor == 0))
{
printf("\n     ");
++prntcor;
++a;
}
if ((cpuwn2 > 1) && (torwnrt > wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec > wnrt) && (torwnrt == wnrtrec3) && (prntcor == 0))
{
printf("\n     ");
++prntcor;
++a;
}
if ((torwnrt < 1) && (cpuwn2 == 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec > wnrt) && (torwnrt == wnrtrec3) && (prntcor == 0))
{
printf("\n     ");
++prntcor;
++a;
}
if ((cpuwn2 > 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec3 > 0) && (prntcor == 0))
{
printf("\n     ");
++prntcor;
++a;
}
if ((cpuwn2 > 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec > torwnrt) && (wnrtrec3 == 0) && (prntcor == 0))
{
printf("\n     ");
++prntcor;
++a;
}
if ((cpuwn2 == 1) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrt == wnrtrec3) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((cpuwn2 >= 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrt > wnrtrec3) && (wnrtrec > wnrt) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((prntcor == 0) && (((cpuwn2 > 0) && (torwnrt == wnrt) && (wnrtrec3 > 0) && (wnrtrec > wnrtrec3) && (wnrt > wnrtrec3)) || ((cpuwn2 > 0) && (torwnrt > wnrt) && (wnrtrec > wnrtrec3) && (wnrt > wnrtrec3)) || ((cpuwn2 > 0) && (torwnrt > wnrt) && (wnrtrec > wnrtrec3) && (wnrt < wnrtrec3))))
{
printf("  ");
++prntcor;
++b;
}
if ((prntcor == 0) && (((cpuwn2 > 0) && (torwnrt == wnrt) && (wnrtrec == wnrtrec3) && (wnrt == wnrtrec3)) || ((cpuwn2 == 0) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec3 == torwnrt)) || ((cpuwn2 > 0) && (torwnrt == wnrt) && (wnrtrec <= wnrtrec3) && (wnrtrec3 == torwnrt))))
{
printf("  ");
++prntcor;
++b;
}
if ((torwnrt > 0) && (cpuwn2 == 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec > wnrt) && (torwnrt == wnrtrec3) && (prntcor == 0))
{
printf("  ");
++b;
}
if ((torwnrt > 0) && (cpuwn2 >= 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec == wnrt) && (torwnrt == wnrtrec3) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((cpuwn2 == 1) && (wnrtrec3 == 0) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec > wnrt) && (torwnrt > wnrtrec3) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((cpuwn2 == 1) && (wnrtrec3 == 0) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec == wnrt) && (torwnrt > wnrtrec3) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((cpuwn2 == 1) && (wnrtrec3 == 0) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec < wnrt) && (torwnrt > wnrtrec3) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((cpuwn2 == 1) && (wnrtrec3 == 0) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec == wnrt) && (torwnrt > wnrtrec3) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((cpuwn2 == 1) && (wnrtrec3 == 0) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec >= wnrt) && (torwnrt > wnrtrec3) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((cpuwn2 == 1) && (wnrtrec3 == 0) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec > wnrt) && (torwnrt == wnrtrec) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((cpuwn2 == 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec3 == 0) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if ((cpuwn2 >= 1) && (torwnrt > wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec3 < torwnrt) && (wnrtrec3 == 0) && (prntcor == 0))
{
printf("  ");
++prntcor;
++b;
}
if (((a > 0) && (b < 1) && (cpuwn2 >= 1) && (torwnrt > 0) && (torwnrt >= 10) && (wnrtrec3 == 0)) || ((a > 0) && (b < 1) && (cpuwn2 > 1) && (wnrtrec3 < 10) && (torwnrt >= 10) && (wnrtrec3 > 0)))
printf("Tournament Win Low:   %.2f%%\n", wnrtrec3);
if (((a > 0) && (b < 1) && (cpuwn2 > 1) && (wnrtrec3 >= 10)) || ((a > 0) && (b < 1) && (cpuwn2 > 1) && (wnrtrec3 < 10) && (torwnrt < 10)) || ((a > 0) && (b < 1) && (cpuwn2 <= 1) && (torwnrt < 1)))
printf("Tournament Win Low:  %.2f%%\n", wnrtrec3);
if (((a < 1) && (b > 0) && (wnrtrec3 >= 10) && (wnrt >= 10)) || ((a < 1) && (b > 0) && (wnrtrec3 < 10) && (wnrt < 10)) || ((a < 1) && (b > 0) && (wnrtrec3 >= 10) && (wnrt < 10)))
printf("Tournament Win Low: %.2f%%\n", wnrtrec3);
if ((a < 1) && (b > 0) && (wnrtrec3 < 10) && (wnrt >= 10))
printf("Tournament Win Low:  %.2f%%\n", wnrtrec3);
prntcor = 0;
a = 0;
b = 0;
}
if (posdef > 0)
printf("\n\n");
if (cpuwn2 <= 1)
printf("\n");
if (cpuwn2 < 1)
printf("\n");
if (cpuwn2 > 1)
printf("\n");
if ((posdef < 1) && (dmg > 1))
printf("\n");
do {
printf("     Round %d\n\n\n", ++ctr);
printf("     Press (N) for Normal Attack   (M) for Magic Heal   (S) for Special Attack\n\n");
printf("  ");
scanf (" %c", &choice);
while ( (getchar()) != '\n' );
{
printf("  ");
}
if (choice == 'N')
{
choice = 'n';
}
if (choice == 'M')
{
choice = 'm';
}
if (choice == 'S')
{
choice = 's';
}
if ((choice != 'n') && (choice != 'm') && (choice != 's'))
{
printf("\n     You pressed the wrong key, try again\n\n\n");
--ctr;
continue;
} while  ((choice != 'n') && (choice != 'm') && (choice != 's'));
diceQ = (rand() % 4) + 1;
if (choice == 'n')
{
{
dice1 = (rand() % 70 + cpusp2 + diflev) + 1;//was 7 now 70
dice2 = (rand() % 50) + 1;//was 5
}
if (dice1 > dice2)
{
if (enemyhp <= 2)
++cpulow;
enemyhp = (enemyhp - 2);//was 2
printf("\n     You execute the Normal Attack!\n");
printf("     CPU HP at %d\n", enemyhp);
++consecvic;
++consectr;
posmag = 0;
posbon = 0;
cpusp = 0;
cpusp2 = 0;
if ((consecvic > 2) && (enemyhp > 0))
{
if (bonchn <= 1)
enemyhp = (enemyhp - 1 * dmg2);//1
if (bonchn >= 2)
enemyhp = (enemyhp - 2 * dmg2);
printf("\n     You get a Bonus Attack!\n");
printf("     CPU HP at %d\n", enemyhp);
if (playerhp > 0)
{
++spctrbon;
++bonchn;
if ((consecvic > 2) && (enemyhp < 1))
++posbon;
}
if (enemyhp < 1)
{
magcncl = magchn;
magchn = 0;
posmag = 0;
}
}
if ((normag > 0) && (enemyhp > 0))
{
if (consecvic > 2)
++dubon;
if (magchn <= 1)
enemyhp = (enemyhp - 1 * dmg2);//1
if (magchn >= 2)
enemyhp = (enemyhp - 2 * dmg2);
printf("\n     You get a Magic Bonus Attack!\n");
printf("     CPU HP at %d\n", enemyhp);
if (playerhp > 0)
{
++spmag;
++sumag;
++posmag;
++magchn;
if (magchn > 1)
{
diceL = (rand() % 10) + 1;
if (diceL < 5)  //5
consecvic = 1;
}
if ((magchn > 2) && (enemyhp < 1))
++posmag2;
if (spmag3 < 2)
normag = 0;
}
if (enemyhp < 1)
{
boncncl = bonchn;
bonchn = 0;
posbon = 0;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
printf("     You defeated the CPU!\n");
if (new6 > 0)
printf("\n     You have a new Consecutive Match Win Record!");
if ((cpulow > 0) && (new6 > 0))
printf("\n");
if (cpulow < 1)
printf("\n     You won in %d rounds with the Normal Attack!\n", ctr);
if (cpulow > 0)
{
printf("     You won in round %d with the Normal Attack!\n", ctr);
if ((new6 < 1) && (ctr > 5))
{
diceQ = (rand() % 4) + 1;
if (diceQ == 1)
printf("\n     It was almost too easy!\n");
if (diceQ == 2)
printf("\n     It was an effective move!\n");
if (diceQ == 3)
printf("\n     They say the direct method is best!\n");
if (diceQ == 4)
printf("\n     It was a good fight!\n");
}
}
if ((new6 > 0) && (cpulow > 0))
{
if ((posbon < 1) && (posmag < 1))
{
if (contest <= 2)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Stay focused for the next fight!\n\n");
if (diceQ == 2)
printf("\n     You used good straightforward technique!\n\n");
if (diceQ == 3)
printf("\n     Keep it up!\n\n");
}
if (contest >= 3)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     It was a straight path to victory!\n\n");
if (diceQ == 2)
printf("\n     That was good standard technique!\n\n");
if (diceQ == 3)
printf("\n     It was a good bout!\n\n");
}
}
}
if ((ctr < 6) && (new6 < 1) && (posbon < 1) && (posmag < 1))
{
diceQ = (rand() % 5) + 1;
if (diceQ == 1)
printf("\n     A good early victory!\n");
if (diceQ == 2)
printf("\n     You beat the opponent easily!\n");
if (diceQ == 3)
printf("\n     Not bad!\n");
if (diceQ == 4)
printf("\n     An impressive early victory!\n");
if (diceQ == 5)
printf("\n     You defeated the opponent quickly!\n");
if  ((posbon < 1) && (posmag < 1))
printf("\n");
}
if ((ctr > 5) && (new6 < 1) && (cpulow > 0))
{
printf("\n");
}
if ((ctr < 6) && (new6 > 0) && (posbon < 1) && (posmag < 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Well-fought!\n");
if (diceQ == 2)
printf("     You fought well!\n");
if (diceQ == 3)
printf("     Excellent!\n");
if  ((posbon < 1) && (posmag < 1))
printf("\n");
}
if ((posbon > 0) && (bonchn < 3))
{
printf("     And you finished the contest with the Bonus!\n");
if (new6 > 0)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     It was a good victory!\n\n");
if (diceQ == 2)
printf("\n     That was a great move!\n\n");
if (diceQ == 3)
printf("\n     That was great!\n\n");
}
if (new6 < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Nice move!\n\n");
if (diceQ == 2)
printf("\n     It was a good move!\n\n");
if (diceQ == 3)
printf("\n     That was a good technique!\n\n");
posmag = 0;
}
}
if ((posmag > 0) && (magchn < 3) && (dubon < 1))
{
printf("     And you ended the fight with the Magic Bonus!\n");
if (new6 > 0)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Good skill!\n\n");
if (diceQ == 2)
printf("\n     Great move!\n\n");
if (diceQ == 3)
printf("\n     Good game!\n\n");
}
if (new6 < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Good move!\n\n");
if (diceQ == 2)
printf("\n     That was a good move!\n\n");
if (diceQ == 3)
printf("\n     That was a nice move!\n\n");
}
}
else if ((posmag > 0) && (magchn < 3) && (dubon > 0))
{
printf("     And you ended the fight with the Double Bonus!\n");
if (new6 > 0)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     A very nice move!\n\n");
if (diceQ == 2)
printf("\n     That was a very good move!\n\n");
if (diceQ == 3)
printf("\n     Excellent manoeuvre!\n\n");
}
if (new6 < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     That was a great move!\n\n");
if (diceQ == 2)
printf("\n     It was a sharp move!\n\n");
if (diceQ == 3)
printf("\n     A skilled technique!\n\n");
}
posmag = 0;
dubon = 0;
}
if ((bonchn > 2) && (posbon > 0))
{
bonrec = bonchn;
if (bonrec > bonrec2)
{
++bonrec5;
bonrec2 = bonrec;
if (bonrec5 > 1)
{
++new2;
}
}
if ((new2 > 0) && (new6 > 0) && (bonchn > 4))
printf("\n");
if (new2 > 0)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     You used some brilliant tactics!\n");
if (diceQ == 2)
printf("     You employed an awesome strategy!\n");
if (diceQ == 3)
printf("     That was expert strategy!\n");
}
if ((bonchn > 4) && (new2 > 0))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Absolutely phenomenal!\n");
if (diceQ == 2)
printf("     Just incredible!\n");
if (diceQ == 3)
printf("     Completely unbelievable!\n");
}
if (((new2 > 0) && (new6 > 0)) || ((new2 < 1) && (new6 > 0)) || ((new2 > 0) && (new6 < 1)))
printf("\n");
printf("     You ended the fight with a Bonus Chain of %d!\n", bonchn);
bonrec5 = 1;
if ((new2 > 0) && (new10 > 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     A new record!\n");
if (diceQ == 2)
printf("     A new Bonus Chain Record!\n");
if (diceQ == 3)
printf("     And it's a new Bonus Chain Record!\n");
}
if ((bonchn > 4) && (new2 < 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Those were very good tactics!\n");
if (diceQ == 2)
printf("     Formidable strategy!\n");
if (diceQ == 3)
printf("     Supreme strategy!\n");
}
if ((bonchn >= 2 ) && (bonchn <= 4))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     It was an excellent finish!\n");
if (diceQ == 2)
printf("     It was an amazing finish!\n");
if (diceQ == 3)
printf("     It was a special finish!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     You showed great skill!\n\n");
if (diceQ == 2)
printf("\n     You used a very skilled technique!\n\n");
if (diceQ == 3)
printf("\n     Nice technique!\n\n");
}
if ((bonchn > 4) && (new2 < 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     It was a stunning fight!\n\n");
if (diceQ == 2)
printf("\n     That was completely outstanding!\n\n");
if (diceQ == 3)
printf("\n     That was really very impressive!\n\n");
}
if ((bonchn > 4) && (new2 > 0))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     It was a fantastic contest!\n\n");
if (diceQ == 2)
printf("\n     It was a magnificent contest!\n\n");
if (diceQ == 3)
printf("\n     It was a very special bout!\n\n");
}
bonrec = bonchn;
posbon = 0;
}
if ((magchn > 2) && (posmag2 > 0))
{
++new8;
magrec = magchn;
if (magrec > magrec2)
{
magrec2 = magrec;
if (new8 > 1)
++new3;
}
if ((new3 > 0) && (new6 > 0) && (magchn > 4))
printf("\n");
if (new3 > 0)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     That was a powerful strategy!\n");
if (diceQ == 2)
printf("     Those were thrilling tactics!\n");
if (diceQ == 3)
printf("     That was an incredible strategy!\n");
}
if ((magchn > 4) && (new3 > 0))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     You didn't fail to impress!\n");
if (diceQ == 2)
printf("     You didn't let up!\n");
if (diceQ == 3)
printf("     How do you do it?\n");
}
if (((new3 > 0) && (new6 > 0)) || ((new3 < 1) && (new6 > 0)) || ((new3 > 0) && (new6 < 1)))
printf("\n");
printf("     You ended the fight with a Magic Bonus Chain of %d!\n", magchn);
if (new3 > 0)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     A new record!\n");
if (diceQ == 2)
printf("     And it's a new Magic Bonus Chain Record!\n");
if (diceQ == 3)
printf("     A new Magic Bonus Chain Record!\n");
}
if ((magchn > 4) && (new3 > 0))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     It was a sensational performance!\n\n");
if (diceQ == 2)
printf("\n     It was a stunning demonstration of skill!\n\n");
if (diceQ == 3)
printf("\n     An amazingly skilled performance!\n\n");
}
if ((magchn > 4) && (new3 < 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Fantastic magic tactics!\n");
if (diceQ == 2)
printf("     A brilliant magic strategy!\n");
if (diceQ == 3)
printf("     A skillful magic strategy!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     That was awesome!\n\n");
if (diceQ == 2)
printf("\n     That was an unbelievable fight!\n\n");
if (diceQ == 3)
printf("\n     That was a spectacular contest!\n\n");
}
if (((magchn >= 2) && (magchn <= 4)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     It was an exciting match!\n");
if (diceQ == 2)
printf("     It was a great match!\n");
if (diceQ == 3)
printf("     It was an excellent match!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     You performed well!\n\n");
if (diceQ == 2)
printf("\n     You fought very well!\n\n");
if (diceQ == 3)
printf("\n     You were on form!\n\n");
}
normag = 0;
posmag2 = 0;
cpulow = 0;
bonchn = boncncl;
boncncl = 0;
magchn = magcncl;
magcncl = 0;
posmag = 0;
posmag2 = 0;
}
break;
}
}
if (dice2 > dice1)
{
printf("\n     You execute the Normal Attack!\n");
printf("     CPU evades!\n\n");
printf("     CPU counter-attacks!\n");
printf("     Player HP at %d\n", --playerhp * dmg2);
consecvic = 0;
consecvic2 = 0;
normag = 0;
sumag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
consectr = 0;
magsp = 0;
bonchn = 0;
cpusp = 0;
cpusp2 = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
if (dice1 == dice2)
{
printf("\n     You execute the Normal Attack!\n");
printf("     CPU defends!\n");
consecvic = 0;
consecvic2 = 0;
normag = 0;
sumag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
magsp = 0;
bonchn = 0;
cpusp = 0;
cpusp2 = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
}
if (choice == 'm')
{
dice3 = (rand() % 14 + cpusp2) + 1; //14
dice4 = (rand() % 11) + 1;
if (dice3 > dice4)
{
++spmag;
++spmag2;
++consecvic2;
++normag;
++magsp;
++consectr;
++spmag3;
if (magchn > 2)
{
sumag5 = sumag2;
spmag6 = spmag2;
spmag5 = spmag;
spmag = 0;
spmag2 = 0;
sumag2 = 0;
}
}
if ((dice3 > dice4) && (spmag < 3) && (spmag2 < 4) && (sumag2 != 1) && (magchn < 3))
{
playerhp = (playerhp + 4 * dmg2);
printf("\n     You cast Magic Heal!\n");
printf("     Player HP at %d\n", playerhp);
cpusp = 0;
cpusp2 = 0;
}
if ((dice3 > dice4) && (spmag > 2) && (spmag2 < 4) && (sumag2 != 1) && (magchn < 3))
{
playerhp = (playerhp + 8 * dmg2);
printf("\n     You get the Magic Heal Bonus!\n");
printf("     Player HP at %d\n", playerhp);
spmag = 0;
cpusp = 0;
cpusp2 = 0;
}
if (magsp2 > 0)
{
++magsp3;
}
if ((sumag2 > 0) && (spmag2 > 3) && (dice3 > dice4) && (spmag >= 0))
{
enemyhp = (enemyhp - 28 * dmg2); //30
printf("\n     You activate the ALPHA MAGIC SUPER COMBO!\n");
printf("     CPU HP at %d\n", enemyhp);
++magsp;
spmag2 = 2;
sumag2 = 0;
++cpusp;
++cpusp2;
if (magsp2 > 0)
{
magsp3 = 1;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((ctr > 8) && (cpusp < 2) && (new6 > 0))
printf("\n");
if (((ctr > 8) && (cpusp < 2) && (new6 < 1)) || ((ctr > 8) && (cpusp < 2) && (new6 > 0)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Awesome technique!\n");
if (diceQ == 2)
printf("     What a sensational move!\n");
if (diceQ == 3)
printf("     Very nice technique!\n");
}
if (((ctr < 9) && (cpusp > 1) && (new6 > 0)) || ((ctr < 9) && (cpusp < 2) && (new6 > 0)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Totally unbelievable!\n");
if (diceQ == 2)
printf("     This is fantastic!\n");
if (diceQ == 3)
printf("     This is unbelievable!\n");
}
if (((ctr < 9) && (cpusp > 1) && (new6 < 1)) || ((ctr > 8) &&  (cpusp > 1) && (new6 < 1)) || ((ctr < 9) &&  (cpusp < 2) && (new6 < 1)) || ((ctr > 8) && (cpusp < 2) && (new6 > 0)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Completely phenomenal!\n");
if (diceQ == 2)
printf("     An amazing performance!\n");
if (diceQ == 3)
printf("     This is phenomenal!\n");
}
if (((ctr < 9) && (new6 < 1) && (cpusp > 1)) || ((ctr > 8) && (cpusp < 2) && (new6 > 0)))
printf("\n");
if (((ctr < 9) &&  (cpusp > 1) && (new6 > 0)) || ((ctr < 9) &&  (cpusp < 2) && (new6 < 1)) || ((ctr < 9) && (cpusp > 1) && (new6 < 1)))
{
diceQ = (rand() % 4) + 1;
if (diceQ == 1)
printf("     You must be a Fight Text Master!\n");
if (diceQ == 2)
printf("     You seem unstoppable right now!\n");
if (diceQ == 3)
printf("     There's just no competition!\n");
if (diceQ == 4)
printf("     Who dares challenge the Master?\n");
}
if (((ctr > 8) && (cpusp > 1) && (new6 > 0)) || ((ctr > 8) && (cpusp < 2) && (new6 > 0)) || ((ctr > 8) && (cpusp > 1) && (new6 < 1)))
{
diceQ = (rand() % 4) + 1;
if (diceQ == 1)
printf("     Aren't you a Text Fighting Master?\n");
if (diceQ == 2)
printf("     You're a Fight Text Legend!\n");
if (diceQ == 3)
printf("     You're on top of the world!\n");
if (diceQ == 4)
printf("     You're in a league of your own!\n");
}
if (((cpusp > 1) && (ctr < 9) && (new6 > 0)) || ((cpusp < 2) && (ctr < 9) && (new6 > 0)) || ((new6 < 1) && (ctr > 8) && (cpusp < 2)))
printf("\n");
if (((new6 < 1) && (ctr > 8) && (cpusp > 1)) || ((ctr < 9) &&  (cpusp < 2) && (new6 < 1)))
printf("\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
if (((ctr < 9) && (new6 < 1) && (cpusp > 1)) || ((ctr > 8) && (new6 > 0) && (cpusp > 1)))
printf("\n");
printf("     You won in %d rounds with the Alpha Magic Super Combo!\n", ctr);
if ((ctr > 8) && (cpusp < 2) && (new6 > 0))
printf("\n");
if (new6 > 0)
printf("     And you have a new Consecutive Match Win Record!\n");
if (((ctr < 9) &&  (cpusp > 1) && (new6 > 0)) || ((ctr > 8) && (cpusp > 1) && (new6 > 0)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Could anyone have doubted who would be victorious?\n");
if (diceQ == 2)
printf("\n     How is it possible for anyone to even do this?\n");
if (diceQ == 3)
printf("\n     How did you even develop these abilities?\n");
}
if (((ctr < 9) &&  (cpusp < 2) && (new6 > 0)) || ((ctr < 9) &&  (cpusp < 2) && (new6 < 1)) || ((ctr > 8) &&  (cpusp < 2) && (new6 > 0)) || ((ctr > 8) &&  (cpusp < 2) && (new6 < 1)) || ((ctr < 9) && (cpusp > 1) && (new6 < 1)))
{
diceQ = (rand() % 6) + 1;
if (diceQ == 1)
printf("     How did you do that?\n");
if (diceQ == 2)
printf("     How is this possible?\n");
if (diceQ == 3)
printf("     How do you do this?\n");
if (diceQ == 4)
printf("     How can this be possible?\n");
if (diceQ == 5)
printf("     What makes this possible?\n");
if (diceQ == 6)
printf("     What makes it possible?\n");
}
if  ((ctr > 8) && (cpusp < 2) && (new6 < 1))
printf("     That was completely magnificent!\n");
if  ((ctr < 9) && (cpusp < 2) && (new6 < 1))
printf("     That was brilliant technique!\n");
if (((cpusp < 2) && (ctr < 9) && (new6 < 1)) || ((new6 < 1) && (cpusp > 1) && (ctr > 8)) || ((ctr > 8) &&  (cpusp < 2) && (new6 > 0)) || ((ctr < 9) &&  (cpusp < 2) && (new6 > 0)))
printf("\n");
if ((ctr > 8) &&  (cpusp < 2) && (new6 > 0))
printf("     That really was fantastic!\n");
if ((ctr > 8) && (cpusp > 1) && (new6 > 0))
printf("     That was totally awesome!\n");
if ((ctr < 9) &&  (cpusp < 2) && (new6 > 0))
printf("     That was absolutely incredible!\n");
if ((cpusp > 1) && (ctr < 9) && (new6 > 0))
printf("     You have entered the Text Fighter Hall of Fame!\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 8))
printf("     An unbelievably powerful finish!\n");
if ((ctr < 9) && (cpusp < 2))
printf("     A stunning finish!\n");
if  ((ctr > 8) && (cpusp < 2) && (new6 < 1))
printf("\n     You're a Text Fighting genius!\n\n");
if (((ctr < 9) && (cpusp < 2)) || ((ctr < 9) && (new6 < 1) && (cpusp > 1)) || ((ctr < 9) && (ctr > 6) && (new6 > 0) && (cpusp > 1)))
printf("\n");
if (((cpusp > 1) && (ctr > 8) && (new6 < 1)) || ((ctr > 8) && (new6 > 0) && (cpusp > 1)) || ((ctr > 8) && (new6 > 0) && (cpusp < 2)))
printf("\n");
if ((ctr < 7) && (cpusp > 1) && (new6 > 0))
printf("     You are the King of Text Fighters!\n\n");
if ((ctr < 9) && (new6 < 1) && (cpusp > 1))
printf("     You are the Ultimate Text Fighter!\n\n");
if ((ctr < 9) &&  (cpusp < 2) && (new6 > 0))
printf("     There can be only one Text Fighting Master!\n\n");
if ((ctr > 8) && (new6 > 0) && (cpusp > 1))
printf("     Can any challenger defeat the Master?\n\n");
if (((ctr < 9) && (ctr > 6)) && ((cpusp > 1) && (new6 > 0)))
printf("     It takes the very best to be a Text Fighting Master!\n\n");
if ((ctr < 7) && (cpusp > 1) && (new6 > 0))
{
printf("     Only a Text Fighting Master could achieve something like this!\n\n");
}
break;
}
if ((dice3 > dice4) && (spmag2 > 3) && (spmag >= 0))
{
enemyhp = (enemyhp - 12 * dmg2);//12 //10
printf("\n     You execute the MAGIC SUPER ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spmag2 = 0;
++cpusp;
++cpusp2;
++magsp;
if (magsp2 > 0)
{
magsp3 = 1;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (((new6 > 0) && (ctr > 5) && (cpusp < 2)) || ((new6 > 0) && (ctr > 5) && (cpusp > 1)))
printf("\n");
if (diceQ == 1)
printf("     A sharp move!\n");
if (diceQ == 2)
printf("     A fantastic move!\n");
if (diceQ == 3)
printf("     A brilliant manoeuvre!\n");
if (diceQ == 4)
printf("     An excellent move!\n");
if (((cpusp < 2) && (ctr < 6) && (new6 < 1)) || ((cpusp > 1) && (ctr < 6) && (new6 < 1)))
printf("\n");
if ((new6 > 0) || ((new6 < 1) && (ctr > 5) && (cpusp > 1)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     And an impressive finish!\n");
if (diceQ == 2)
printf("     You're on top form!\n");
if (diceQ == 3)
printf("     And a stunning victory!\n");
}
if (((cpusp > 1) && (ctr < 6) && (new6 > 0)) || ((cpusp < 2) && (ctr < 6) && (new6 > 0)) || ((cpusp > 1) && (ctr > 5) && (new6 > 0)) || ((new6 > 0) && (ctr > 5) && (cpusp < 2)))
printf("\n");
if ((new6 < 1) && (ctr > 5) && (cpusp > 1))
printf("\n");
if (ctr < 6)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     The contest ended early!\n");
if (diceQ == 2)
printf("     The contest ended quickly!\n");
if (diceQ == 3)
printf("     The bout ended early!\n");
}
if (new6 > 0)
printf("     You've got a new Consecutive Match Win Record!\n");
if ((cpusp > 1) && (ctr < 6) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
if ((new6 > 0) && (ctr > 5) && (cpusp > 1))
printf("\n     It was a very impressive display of skill!\n");
printf("     You won in Round %d with the Magic Super Attack!\n", ctr);
if ((new6 < 1) && (ctr > 5) && (cpusp < 2))
printf("\n     It was a good bout!\n\n");
if ((cpusp < 2) && (ctr < 6) && (new6 < 1))
printf("\n     That was a nice fight!\n\n");
if ((new6 > 0) && (ctr > 5) && (cpusp < 2))
printf("\n     Amazing skill!\n\n");
if ((new6 < 1) && (ctr > 5) && (cpusp > 1))
printf("\n     Incredible skill!\n\n");
if ((cpusp < 2) && (ctr < 6) && (new6 > 0))
printf("\n     Awesome magic skill!\n\n");
if ((new6 > 0) && (ctr > 5) && (cpusp > 1))
printf("\n     That was a spectacular bout!\n\n");
if ((new6 < 1) && (ctr < 6) && (cpusp > 1))
printf("\n     It was a sensational fight!\n\n");
if  ((new6 > 0) && (ctr < 6) && (cpusp > 1))
printf("\n     That's the power of magic!\n\n");
break;
}
if ((dice3 > dice4) && (sumag2 > 0) && (spmag2 >= 0) && (spmag >= 0))
{
enemyhp = (enemyhp - 18 * dmg2);//20
printf("\n     You execute the MAGIC SUPER COMBO!\n");
printf("     CPU HP at %d\n", enemyhp);
sumag2 = 0;
++magsp;
++cpusp;
++cpusp2;
if (magsp2 > 0)
{
magsp3 = 1;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((new6 < 1)  && (cpusp < 2) && (ctr < 8))
printf("\n");
if (diceQ == 1)
printf("     An outstanding move!\n");
if (diceQ == 2)
printf("     Thrilling action!\n");
if (diceQ == 3)
printf("     Sensational skills!\n");
if (diceQ == 4)
printf("     Those were great moves!\n");
if ((ctr < 8) && (cpusp < 2) && (new6 > 0))
printf("     You put on a strong offence!\n");
if ((new6 < 1) && (ctr > 7) && (cpusp < 2))
printf("\n");
if (ctr < 6)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     The fight ended quickly!\n");
if (diceQ == 2)
printf("     The fight ended early!\n");
if (diceQ == 3)
printf("     The bout ended early!\n");
}
if ((new6 > 0) && (cpusp < 2) && (ctr < 8))
printf("\n");
if ((ctr < 8) && (ctr > 5))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     You made it seem effortless!\n");
if (diceQ == 2)
printf("     How do you do it?\n");
if (diceQ == 3)
printf("     These abilities are unbelievable!\n");
}
if (((new6 < 1)  && (cpusp < 2) && (ctr < 8)) || ((new6 > 0) && (cpusp > 1) && (ctr < 8)))
printf("\n");
if (((cpusp < 2) && (ctr > 7) && (new6 < 1)) || ((cpusp > 1) && (ctr > 7) && (new6 < 1)) || ((ctr < 8) && (cpusp > 1) && (new6 < 1)) || ((ctr > 7) && (cpusp > 1) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     You have a new Consecutive Match Win Record!\n");
if (((new6 > 0) && (cpusp < 2) && (ctr < 8)) || ((new6 > 0) && (cpusp < 2) && (ctr > 7)))
printf("\n");
if (cpusp > 1)
printf("     You performed %d Special Attacks in as many rounds!\n", cpusp);
printf("     You won in %d rounds with the Magic Super Combo!\n", ctr);
if (((new6 > 0) && (cpusp > 1) && (ctr < 8)) || ((new6 > 0) && (cpusp > 1) && (ctr > 7)) || ((new6 < 1) && (cpusp > 1) && (ctr > 7)))
printf("\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     It was an excellent combination!\n");
if (diceQ == 2)
printf("     It was a fantastic manoeuvre!\n");
if (diceQ == 3)
printf("     It was a brilliant combination!\n");
}
if (((new6 < 1)  && (cpusp  > 1) && (ctr < 8)) || ((new6 > 0) && (cpusp < 2) && (ctr < 8)) ||  ((new6 < 1)  && (cpusp < 2) && (ctr < 8)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 7)))
printf("\n");
if (((new6 > 0) && (cpusp < 2) && (ctr < 8)) || ((new6 > 0) && (cpusp > 1) && (ctr > 7)))
printf("     And a phenomenal finish!\n");
if (((new6 < 1) && (cpusp > 1) && (ctr < 8)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 7)))
printf("     Incredible sorcery!\n");
if ((new6 < 1)  && (cpusp < 2) && (ctr < 8))
printf("     You displayed great powers!\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 7))
printf("     Amazing strategy!\n");
if (((new6 < 1)  && (cpusp < 2) && (ctr < 8)) || ((new6 > 0) && (cpusp > 1) && (ctr > 7)) || ((new6 > 0) && (cpusp < 2) && (ctr > 7)))
printf("\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 7))
printf("\n");
if ((new6 > 0) && (cpusp < 2) && (ctr > 7))
printf("     That was a magnificent contest!\n\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 7))
printf("     That was an awesome bout!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr < 8)) || ((new6 > 0) && (cpusp > 1) && (ctr > 7)))
printf("     You put on a spellbinding show!\n");
if ((new6 > 0) && (cpusp > 1) && (ctr < 8))
printf("     A masterclass in magic technique!\n");
if (((new6 < 1) && (ctr > 7) && (cpusp < 2)) || ((new6 < 1) && (ctr < 8) && (cpusp > 1)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 7)))
printf("\n");
if (((new6 > 0) && (ctr < 8) && (cpusp < 2)) || ((new6 > 0) && (ctr > 7) && (cpusp > 1)))
printf("\n");
if ((new6 > 0) && (cpusp > 1) && (ctr < 8))
printf("\n     You are the Master Magician!\n\n");
break;
}
if ((dice3 > dice4) && (magchn > 2) && (sumag2 == 0) && (spmag2 == 0) && (spmag == 0))
{
enemyhp = (enemyhp - 18 * dmg2);//18
printf("\n     You execute the HYPER MAGIC BONUS!\n");
printf("     CPU HP at %d\n", enemyhp);
++magsp;
magchn = 0;
++cpusp;
++cpusp2;
sumag2 = sumag5;
spmag2 = spmag6;
spmag = spmag5;
spmag5 = 0;
spmag6 = 0;
sumag5 = 0;
if (magsp2 > 0)
{
magsp3 = 1;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((ctr > 9) && (new6 < 1) && (cpusp > 1))
printf("\n");
if (diceQ == 1)
printf("     That was a great fight!\n");
if (diceQ == 2)
printf("     That was incredible!\n");
if (diceQ == 3)
printf("     An unreal contest!\n");
if (diceQ == 4)
printf("     That was a fantastic contest!\n");
if (((cpusp < 2) && (ctr < 10) && (new6 > 0)) || ((cpusp < 2) && (ctr < 10) && (new6 < 1)))
printf("\n");
if (((ctr < 10) && (new6 > 0) && (cpusp > 1)) || ((ctr < 10) && (new6 < 1) && (cpusp > 1)))
printf("\n");
if (ctr < 7)
printf("     You made it look easy!\n");
if ((ctr < 10) && (ctr > 6))
printf("     You made a very nice move!\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     It was an excellent follow-up!\n");
if (diceQ == 2)
printf("     It was a powerful follow-up!\n");
if (diceQ == 3)
printf("     It was a phenomenal follow-up!\n");
}
if (((ctr < 10) && (cpusp > 1) && (new6 < 1)) || ((ctr > 9) && (cpusp < 2) && (new6 < 1)) || ((ctr > 9) && (cpusp > 1) && (new6 > 0)) || ((ctr > 9) && (new6 > 0) && (cpusp < 2)))
printf("\n");
if ((ctr > 9) && (new6 < 1) && (cpusp > 1))
printf("\n");
if (new6 > 0)
printf("     You demonstrated amazing form!\n");
if (((cpusp < 2) && (ctr < 10) && (new6 > 0)) || ((cpusp > 1) && (ctr < 10) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     You've got a new Consecutive Match Win Record!\n");
if ((cpusp > 1) && (ctr > 9) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
printf("     You won in %d rounds with the Hyper Magic Bonus!\n", ctr);
if ((ctr > 9) && (new6 < 1) && (cpusp < 2))
printf("     A formidable victory!\n");
if (((cpusp > 1) && (ctr < 10)) || ((cpusp < 2) && (ctr < 10) && (new6 < 1)))
printf("\n");
if (((cpusp > 1) && (ctr > 9)) || ((cpusp < 2) && (new6 > 0) && (ctr > 9)))
printf("\n");
if (((cpusp < 2) && (ctr < 10) && (new6 > 0)) || ((ctr > 9) && (cpusp < 2) && (new6 < 1)))
printf("\n");
if ((ctr > 9) && (new6 > 0) && (cpusp < 2))
printf("     Unstoppable magic tactics!\n\n");
if ((ctr > 9) && (new6 < 1) && (cpusp > 1))
printf("     Stunning magic strategy!\n\n");
if ((ctr > 9) && (new6 < 1) && (cpusp < 2))
printf("     Brilliant magic skill!\n\n");
if ((ctr < 10) && (cpusp < 2) && (new6 < 1))
printf("     Hyper magic skill!\n\n");
if ((ctr < 10) && (new6 > 0) && (cpusp < 2))
printf("     Text Fighting Hyper Magic!\n\n");
if ((ctr > 9) && (new6 > 0) && (cpusp > 1))
printf("     Text Fighting just got even better!\n\n");
if ((ctr < 10) && (cpusp > 1) && (new6 < 1))
printf("     Text Fighting on another level!\n\n");
if ((ctr < 10) && (new6 > 0) && (cpusp > 1))
printf("     A victory of champions!\n\n");
break;
}
if (dice4 > dice3)
{
playerhp = (playerhp - 2 * dmg2);
printf("\n     CPU cancels Magic Heal!\n\n");
printf("     CPU counter-attacks!\n");
printf("     Player HP at %d\n", playerhp);
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
sumag = 0;
consecvic = 0;
consectr = 0;
bonchn = 0;
cpusp = 0;
cpusp2 = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
if (dice3 == dice4)
{
printf("\n     CPU cancels Magic Heal!\n");
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
sumag = 0;
consecvic = 0;
bonchn = 0;
cpusp = 0;
cpusp2 = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
}
if (choice == 's')
{
{
dice5 = (rand() % 28 + (diflev + cpusp2));// 14 then was 17 THEN 18 then 19 NOW 20 OR 21??? 22 23 24 26 27 28 29 -1 28
dice6 = (rand() % 31) + 1;//30-40 30
}
if (dice5 > dice6)
{
++consecvic2;
++consectr;
++ultsp;
bonchn2 = bonchn;
bonchn = 0;
if (magsp7 > 0)
magsp3 = 1;
if ((ultsp3 > 0) || (ultsp4 > 0))
ultsp = 4;
}
if (bonchn2 > 2)
{
spctrbon7 = spctrbon;
consecvic7 = consecvic2;
spctrbon = 0;
consecvic2 = 0;
magsp7 = magsp3;
magsp3 = 0;
if (ultsp > 3)
{
ultsp4 = ultsp;
ultsp = 0;
}
}
if (magsp3 == 1)
{
spctrbon2 = spctrbon;
spctrbon = 0;
consecvic5 = consecvic2;
consecvic2 = 0;
if (ultsp > 3)
{
ultsp3 = ultsp;
ultsp = 0;
}
}
if (ultsp > 3)
{
spctrbon3 = spctrbon;
consecvic4 = consecvic2;
spctrbon = 0;
consecvic2 = 0;
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp < 1) && (magsp3 < 1) && (bonchn2 < 3) && (ultsp < 4))
{
printf("\n     You execute the SPECIAL ATTACK!\n");
enemyhp = (enemyhp - 5 * dmg2);//6
printf("     CPU HP at %d\n", enemyhp);
++cpusp;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (ctr == 1)
{
diceQ = (rand() % 5) + 1;
if (diceQ == 1)
printf("     The match is over already?\n");
if (diceQ == 2)
printf("     You already beat the opponent?\n");
if (diceQ == 3)
printf("     You didn't waste time!\n");
if (diceQ == 4)
printf("     The match is already over?\n");
if (diceQ == 5)
printf("     You beat the opponent already?\n");
printf("     You won in the first round with the Special Attack!\n\n");
diceQ = (rand() % 4) + 1;
if (diceQ == 1)
printf("     Excellent move!\n\n");
if (diceQ == 2)
printf("     Amazing skill!\n\n");
if (diceQ == 3)
printf("     That was very skillful!\n\n");
if (diceQ == 4)
printf("     Fantastic move!\n\n");
}
if ((ctr > 1) && (ctr <= 5))
{
if (diceQ == 1)
printf("     A decisive early victory!\n");
if (diceQ == 2)
printf("     A good early victory!\n");
if (diceQ == 3)
printf("     It was a quick finish!\n");
if (diceQ == 4)
printf("     An impressive early victory!\n");
if (((cpusp < 2) && (new6 > 0)) || ((cpusp > 1) && (new6 > 0)) || ((cpusp < 2) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     You've got a new Consecutive Match Win Record!\n");
if ((cpusp > 1) && (new6 < 1))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
printf("     You won in round %d with the Special Attack!\n\n", ctr);
if ((new6 < 1) && (cpusp  > 1))
printf("     Good skill!\n\n");
if ((new6 > 0) && (cpusp < 2))
printf("     Nice technique!\n\n");
if ((new6 < 1) && (cpusp < 2))
printf("     Excellent tactics!\n\n");
if ((new6 > 0) && (cpusp > 1))
printf("     Great technique!\n\n");
}
if (ctr > 5)
{
if (diceQ == 1)
printf("     It was a good finish!\n");
if (diceQ == 2)
printf("     A strong finish!\n");
if (diceQ == 3)
printf("     A nice victory!\n");
if (diceQ == 4)
printf("     That was a strong finish!\n");
if (((cpusp > 1) && (new6 > 0)) || ((cpusp > 1) && (new6 < 1)) || ((cpusp < 2) && (new6 > 0)))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
printf("     You won in round %d with the Special Attack!\n", ctr);
if (new6 > 0)
printf("     And it's a new Consecutive Match Win Record!\n");
if ((new6 < 1) && (cpusp  > 1))
printf("\n     You fought well!\n\n");
if ((new6 > 0) && (cpusp < 2))
printf("\n     That was a good fight!\n\n");
if ((new6 < 1) && (cpusp < 2))
printf("\n     Effective tactics!\n\n");
if ((new6 > 0) && (cpusp > 1))
printf("\n     There's no stopping you!\n\n");
}
break;
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp > 0) && (magsp3 < 1) && (bonchn2 < 3) && (ultsp < 4))
{
printf("\n     You execute the MAGIC SPECIAL ATTACK!\n");
enemyhp = (enemyhp - 10 * dmg2);//10
printf("     CPU HP at %d\n", enemyhp);
++spmag2;
++spmag;
--magsp;
++magsp2;
++cpusp;
++cpusp2;
if (sumag > 0)
{
++sumag2;
sumag = 0;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((new6 > 0) && (ctr > 5) && (cpusp < 2))
printf("\n");
if (diceQ == 1)
printf("     An amazing finish!\n");
if (diceQ == 2)
printf("     Incredible action!\n");
if (diceQ == 3)
printf("     An awesome victory!\n");
if (diceQ == 4)
printf("     An excellent finish!\n");
if (((cpusp < 2) && (ctr < 6) && (new6 < 1)) || ((cpusp > 1) && (ctr < 6) && (new6 < 1)) || ((new6 > 0) && (ctr > 5) && (cpusp > 1)))
printf("\n");
if ((new6 > 0) || ((new6 < 1) && (ctr > 5) && (cpusp > 1)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     That was a great fight!\n");
if (diceQ == 2)
printf("     You fought very well!\n");
if (diceQ == 3)
printf("     That was a stunning fight!\n");
}
if (((cpusp > 1) && (ctr < 6) && (new6 > 0)) || ((cpusp < 2) && (ctr < 6) && (new6 > 0)) || ((new6 > 0) && (ctr > 5) && (cpusp < 2)) || ((new6 < 1) && (ctr > 5) && (cpusp > 1)))
printf("\n");
if (new6 > 0)
printf("     A new Consecutive Match Win Record!\n");
if (ctr < 6)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     The contest ended early!\n");
if (diceQ == 2)
printf("     The contest ended quickly!\n");
if (diceQ == 3)
printf("     The bout ended quickly!\n");
}
if ((cpusp > 1) && (ctr < 6) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
if ((new6 > 0) && (ctr > 5) && (cpusp > 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     It was a sensational move!\n");
if (diceQ == 2)
printf("\n     You used magnificent technique!\n");
if (diceQ == 3)
printf("\n     It was a brilliant offensive manoeuvre!\n");
}
printf("     You won in Round %d with the Magic Special Attack!\n", ctr);
if ((new6 < 1) && (ctr > 5) && (cpusp < 2))
printf("\n     Great move!\n\n");
if ((cpusp < 2) && (ctr < 6) && (new6 < 1))
printf("\n     Impressive ability!\n\n");
if ((new6 < 1) && (ctr > 5) && (cpusp > 1))
printf("\n     Fantastic technique!\n\n");
if ((new6 > 0) && (ctr > 5) && (cpusp < 2))
printf("\n     Powerful magic!\n\n");
if ((new6 > 0) && (ctr < 6) && (cpusp < 2))
printf("\n     Brilliant magic skill!\n\n");
if ((new6 < 1) && (ctr < 6) && (cpusp > 1))
printf("\n     Superior Text Magic!\n\n");
if ((new6 > 0) && (ctr > 5) && (cpusp > 1))
printf("\n     Text Fighting Magic!\n\n");
if ((new6 > 0) && (ctr < 6) && (cpusp > 1))
printf("\n     Your magic is the best!\n\n");
break;
}
if ((consecvic2 > 2) && (spctrbon > 1) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (bonchn2 < 3) && (ultsp < 4))
{
enemyhp = (enemyhp - 20 * dmg2); //20
printf("\n     You activate the SUPER BONUS COMBO!\n");
printf("     CPU HP at %d\n", enemyhp);
consecvic2 = 1;
spctrbon = 1;
++cpusp;
++cpusp2;
++consecvic;
if ((diceQ == 3) || (diceQ == 4))
++consecvic;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((cpusp < 2) && (ctr > 7) && (new6 > 0))
printf("\n");
diceQ = (rand() % 4) + 1;
if (diceQ == 1)
printf("     A very skillful move!\n");
if (diceQ == 2)
printf("     Phenomenal technique!\n");
if (diceQ == 3)
printf("     A brilliant manoeuvre!\n");
if (diceQ == 4)
printf("     A sensational move!\n");
if ((cpusp > 1) && (ctr > 7) && (new6 < 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     You put on a good fight!\n");
if (diceQ == 2)
printf("     You fought very well!\n");
if (diceQ == 3)
printf("     It was a good fight!\n");
}
if (((cpusp > 1) && (ctr < 8) && (new6 > 0)) || ((cpusp > 1) && (ctr > 7) && (new6 > 0)) || ((cpusp < 2) && (ctr < 8) && (new6 < 1)))
printf("\n");
if (((ctr > 7) && (new6 < 1) && (cpusp > 1)) || ((ctr < 8) && (new6 < 1) && (cpusp > 1)) || ((cpusp < 2) && (ctr > 7) && (new6 < 1)))
printf("\n");
if (ctr < 6)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     The fight ended quickly!\n");
if (diceQ == 2)
printf("     The fight ended early\n");
if (diceQ == 3)
printf("     The bout ended early!\n");
}
if ((ctr < 8) && (ctr > 5))
printf("     You finished the fight in style!\n");
if ((cpusp < 2) && (ctr < 8) && (new6 > 0))
printf("\n");
if (new6 > 0)
printf("     You have a new Consecutive Match Win Record!\n");
if ((cpusp < 2) && (ctr > 7) && (new6 > 0))
printf("\n");
if ((cpusp > 1) && (ctr < 8) && (new6 > 0))
printf("     It was an excellent contest!\n");
if ((cpusp > 1) && (ctr < 8) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
if ((cpusp > 1) && (ctr > 7) && (new6 > 0))
printf("\n");
printf("     You won in %d rounds with the Super Bonus Combo!\n", ctr);
if (((cpusp < 2) && (ctr < 8) && (new6 > 0)) || ((cpusp > 1) && (ctr < 8) && (new6 < 1)))
printf("\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     An amazing combination!\n");
if (diceQ == 2)
printf("     An absolutely incredible combo!\n");
if (diceQ == 3)
printf("     An incredibly awesome combination!\n");
}
if ((cpusp > 1) && (ctr < 8) && (new6 < 1))
printf("     It was an exciting contest!\n");
if ((cpusp < 2) && (ctr > 7) && (new6 < 1))
printf("\n     It was an impressive victory!\n\n");
if ((cpusp > 1) && (ctr > 7) && (new6 < 1))
printf("\n     That was really magnificent!\n\n");
if ((cpusp < 2) && (ctr < 8) && (new6 < 1))
printf("\n     It was a stunning victory!\n\n");
if ((cpusp > 1) && (ctr < 8) && (new6 < 1))
printf("\n     That was just unbelievable!\n\n");
if ((cpusp < 2) && (ctr > 7) && (new6 > 0))
printf("\n     That was completely outstanding!\n\n");
if ((cpusp > 1) && (ctr > 7) && (new6 > 0))
printf("\n     It was a fantastic Fight Text!\n\n");
if ((cpusp > 1) && (ctr < 8) && (new6 > 0))
printf("\n     This is what Text Fighting is all about!\n\n");
if ((cpusp < 2) && (ctr < 8) && (new6 > 0))
printf("\n");
break;
}
if ((spctrbon > 1) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (ultsp < 4))
{
enemyhp = (enemyhp - 11 * dmg2);//was 8 11
printf("\n     You execute the SPECIAL BONUS ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = 0;
++cpusp;
++cpusp2;
if ((diceQ == 1) || (diceQ == 2))
++consecvic;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((new6 > 0) && (ctr > 5) && (cpusp < 2))
printf("\n");
diceQ = (rand() % 4) + 1;
if (diceQ == 1)
printf("     A thrilling conclusion!\n");
if (diceQ == 2)
printf("     Amazing action!\n");
if (diceQ == 3)
printf("     A decisive move!\n");
if (diceQ == 4)
printf("     A very good move!\n");
if ((new6 < 1) && (ctr > 5) && (cpusp > 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     That was a nice bout!\n");
if (diceQ == 2)
printf("     That was an exciting match!\n");
if (diceQ == 3)
printf("     That was a great match!\n");
}
if (((cpusp < 2) && (ctr < 6) && (new6 < 1)) || ((cpusp > 1) && (ctr > 5) && (new6 < 1)) || ((cpusp > 1) && (ctr < 6) && (new6 < 1)) || ((new6 > 0) && (ctr > 5) && (cpusp > 1)))
printf("\n");
if (new6 > 0)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     It was an awesome fight!\n");
if (diceQ == 2)
printf("     It was an exciting bout!\n");
if (diceQ == 3)
printf("     It was a stunning fight!\n");
}
if ((new6 > 0) && (ctr > 5) && (cpusp < 2))
printf("\n");
if (((cpusp > 1) && (ctr < 6) && (new6 > 0)) || ((cpusp < 2) && (ctr < 6) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     You have a new Consecutive Match Win Record!\n");
if ((new6 > 0) && (ctr > 5) && (cpusp > 1))
printf("\n");
if (ctr < 6)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     And a quick finish to the contest!\n");
if (diceQ == 2)
printf("     And an early finish to the contest!\n");
if (diceQ == 3)
printf("     The contest ended early!\n");
}
if ((cpusp > 1) && (ctr < 6) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
printf("     You won in Round %d with the Special Bonus Attack!\n", ctr);
if ((new6 < 1) && (ctr > 5) && (cpusp < 2))
printf("\n     That really was something!\n\n");
if ((cpusp < 2) && (ctr < 6) && (new6 < 1))
printf("\n     That was a brilliant manoeuvre!\n\n");
if ((new6 < 1) && (ctr > 5) && (cpusp > 1))
printf("\n     Stunning technique!\n\n");
if ((new6 > 0) && (ctr > 5) && (cpusp < 2))
printf("\n     Fantastic technique!\n\n");
if ((new6 > 0) && (ctr < 6) && (cpusp < 2))
printf("\n     Phenomenal skills!\n\n");
if ((new6 < 1) && (ctr < 6) && (cpusp > 1))
printf("\n     That was an impressive victory!\n\n");
if ((new6 > 0) && (ctr > 5) && (cpusp > 1))
printf("\n     An incredible victory!\n\n");
if ((new6 > 0) && (ctr < 6) && (cpusp > 1))
printf("\n     That's magnificent Text Fighting!\n\n");
break;
}
if ((consecvic2 > 2) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (bonchn2 < 3) && (ultsp < 4))
{
enemyhp = (enemyhp - 14 * dmg2); //was 11 12 14
printf("\n     You perform the SUPER SPECIAL ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
consecvic2 = 0;
++cpusp;
++cpusp2;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((cpusp < 2) && (ctr < 6) && (new6 < 1))
printf("\n");
if (diceQ == 1)
printf("     Fantastic technique!\n");
if (diceQ == 2)
printf("     You made a great move!\n");
if (diceQ == 3)
printf("     An excellent move!\n");
if (diceQ == 4)
printf("     Stunning technique!\n");
if (((cpusp < 2) && (ctr < 6) && (new6 < 1)) || ((cpusp > 1) && (ctr > 5) && (new6 > 0)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     It was a noteworthy victory!\n");
if (diceQ == 2)
printf("     It's a strong victory!\n");
if (diceQ == 3)
printf("     It's an impressive victory!\n");
}
if (((cpusp > 1) && (ctr > 5) && (new6 > 0)) || ((cpusp > 1) && (ctr < 6) && (new6 < 1)) || ((cpusp < 2) && (ctr < 6) && (new6 < 1)))
printf("\n");
if (((cpusp > 1) && (ctr > 5) && (new6 < 1)) || ((cpusp < 2) && (ctr < 6) && (new6 > 0)) || ((cpusp > 1) && (ctr < 6) && (new6 > 0)))
printf("\n");
if (ctr < 6)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     The contest finished early!\n");
if (diceQ == 2)
printf("     And it's a quick finish to the contest!\n");
if (diceQ == 3)
printf("     The contest ended early!\n");
}
if (new6 > 0)
printf("     A Consecutive Match Win Record!\n");
if ((cpusp < 2) && (ctr > 5) && (new6 > 0))
printf("\n");
if ((cpusp > 1) && (ctr < 6) && (new6 > 0))
printf("     It was a thrilling bout!\n");
if ((cpusp > 1) && (ctr < 6) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
if ((cpusp > 1) && (ctr < 6) && (new6 < 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     It was a very nice victory!\n");
if (diceQ == 2)
printf("     It was a stylish victory!\n");
if (diceQ == 3)
printf("     You demonstrated a very high standard!\n");
}
if (((cpusp > 1) && (ctr > 5) && (new6 > 0)) || ((cpusp > 1) && (ctr < 6) && (new6 < 1)) || ((cpusp < 2) && (ctr < 6) && (new6 > 0)))
printf("\n");
printf("     You won in round %d with the Super Special Attack!\n", ctr);
if (((cpusp > 1) && (ctr > 5) && (new6 > 0)) || ((cpusp > 1) && (ctr < 6) && (new6 < 1)) || ((cpusp < 2) && (ctr < 6) && (new6 > 0)) || ((cpusp > 1) && (ctr < 6) && (new6 > 0)) || ((cpusp < 2) && (ctr > 5) && (new6 > 0)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     That was extremely skilled!\n");
if (diceQ == 2)
printf("     That was amazingly skilled!\n");
if (diceQ == 3)
printf("     That was pure skill!\n");
}
if ((cpusp < 2) && (ctr > 5) && (new6 < 1))
printf("\n     It was an awesome fight!\n\n");
if ((cpusp > 1) && (ctr > 5) && (new6 < 1))
printf("\n     It was a sensational bout!\n\n");
if ((cpusp < 2) && (ctr < 6) && (new6 < 1))
printf("\n     You put on an outstanding fight!\n\n");
if ((cpusp < 2) && (ctr > 5) && (new6 > 0))
printf("\n     You fought with style!\n\n");
if ((cpusp > 1) && (ctr < 6) && (new6 < 1))
printf("\n     Absolutely magnificent!\n\n");
if ((cpusp < 2) && (ctr < 6) && (new6 > 0))
printf("\n     Completely brilliant!\n\n");
if ((cpusp > 1) && (ctr > 5) && (new6 > 0))
printf("\n     You were on outstanding form!\n\n");
if ((cpusp > 1) && (ctr < 6) && (new6 > 0))
printf("\n     You're a Super Text Fighter!\n\n");
break;
}
if ((ultsp > 3) && (bonchn2 >= 0) && (dice5 > dice6) && (magsp3 == 0) && (magsp >= 0) && (consecvic2 == 0) && (spctrbon == 0))
{
enemyhp = (enemyhp - 22 * dmg2);//was 8
printf("\n     You execute the ULTRA SUPER ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = spctrbon3;
consecvic2 = consecvic4;
spctrbon3 = 0;
consecvic4 = 0;
++cpusp;
++cpusp2;
ultsp = 0;
ultsp4 = 0;
ultsp3 = 0;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((ctr > 6) && (cpusp > 1) && (new6 < 1))
printf("\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     This game is over!\n");
if (diceQ == 2)
printf("     The game is definitely over!\n");
if (diceQ == 3)
printf("     Where's the competition?\n");
if (((cpusp > 1) && (ctr < 7) && (new6 > 0)) || ((cpusp < 2) && (ctr > 6) && (new6 < 1)) || ((cpusp < 2) && (ctr > 6) && (new6 > 0)))
printf("\n");
if (((ctr < 7) && (new6 > 0) && (cpusp < 2)) || ((ctr < 7) && (new6 < 1) && (cpusp > 1)))
printf("\n");
diceQ = (rand() % 4) + 1;
if (diceQ == 1)
printf("     That was a great fight!\n");
if (diceQ == 2)
printf("     It was a spectacular fight!\n");
if (diceQ == 3)
printf("     That was an incredible bout!\n");
if (diceQ == 4)
printf("     It was an excellent bout!\n");
if (((ctr < 7) && (cpusp < 2) && (new6 < 1)) || ((ctr > 6) && (cpusp > 1) && (new6 > 0)) || ((ctr > 6) && (cpusp > 1) && (new6 < 1)))
printf("\n");
if ((ctr < 7) && (ctr > 5))
printf("     You used an incredibly skillful move!\n");
if (ctr < 6)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     The contest ended quickly!\n");
if (diceQ == 2)
printf("     And an early end to the contest!\n");
if (diceQ == 3)
printf("     The contest ended early!\n");
}
if ((cpusp > 1) && (ctr < 7) && (new6 < 1))
printf("\n");
if (new6 > 0)
printf("     You have a new Consecutive Match Win Record!\n", wnctrec7);
if (((ctr < 7) && (cpusp < 2)) && (new6 > 0) || ((ctr < 7) && (new6 > 0) && (cpusp > 1)))
printf("\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
if ((ctr > 6) && (cpusp > 1) && (new6 > 0))
printf("\n");
printf("     You won in %d rounds with the Ultra Super Attack!\n", ctr);
if (((cpusp > 1) && (ctr < 7) && (new6 < 1)) || ((ctr < 7) && (cpusp < 2) && (new6 < 1)) || ((ctr > 6) && (new6 < 1) && (cpusp < 2)))
printf("\n");
if ((cpusp > 1) && (ctr > 6) && (new6 < 1))
printf("\n");
if (((ctr < 7) && (cpusp < 2) && (new6 < 1)) && ((ctr > 6) && (cpusp < 2) && (new6 < 1)) || ((ctr > 6) && (new6 > 0) && (cpusp < 2)))
printf("\n");
if ((ctr > 6) && (cpusp < 2) && (new6 < 1))
printf("     A powerful finish!\n");
if ((ctr > 6) && (cpusp < 2) && (new6 > 0))
printf("     A brilliant victory!\n");
if ((ctr < 7) && (cpusp < 2) && (new6 < 1))
printf("     A sensational victory!\n");
if (((ctr < 7) && (cpusp > 1) && (new6 > 0)) || ((ctr < 7) && (cpusp > 1) && (new6 < 1)) || ((ctr < 7) && (cpusp < 2) && (new6 > 0)))
printf("     An expert finish!\n");
if (((ctr > 6) && (cpusp > 1) && (new6 < 1)) || ((ctr > 6) && (cpusp > 1) && (new6 > 0)))
printf("     A phenomenal victory!\n");
if ((ctr < 7) && (cpusp > 1) && (new6 > 0))
{
printf("\n     You are the Ultra Text Fighter!\n");
}
if ((ctr < 7) && (cpusp < 2) && (new6 > 0))
{
printf("\n     Text Fighting at it's best!\n");
}
if ((ctr > 6) && (cpusp > 1) && (new6 > 0))
{
printf("\n     That was Ultra Text Fighting!\n");
}
printf("\n");
break;
}
if ((bonchn2 > 2) && (dice5 > dice6) && (magsp3 >= 0) && (magsp >= 0) && (consecvic2 == 0) && (spctrbon == 0) && (ultsp >= 0))
{
enemyhp = (enemyhp - 18 * dmg2); //18
printf("\n     You execute the SPECIAL HYPER BONUS!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = spctrbon7;
consecvic2 = consecvic7;
spctrbon7 = 0;
consecvic7 = 0;
bonchn2 = 0;
consecvic = 2;
++cpusp;
++cpusp2;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((ctr < 9) && (cpusp < 2) && (new6 > 0))
printf("\n");
if (diceQ == 1)
printf("     A sensational victory!\n");
if (diceQ == 2)
printf("     Unbelievable moves!\n");
if (diceQ == 3)
printf("     A very skillful victory!\n");
if (diceQ == 4)
printf("     A phenomenal move!\n");
if (((cpusp < 2) && (ctr > 8) && (new6 < 1)) || ((cpusp > 1) && (ctr > 8) && (new6 < 1)) || ((ctr < 9) && (cpusp > 1) && (new6 < 1)) || ((ctr > 8) && (cpusp > 1) && (new6 > 0)))
printf("\n");
if ((ctr > 8) && (cpusp < 2) && (new6 > 0))
printf("\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     It was a magnificent fight!\n");
if (diceQ == 2)
printf("     It was a fantastic contest!\n");
if (diceQ == 3)
printf("     It was an outstanding fight!\n");
}
if (((ctr < 9) && (cpusp < 2) && (new6 > 0)) || ((cpusp < 2) && (ctr < 9) && (new6 < 1)) || ((ctr < 9) && (cpusp > 1) && (new6 > 0)))
printf("\n");
if (((ctr < 9) && (cpusp < 2) && (new6 > 0)) || ((ctr > 8) && (cpusp < 2) && (new6 > 0)) || ((ctr < 9) && (cpusp > 1) && (new6 < 1)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     You used an impressive strategy!\n");
if (diceQ == 2)
printf("     Absolutely phenomenal strategy!\n");
if (diceQ == 3)
printf("     You employed brilliant tactics!\n");
}
if (ctr < 6)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     The bout ended quickly!\n");
if (diceQ == 2)
printf("     And a quick end to the bout!\n");
if (diceQ == 3)
printf("     The bout ended early!\n");
}
if (((ctr < 9) && (ctr > 5)) || ((cpusp < 2) && (ctr < 9) && (new6 < 1)) || ((ctr < 9) && (cpusp > 1) && (new6 > 0)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     And an awesome finish!\n");
if (diceQ == 2)
printf("     And an amazing finish!\n");
if (diceQ == 3)
printf("     You finished in style!\n");
}
if (((cpusp > 1) && (ctr < 9) && (new6 < 1)) || ((ctr < 9) && (cpusp < 2) && (new6 > 0)) || ((ctr > 8) && (cpusp < 2) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     You've got a new Consecutive Match Win Record!\n", wnctrec7);
if ((ctr < 9) && (cpusp > 1) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
if ((ctr > 8) && (cpusp > 1) && (new6 > 0))
printf("\n");
printf("     You won in %d rounds with the Special Hyper Bonus!\n", ctr);
if ((ctr < 9) && (cpusp < 2) && (new6 > 0))
printf("\n");
if (((cpusp > 1) && (ctr > 8) && (new6 < 1))  || ((ctr > 8) && (cpusp < 2) && (new6 > 0)))
printf("\n");
if (((cpusp < 2) && (ctr < 9) && (new6 < 1)) || ((ctr > 8) && (cpusp < 2) && (new6 < 1)))
printf("\n");
if (((ctr < 9) && (cpusp > 1) && (new6 < 1)) || ((cpusp > 1) && (ctr > 8) && (new6 < 1)))
printf("     Hyper power!\n");
if ((ctr > 8) && (cpusp < 2) && (new6 > 0))
printf("     Raw power!\n\n");
if ((ctr > 8) && (cpusp < 2) && (new6 < 1))
printf("     Incredible power!\n\n");
if  ((cpusp < 2) && (ctr < 9) && (new6 < 1))
printf("     Stunning Hyper powers!\n");
if (((ctr > 8) && (cpusp > 1) && (new6 > 0)) || ((ctr < 9) && (cpusp > 1) && (new6 > 0)) || ((ctr < 9) && (cpusp < 2) && (new6 > 0)))
printf("     Thrilling Hyper action!\n");
if ((ctr < 9) && (cpusp > 1) && (new6 < 1))
printf("\n     It's another great day for Text Fighting!\n\n");
if ((ctr > 8) && (cpusp > 1) && (new6 > 0))
printf("\n     You can't beat a good Hyper Text Fighter!\n\n");
if ((ctr < 9) && (cpusp > 1) && (new6 > 0))
{
printf("\n     Text Fighting has a new contender!\n\n");
}
if (((ctr < 9) && (cpusp < 2) && (new6 > 0)) || ((cpusp < 2) && (ctr < 9) && (new6 < 1)) || ((cpusp > 1) && (ctr > 8) && (new6 < 1)))
printf("\n");
break;
}
if ((consecvic2 == 0) && (spctrbon == 0) && (dice5 > dice6) && (magsp >= 0) && (magsp3 > 0) && (bonchn2 >= 0) && (ultsp >= 0))
{
enemyhp = (enemyhp - 16 * dmg2);//was 14
printf("\n     You perform the SPECIAL MAGIC COMBO!\n");
printf("     CPU HP at %d\n", enemyhp);
magsp3 = 0;
magsp2 = 0;
spctrbon = spctrbon2;
consecvic2 = consecvic5;
consecvic5 = 0;
spctrbon2 = 0;
magsp7 = 0;
++cpusp;
++cpusp2;
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     An outstanding victory!\n");
if (diceQ == 2)
printf("     A fantastic conclusion!\n");
if (diceQ == 3)
printf("     An incredible outcome!\n");
if (diceQ == 4)
printf("     A magnificent victory!\n");
if ((new6 > 0) && (cpusp < 2) && (ctr < 7))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     You beat the opponent in style!\n");
if (diceQ == 2)
printf("     The action was really magnificent!\n");
if (diceQ == 3)
printf("     The bout finished in style!\n");
}
if ((new6 > 0) && (cpusp < 2) && (ctr < 7))
printf("\n");
if (ctr < 6)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     The bout finished quickly!\n");
if (diceQ == 2)
printf("     And a quick finish to the bout!\n");
if (diceQ == 3)
printf("     The bout finished early!\n");
}
if ((ctr < 7) && (ctr > 5))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     You didn't even break a sweat!\n");
if (diceQ == 2)
printf("     You made it look easy!\n");
if (diceQ == 3)
printf("     You made it look effortless!\n");
}
if (((new6 < 1)  && (cpusp < 2) && (ctr < 7)) || ((new6 > 0)  && (cpusp > 1) && (ctr < 7)) || ((new6 > 0) && (cpusp < 2) && (ctr > 6)))
printf("\n");
if (((new6 < 1) && (cpusp > 1) && (ctr < 7)) || ((new6 < 1) && (ctr > 6) && (cpusp > 1)) || ((new6 < 1) && (ctr > 6) && (cpusp < 2)) || ((new6 > 0) && (cpusp > 1) && (ctr > 6)))
printf("\n");
if (new6 > 0)
printf("     You have a new Consecutive Match Win Record!\n");
if ((new6 > 0) && (cpusp < 2) && (ctr < 7))
printf("\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
printf("     You won in %d rounds with the Special Magic Combo!\n", ctr);
if (((new6 > 0) && (cpusp > 1) && (ctr < 7)) || ((new6 > 0) && (cpusp > 1) && (ctr > 6)) || ((new6 < 1) && (cpusp > 1) && (ctr > 6)))
printf("\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     That was a brilliant combination!\n");
if (diceQ == 2)
printf("     That was an awesome routine!\n");
if (diceQ == 3)
printf("     That was a very impressive manoeuvre!\n");
}
if (((new6 < 1)  && (cpusp  > 1) && (ctr < 7)) || ((new6 > 0) && (cpusp < 2) && (ctr < 7)) ||  ((new6 < 1)  && (cpusp < 2) && (ctr < 7)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 6)))
printf("\n");
if (((new6 > 0) && (cpusp < 2) && (ctr < 7)) || ((new6 > 0) && (cpusp > 1) && (ctr > 6)))
printf("     You demonstrated great skill!\n");
if ((new6 < 1)  && (cpusp < 2) && (ctr > 6))
printf("     Powerful technique!\n");
if ((new6 < 1)  && (cpusp < 2) && (ctr < 7))
printf("     You showed impressive magic skill!\n");
if ((new6 < 1) && (cpusp > 1) && (ctr < 7))
printf("     Great magic technique!\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 6))
printf("     You were on top form!\n");
if (((new6 < 1)  && (cpusp < 2) && (ctr < 7)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 6)) || ((new6 > 0) && (cpusp > 1) && (ctr > 6)) || ((new6 > 0) && (cpusp < 2) && (ctr > 6)))
printf("\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 6))
printf("\n");
if ((new6 > 0) && (cpusp < 2) && (ctr > 6))
printf("     It was an excellent Text Fight!\n\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 6))
printf("     It was a spectacular fight!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr < 7)) || ((new6 > 0) && (cpusp > 1) && (ctr > 6)))
printf("     It was a magical contest!\n");
if ((new6 > 0) && (cpusp > 1) && (ctr < 7))
printf("     Absolutely amazing!\n");
if (((new6 < 1) && (ctr < 7) && (cpusp > 1)) || ((new6 > 0) && (cpusp < 2) && (ctr < 7)) || ((new6 > 0) && (cpusp > 1) && (ctr > 6)))
printf("\n");
if ((new6 > 0) && (cpusp > 1) && (ctr < 7))
printf("\n     You're a Text Fighting Super Star!\n\n");
break;
}
}
if (dice6 > dice5)
{
playerhp = (playerhp - 2 * dmg2);
printf("\n     You execute the SPECIAL ATTACK!\n");
printf("     CPU evades!\n\n");
printf("     CPU counter-attacks!\n");
printf("     Player HP at %d\n", playerhp);
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
consectr = 0;
normag = 0;
consecvic = 0;
bonchn = 0;
bonchn2 = 0;
cpusp = 0;
cpusp2 = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
if (dice5 == dice6)
{
printf("\n     You execute the SPECIAL ATTACK!\n");
printf("     CPU defends!\n");
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
normag = 0;
consecvic = 0;
bonchn = 0;
bonchn2 = 0;
cpusp = 0;
cpusp2 = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
}
if (playerhp < 1)
printf("\n");
if ((enemyhp > 0) && (playerhp > 0) && (cpusp == 0))
{
diceB = (rand() % 11) + 1;// 10
}
if ((enemyhp > 0) && (playerhp > 0) && ((cpusp >= 1) && (cpusp <= 2)))
{
diceB = (rand() % 10) + 1;//10
}
if ((enemyhp > 0) && (playerhp > 0) && (cpusp == 3))
diceB = (rand() %  9) + 1;//9
if ((enemyhp > 0) && (playerhp > 0) && (cpusp > 3) && (cpusp <= 5))
{
diceB = (rand() % 8) + 1;//8
}
if ((enemyhp > 0) && (playerhp > 0) && (cpusp >= 6))
{
diceS = (rand() % 10) + 1;
if (diceS <= 6)//5
{
diceB = (rand() % 5) + 2;//8
}
if (diceS >= 7)//6
{
diceB = (rand() % 8) + 1;
}
}
diceZ = (rand() % 10) + 1;//7
if ((diceB >= 2) && (diceB <= 6) && (playerhp > 0) && (diceZ > 5))
{
++c;
++c2;
playerhp = (playerhp - 1 * dmg2);
printf("\n     CPU executes Normal Attack!\n");
printf("     Player HP at %d\n", playerhp);
if (playerhp < 1)
printf("\n");
}
if (((choice == 'm') || (choice == 's')) && (choice != 'n'))
{
diceE = (rand() % 22 + diflev + diceR) + 1;//maybe 28 24 26 33 24
}
else
{
if ((choice == 'n') && (choice != 'm') && (choice != 's'))
diceE = (rand() % 32 + diflev) + 1;//maybe 32 0r 34 32 33 30
}
if ((emagsup6 < 1) && (diceR < 1))//new
{//new
diceS = (rand() % 12) + 1;//6 10
if (diceS == 1)
{
diceE = 0;
}
}//new
if (emagsup6 > 0)
{
diceE = 0;
}
if  ((diceE > 20) && (diceB >= 4) && (diceB <= 6) && (playerhp > 0) && (emagsup < 1) && (emagsup6 < 1))
{
++d;
playerhp = (playerhp - 4 * dmg2);
printf("\n     CPU executes SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
spatt = 1;
spatt2 = 1;
Sleep (500);
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     THAT'S AN IMPRESSIVE CPU FINISH!\n\n");
if (diceQ == 2)
printf("\n     IT WAS A STRONG CPU FINISH!\n\n");
if (diceQ == 3)
printf("\n     THAT'S A GREAT CPU WIN!\n\n");
}
}
if ((emagsup6 < 1) && (diceR < 1))
{
diceS = (rand() % 12) + 1;//6 10
if (diceS == 1)
diceF = 0;
}
if ((playerhp < 1) || (emagsup > 0))
{
diceF = 15;
}//added
else
{//added
if (((choice == 's') || (choice == 'n')) && (choice != 'm'))
diceF = (rand() % 38 + diflev + diceR) + 1; //42 40 39
else
if ((choice == 'm') && (choice != 's') && (choice != 'n'))
diceF = (rand() % 48 + diflev) + 1; ///54 52 51 50
}
if  ((diceF > 29) && (diceB >= 5) && (diceB <= 6) && (playerhp > 0) && (emagsup < 1))
{
++e;
playerhp = (playerhp - 6 * dmg2);
printf("\n     CPU executes SUPER SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
Sleep (500);
if ((playerhp < 1) && (spatt != 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     A FANTASTIC CPU FINISH!\n\n");
if (diceQ == 2)
printf("\n     IT WAS A POWERFUL CPU FINISH!\n\n");
if (diceQ == 3)
printf("\n     AN EXCELLENT CPU PERFORMANCE!\n\n");
}
supspatt = 1;
supspatt2 = 1;
}
if ((spatt = 1) && (supspatt = 1))
{
enspcomb1 = 1;
}
if ((playerhp < 1) || (emagsup > 0) || (emagsup6 > 0))
{
diceC = 15;
}
else
{//added
if (((choice == 'm') || (choice == 'n')) && (choice != 's'))
diceC = (rand() % 78 + diflev) + 1; //72 73 74 75
else
if ((choice == 's') && (choice != 'm') && (choice != 'n'))
diceC = (rand() % 90 + diflev + diceR) + 1; //86 87 88 92 (not 86 higher)
}//added
if ((diceF > 29) && (diceR < 1))
{
diceS = (rand() % 14) + 1;//8 12
if (diceS == 1)
{
diceC = 0;
}
}
if  ((diceC > 47) && (diceB == 5) && (playerhp > 0) && (emagsup < 1)  && (emagsup6 < 1))
{
++f;
playerhp = (playerhp - 8 * dmg2);//was 7
printf("\n     CPU executes HYPER SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
Sleep (500);
if ((playerhp < 1) && (spatt2 != 1) && (supspatt2 != 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     THAT'S AN AWESOME CPU FINISH!\n\n");
if (diceQ == 2)
printf("\n     IT WAS A SPECTACULAR CPU FINISH!\n\n");
if (diceQ == 3)
printf("\n     THIS GAME IS OVER!\n\n");
}
hypsp = 1;
hypsp2 = 1;
if ((hypsp = 1) && (enspcomb1 = 1))
{
enspcomb2 = 1;
}
if ((enspcomb1 = 1) && (enspcomb2 = 1))
{
enspcomb3 = 1;
}
}
if (diceC < 48)
{
ultdup = 0;
spdup = 0;
}
if (diceF < 30)
{
supdup = 0;
supdup2 = 0;
}
if ((enspcomb3 == 1) && (f > 0) && (e > 0) && (d > 0) && ((diceE > 20) && (diceB >= 4) && (diceB <= 6)) && ((diceF > 29) && (diceB >= 5) && (diceB <= 6)) && ((diceC > 47) && (diceB == 5)) && (emagsup < 1) && (emagsup5 < 1)  && (emagsup6 < 1))
{
++ultdup;
if (ultdup == 1)
printf("\n     THE CPU ULTRA SUPER HYPER COMBO!\n");
if (ultdup == 2)
printf("\n     ANOTHER CPU ULTRA SUPER HYPER COMBO!\n");
if (ultdup > 2)
printf("\n     YET ANOTHER CPU ULTRA SUPER HYPER COMBO!\n");
printf("     THE ULTIMATE CPU SPECIAL COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     PHENOMENAL POWER!\n\n");
if (diceQ == 2)
printf("     THAT WAS REALLY AWESOME!\n\n");
if (diceQ == 3)
printf("     ABSOLUTELY INCREDIBLE!\n\n");
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THE CPU WINS IN GRAND STYLE!\n\n");
if (diceQ == 2)
printf("     THE CPU REIGNS SUPREME!\n\n");
if (diceQ == 3)
printf("     THE CPU IS THE MASTER!\n\n");
}
spatt = 0;
supspatt = 0;
hypsp = 0;
enspcomb3 = 0;
enspcomb2 = 0;
enspcomb1 = 0;
enemspcombC = 1;
}
if (enemspcombC != 1)
{
if ((enspcomb1 == 1)  && (f < 1) && (e > 0) && (d > 0) && ((diceE > 20) && (diceB >= 4) && (diceB <= 6)) && ((diceF > 29) && (diceB >= 5) && (diceB <= 6)) && (emagsup < 1) && (emagsup5 < 1) && (emagsup6 < 1))
{
++supdup;
if (supdup == 1)
printf("\n     THE CPU SUPER SPECIAL COMBO!\n");
if (supdup == 2)
printf("\n     ANOTHER CPU SUPER SPECIAL COMBO!\n");
if (supdup > 2)
printf("\n     YET ANOTHER CPU SUPER SPECIAL COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THAT'S AN INCREDIBLE COMBO!\n");
if (diceQ == 2)
printf("     A MAGNIFICENT CPU ATTACK!\n");
if (diceQ == 3)
printf("     THAT'S A POWERFUL COMBO!\n");
enspcomb6 = 1;
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AND A SPECTACULAR VICTORY!\n\n");
if (diceQ == 2)
printf("     IT WAS AN AWESOME WIN!\n\n");
if (diceQ == 3)
printf("     AND AN AMAZING FINISH!\n\n");
}
spatt = 0;
supspatt = 0;
enspcomb1 = 1;
}
if ((enspcomb2 == 1) && (f > 0) && (e < 1) && (d > 0) && ((diceE > 20) && (diceB >= 4) && (diceB <= 6)) && ((diceC > 47) && (diceB == 5)) && (emagsup < 1) && (emagsup5 < 1) && (emagsup6 < 1))
{
++spdup;
if (spdup == 1)
printf("\n     THE CPU SPECIAL HYPER COMBO!\n");
if (spdup == 2)
printf("\n     ANOTHER CPU SPECIAL HYPER COMBO!\n");
if (spdup > 2)
printf("\n     YET ANOTHER CPU SPECIAL HYPER COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THAT'S AN AMAZING CPU COMBO!\n");
if (diceQ == 2)
printf("     AN EXCELLENT CPU ATTACK!\n");
if (diceQ == 3)
printf("     A VERY IMPRESSIVE COMBO!\n");
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AND THAT'S A GREAT CPU WIN!\n\n");
if (diceQ == 2)
printf("     AND A FANTASTIC CPU FINISH!\n\n");
if (diceQ == 3)
printf("     AND A SENSATIONAL CPU WIN!\n\n");
}
spatt = 0;
hypsp = 0;
enspcomb2 = 0;
enspcomb1 = 0;
}
if ((enspcomb2 == 1)  && (f > 0) && (e > 0) && (d < 1) && ((diceC > 47) && (diceB == 5)) && ((diceF > 29) && (diceB >= 5) && (diceB <= 6)) && (emagsup < 1) && (emagsup5 < 1) && (emagsup6 < 1))
{
++supdup2;
if (supdup2 == 1)
printf("\n     THE CPU SUPER SPECIAL HYPER COMBO!\n");
if (supdup2 == 2)
printf("\n     ANOTHER CPU SUPER SPECIAL HYPER COMBO!\n");
if (supdup2 > 2)
printf("\n     YET ANOTHER CPU SUPER SPECIAL HYPER COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THAT'S AN UNBEATABLE CPU COMBO!\n");
if (diceQ == 2)
printf("     A SPECTACULAR CPU COMBO ATTACK!\n");
if (diceQ == 3)
printf("     THAT'S A MAGNIFICENT CPU COMBO!\n");
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AND AN OUTSTANDING CPU WIN!\n\n");
if (diceQ == 2)
printf("     IT WAS A STUNNING CPU VICTORY!\n\n");
if (diceQ == 3)
printf("     AND AN AWESOME CPU WIN!\n\n");
}
supspatt = 0;
hypsp = 0;
enspcomb2 = 0;
enspcomb1 = 0;
}
enemspcombC = 0;
}
if ((playerhp < 1) || ((spatt2 == 1) && (supspatt2 == 1)))
{
diceM = 15;
}
else
{
diceM = ((rand() % 56 + 1) + (diflev + 3));///*************DIFLEV INCREMENT MUST BE AT 3!!! AT diflev + 2 MAGIC SUPER WILL NOT ACTIVATE ON + 30 DIFLEV!!!!!!!!!!!!!
if (diceR == 1)
{
diceR = (rand() % 8) + 1;//6
if (diceR == 1)
diceM = 0;
diceR = 0;
}
if (supspatt2 < 1)
{
magdup = 0;
}
if (spatt2 < 1)
{
magdup2 = 0;
}
if (((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && (hypsp2 < 1) && (enspcomb6 < 1))
{//&& (enemyhp < 5)) DICE E ORIGINALLY 16
{
++g;
playerhp = (playerhp - 6 * dmg2); //6
printf("\n     CPU executes SUPER MAGIC ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
mspatt = 1;
mspatt3 = 1;
Sleep (500);
if ((mspatt == 1) && (spatt2 == 1) && (supspatt2 != 1))
emgspcom5 = 1;
if ((mspatt == 1) && (supspatt2 == 1) && (spatt2 !=1))
emgspcom = 1;
if ((playerhp < 1) && (spatt2 != 1) && (supspatt2 != 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     A FANTASTIC CPU MAGIC FINISH!\n\n");
if (diceQ == 2)
printf("\n     THAT WAS A GREAT CPU WIN!\n\n");
if (diceQ == 3)
printf("\n     AN IMPRESSIVE MAGIC FINISH!\n\n");
}
}
if ((emgspcom == 1) && (f < 1) && (e > 0) && (d < 1) && (emgspcom5 != 1) && ((diceF > 29) && (diceB >= 5) && (diceB <= 6) && (diceM > 40)))
{
++magdup;
if (magdup == 1)
printf("\n     THE CPU SUPER SPECIAL MAGIC COMBO!\n");
if (magdup == 2)
printf("\n     ANOTHER CPU SUPER SPECIAL MAGIC COMBO!\n");
if (magdup > 2)
printf("\n     YET ANOTHER CPU SUPER SPECIAL MAGIC COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     A THRILLING SPECIAL MAGIC ATTACK!\n");
if (diceQ == 2)
printf("     AN INCREDIBLE SPECIAL MAGIC COMBO!\n");
if (diceQ == 3)
printf("     A FORMIDABLE SPECIAL MAGIC ATTACK!\n");
emgspcom = 0;
emagsup = 1;
emagsup6 = 0;
diceS = (rand() % 10) + 1;//10
if (diceS == 1)
{
emagsup = 0;
}
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     IT WAS A SENSATIONAL VICTORY!\n\n");
if (diceQ == 2)
printf("     IT WAS AN AMAZING CPU VICTORY!\n\n");
if (diceQ == 3)
printf("     AND AN OUTSTANDING CPU WIN!\n\n");
}
}
if ((emgspcom5 == 1) && (f < 1) && (e < 1) && (d > 0) && (emgspcom != 1) && ((diceE > 20) && (diceB >= 4) && (diceB <= 6) && (diceM > 40)))
{
++magdup2;
if (magdup2 == 1)
printf("\n     THE CPU SPECIAL MAGIC COMBO!\n");
if (magdup2 == 2)
printf("\n     ANOTHER CPU SPECIAL MAGIC COMBO!\n");
if (magdup2 > 2)
printf("\n     YET ANOTHER CPU SPECIAL MAGIC COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     A GREAT SPECIAL MAGIC COMBO!\n");
if (diceQ == 2)
printf("     A NICE SPECIAL MAGIC COMBO!\n");
if (diceQ == 3)
printf("     A MEAN SPECIAL MAGIC COMBO!\n");
emgspcom5 = 0;
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     IT WAS A FANTASTIC FINISH!\n\n");
if (diceQ == 2)
printf("     AND A STUNNING MAGIC WIN!\n\n");
if (diceQ == 3)
printf("     AND AN EXCELLENT FINISH!\n\n");
}
}
if (playerhp < 1)
{
diceN = 15;
}
else
{
diceN = ((rand() % 116 + 1) + (diflev + 3));//174, 164 130
}
if ((emagsup > 0) && (f < 1) && (e < 1) && (d < 1) && ((diceN > 40) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && ((spatt2 < 1) && (supspatt2 < 1)))
{
playerhp = (playerhp - 8 * dmg2); //6 8
printf("\n     CPU executes HYPER MAGIC ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
mspatt4 = 1;
Sleep (500);
{
if ((spatt2 < 1) && (supspatt2 < 1))
{
mspatt2 = 0;
if ((mspatt3 == 1) && (mspatt4 == 1))
{
emgspcom4 = 1;
}
if (playerhp < 1)
{
diceP = 15;
}
else
{
diceP = ((rand() % 108 + 1) + (diflev + 3));//180, 170 136
}
if ((emagsup5 > 0) && (f < 1) && (e < 1) && (d < 1) && ((diceP > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceN > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && ((spatt2 < 1) && (supspatt2 < 1) && (hypsp2 < 1)))
{//
playerhp = (playerhp - 10 * dmg2); //6
printf("\n     CPU executes ULTRA MAGIC ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
mspatt5 = 1;
Sleep (500);
}
}
}
if ((emgspcom4 == 1) && (mspatt5 == 1))
{
emgspcom4 = 0;
emgspcom3 = 1;
}
if (diceN < 41)
{
magdup3 = 0;
}
if ((emgspcom4 == 1) && (f < 1) && (e < 1) && (d < 1) && ((diceN > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && ((mspatt3 > 0) && (mspatt4 > 0)))
{
++magdup3;
if (magdup3 == 1)
printf("\n     THE CPU SUPER MAGIC HYPER COMBO!\n");////
if (magdup3 == 2)
printf("\n     ANOTHER CPU SUPER MAGIC HYPER COMBO!\n");
if (magdup3 > 2)
printf("\n     YET ANOTHER CPU SUPER MAGIC HYPER COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AN OUTSTANDING CPU MAGIC COMBO!\n");
if (diceQ == 2)
printf("     A SENSATIONAL CPU MAGIC COMBO!\n");
if (diceQ == 3)
printf("     A PHENOMENAL CPU MAGIC COMBO!\n");
emgspcom4 = 0;
mspatt = 0;
mspatt2 = 0;
mspatt3 = 0;
mspatt4 = 0;
emagsup5 = 1;
diceR = (rand() % 7) + 1;//5
if (diceR == 1)
{
emagsup = 0;
emagsup5 = 0;
emagsup6 = 0;
}
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     IT WAS A MAGNIFICENT CPU WIN!\n\n");
if (diceQ == 2)
printf("     IT'S AN UNBEATABLE MAGIC WIN!\n\n");
if (diceQ == 3)
printf("     AND A STUNNING MAGIC VICTORY!\n\n");
}
}
if (diceP < 41)
{
magdup4 = 0;
}
if ((emgspcom3 == 1) && (f < 1) && (e < 1) && (d < 1) && ((diceP > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceN > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && ((mspatt3 > 0) && (mspatt4 > 0) && (mspatt5 > 0)))
{
++magdup4;
if (magdup4 == 1)
printf("\n     THE CPU ALPHA MAGIC ULTRA COMBO!\n");
if (magdup4 == 2)
printf("\n     ANOTHER CPU ALPHA MAGIC ULTRA COMBO!\n");
if (magdup4 > 2)
printf("\n     YET ANOTHER CPU ALPHA MAGIC ULTRA COMBO!\n");
printf("     THE ULTIMATE CPU MAGIC COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THE CPU IS ON TOP FORM!\n\n");
if (diceQ == 2)
printf("     THE CPU IS IN OVERDRIVE!\n\n");
if (diceQ == 3)
printf("     THE CPU CONTROLS THE CONTEST!\n\n");
emagsup = 0;
emagsup5 = 0;
emgspcom3 = 0;
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THAT'S A MEAN ROUTINE!\n\n");
if (diceQ == 2)
printf("     THE ULTIMATE CPU MAGIC COMBO!\n\n");
if (diceQ == 3)
printf("     THE ULTIMATE CPU FINISHER!\n\n");
}
}
}
}
}
if (diceR > 0)
{
diceS = (rand() % 10) + 1;//8
if (diceS == 1)
diceR = 0;
}
if (((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && (hypsp2 > 0) && (spatt2 > 0) && (enspcomb6 < 1) && (diflev > 6) && (diceR < 1))
emagsup6 = 1;
diceZB = (rand() % 10) + 1;
diceZC = (rand() % 10) + 1;
if ((diceB >= 2) && (diceB <= 6) && (c < 1) && (d < 1) && (e < 1) && (f < 1) && (g < 1) && (playerhp > 0))
{
if (diceZB > 5)
{
enemyhp = (enemyhp + 3 * dmg2);//10 5
printf("\n     CPU executes Magic Heal!\n");
printf("     CPU HP at %d\n\n", enemyhp);
++cpmag;
++cpmag2;
}
if ((cpmag2 > 2) && (diceZB > 5))
{
enemyhp = (enemyhp + 3 * dmg2);//10 5
printf("     CPU executes Magic Heal Bonus!\n");
printf("     CPU HP at %d\n\n", enemyhp);
cpmag2 = 0;
}
diceZC = (rand() % 10) + 1;
if ((diceZC > 7) && (diceZB < 6))
{
printf("\n");
}
if (diceZC > 7)
{
playerhp = (playerhp - 2 * dmg2);//10 5
printf("     CPU executes Magic Attack!\n");
printf("     Player HP at %d\n\n", playerhp);
++cpmag;
}
}
if ((diceB >= 2) && (diceB <= 6) && (d < 1) && (e < 1) && (f < 1) && (g < 1) && (playerhp > 0))
{
if ((c2 > 1) && (c > 0))
{
playerhp = (playerhp - 1 * dmg2);//10 5
printf("\n     CPU executes Bonus Attack!\n");
printf("     Player HP at %d\n\n", playerhp);
}
if ((diceZC < 8) && (diceZB < 6) && (c < 1))
{
printf("\n");
}
if ((c < 1) && (diceZC < 8) && (diceZB < 6))
{
playerhp = (playerhp - 2 * dmg2);//10 5
printf("     CPU executes Magic Attack!\n");
printf("     Player HP at %d\n\n", playerhp);
++cpmag;
}
if ((c > 0) && (cpmag > 0) && (c2 < 2))
printf("\n");
if (((c > 0) && (cpmag > 0)) || ((c < 1) && (diceZC > 7) && (cpmag > 2)))
{
playerhp = (playerhp - 1 * dmg2);//10 5
printf("     CPU executes Magic Bonus Attack!\n");
printf("     Player HP at %d\n\n", playerhp);
}
}
c = 0;
d = 0;
e = 0;
f = 0;
g = 0;
if ((diceB > 6) && (playerhp > 0))// 5
{
cpmag = 0;
c2 = 0;
enemyhp = (enemyhp - 1 * dmg2);
printf("\n     CPU executes Normal Attack!\n");
printf("     You evade!\n\n");
printf("     You counter-attack!\n");
printf("     CPU HP at %d\n\n", enemyhp);
if (choice = 'n')
{
diceG = (rand() % 11) + 1; //11
}
if ((choice = 'm') || (choice = 's'))
{
diceG = (rand() % 10) + 1; //10
}
if (((diceG >= 7) && (diceG <= 9)) && (consectr < 2))
{
consectr = (consectr + 1);
}
if (((diceG >= 10) && (diceG <= 11)) && (consectr < 2))
{
consectr = (consectr + 2);
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((ctr > 5) && (new6 < 1) && (cpusp  < 2))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     That was a very effective technique!\n");
if (diceQ == 2)
printf("     That was a very well-timed manoeuvre!\n");
if (diceQ == 3)
printf("     You outtimed the opponent perfectly!\n");
}
if (ctr < 6)
printf("     The contest came to an early finish!\n");
if (cpusp > 1)
printf("     You had a Special Round Chain of %d!\n", cpusp);
if ((cpusp > 1) && (ctr < 6) && (new6 > 0))
printf("\n");
if (new6 > 0)
printf("     It's a Consecutive Match Win Record!\n");
printf("     You won with the Counter-Attack!\n");
diceQ = (rand() % 2) + 1;
if (diceQ == 1)
{
if (((new6 < 1) && (cpusp  > 1) && (ctr > 5)) || ((ctr < 6) && (new6 < 1) && (cpusp  > 1)))
printf("\n     That was a nice defence!\n\n");
if (((new6 > 0) && (cpusp < 2)  && (ctr > 5)) || ((ctr < 6) && (new6 > 0) && (cpusp < 2)))
printf("\n     That was great technique!\n\n");
if (((new6 < 1) && (cpusp < 2) && (ctr < 6)) || ((ctr > 5) && (new6 < 1) && (cpusp  < 2)))
printf("\n     You showed excellent skill!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr > 5)) || ((ctr < 6) && (new6 > 0) && (cpusp  > 1)))
printf("\n     An exceptional performance!\n\n");
}
if (diceQ == 2)
{
if (((new6 < 1) && (cpusp  > 1) && (ctr > 5)) || ((ctr < 6) && (new6 < 1) && (cpusp  > 1)))
printf("\n     Great defence!\n\n");
if (((new6 > 0) && (cpusp < 2)  && (ctr > 5)) || ((ctr < 6) && (new6 > 0) && (cpusp < 2)))
printf("\n     That was good technique!\n\n");
if (((new6 < 1) && (cpusp < 2) && (ctr < 6)) || ((ctr > 5) && (new6 < 1) && (cpusp  < 2)))
printf("\n     Good defence!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr > 5)) || ((ctr < 6) && (new6 > 0) && (cpusp  > 1)))
printf("\n     Excellent defence!\n\n");
}
break;
}
if ((consectr > 1) && (diceB > 6) && (playerhp > 0))
{
enemyhp = (enemyhp - 1 * dmg2);
printf("     You get a Counter Bonus!\n");
printf("     CPU HP at %d\n\n", enemyhp);
++ctrbonon;
++spctrbon;
consectr = 0;
diceQ = (rand() % 4) + 1;
if (diceQ == 1)
++consecvic;
}
if ((enemyhp < 1) && (ctrbonon > 0))
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((ctr > 5) && (new6 < 1) && (cpusp  < 2))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     That was an excellent finishing move!\n");
if (diceQ == 2)
printf("     That was a stylish end to the fight!\n");
if (diceQ == 3)
printf("     That was a nice finish to the fight!\n");
}
if (ctr < 6)
printf("     The contest came to an early finish!\n");
if (new6 > 0)
printf("     It's a Consecutive Match Win Record!\n");
if ((cpusp > 1) && (ctr < 6) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You had a Special Round Chain of %d!\n", cpusp);
printf("     You won with the Counter Bonus!\n");
diceQ = (rand() % 2) + 1;
if (diceQ == 1)
{
if (((new6 < 1) && (cpusp  > 1) && (ctr > 5)) || ((ctr > 5) && (new6 < 1) && (cpusp  < 2)))
printf("\n     It was a great counter-attack!\n\n");
if (((new6 > 0) && (cpusp < 2)  && (ctr > 5)) || ((ctr < 6) && (new6 > 0) && (cpusp < 2)))
printf("\n     That was a fantastic follow-up!\n\n");
if (((new6 < 1) && (cpusp < 2) && (ctr < 6)) || ((ctr < 6) && (new6 < 1) && (cpusp  > 1)))
printf("\n     You showed strong defensive skills!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr > 5)) || ((ctr < 6) && (new6 > 0) && (cpusp  > 1)))
printf("\n     You defeated the opponent in style!\n\n");
}
if (diceQ == 2)
{
if (((new6 < 1) && (cpusp  > 1) && (ctr > 5)) || ((ctr > 5) && (new6 < 1) && (cpusp  < 2)))
printf("\n     Great counter-fighting!\n\n");
if (((new6 > 0) && (cpusp < 2)  && (ctr > 5)) || ((ctr < 6) && (new6 > 0) && (cpusp < 2)))
printf("\n     That was a great follow-up!\n\n");
if (((new6 < 1) && (cpusp < 2) && (ctr < 6)) || ((ctr < 6) && (new6 < 1) && (cpusp  > 1)))
printf("\n     That was a formidable defence!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr > 5)) || ((ctr < 6) && (new6 > 0) && (cpusp  > 1)))
printf("\n     The opponent was outmatched!\n\n");
}
break;
}
if ((diceB == 1) && (playerhp > 0))
{
cpmag = 0;
c2 = 0;
printf("\n     CPU executes Normal Attack!\n");
printf("     You defend!\n");
}
if (playerhp < 1)
{
wnct7 = 0;
wnct2 = 0;
fghton = 0;
new6 = 0;
wnctrec = 0;
wnctrecA = 0;
++cpuwn;
++cpuwn2;
++cpuwn3;
++cpuwn4;
++cpuwn5;
++cpuwn6;
++cpuwn8;
++cpwncop;
wnrt = (float)wnct / (wnct + cpuwn) * 100.0;
wnrt3 = (float)wnct3 / (wnct3 + cpuwn3) * 100.0;
wnrt5 = (float)wnct5 / (wnct5 + cpuwn5) * 100.0;
torwnrt = wnrt3;
if ((cpuwn8 == 1) && (wnct8 >= 0))
wnrtrec3 = torwnrt;
if (torwnrt < wnrtrec3)
{
wnrtrec3 = torwnrt;
fghton3 = 0;
++new7;
}
if (torwnrt > wnrtrec)
{
wnrtrec = torwnrt;
++new5;
}
if (cpuwn3 > cpuwnct)
{
cpuwnct = cpuwn3;
}
cpuwnrt = (float) cpuwnct / (cpuwnct + wnct3) * 100.0;
if (cpuwnrt > cpuwnrt2)
{
cpuwnrt2 = cpuwnrt;
if (cpuwnct > 1)
++new9;
}
if ((new9 > 0) && (cpuwnct > 1))
printf("\n     NEW RECORD!\n");
if (new9 < 1)
printf("\n");
printf("     CPU Tournament Win Rate: %.2f%%\n", cpuwnrt);
new9 = 0;
cpuwnct = 0;
if (new9 < 1)
printf("\n");
printf("     You lost the contest!\n");
if ((diceB == 2) || (diceB == 3) || (diceB == 4) || (diceB == 5) || (diceB == 6) || (dice1 < dice2) || (dice3 < dice4) || (dice5 < dice6))
{
diceQ = (rand() % 61) + 1;//12 24 32 38 40
if ((diceQ < 16) && (diceQ != 5) && (diceQ != 12) && (diceQ != 13))
printf("\n");
if (diceQ == 1)
printf("     You need to train harder!\n\n");
if (diceQ == 2)
printf("     But you can still succeed!\n\n");
if (diceQ == 3)
printf("     The opponent was tough!\n\n");
if (diceQ == 4)
printf("     The opponent fought well!\n\n");
if ((diceQ == 5) && (ctr > 8))
printf("\n     It was a tough Fight Text!\n\n");
if (diceQ == 6)
printf("     You were outmatched this time!\n\n");
if (diceQ == 7)
printf("     Maybe your timing's out?\n\n");
if (diceQ == 8)
printf("     You should try another strategy!\n\n");
if (diceQ == 9)
printf("     But you've got what it takes!\n\n");
if (diceQ == 10)
printf("     Don't let defeat stop you!\n\n");
if (diceQ == 11)
printf("     That was a worthy opponent!\n\n");
if ((diceQ == 12) && (ctr > 4))
printf("\n     It was a difficult Fight Text!\n\n");
if ((diceQ == 13) && (ctr > 8))
printf("\n     It was a tough fight!\n\n");
if (diceQ == 14)
printf("     You were outmatched!\n\n");
if (diceQ == 15)
{
printf("     But you can still win!\n\n");
}
diceQ1 = (rand() % 66) + 1;//14 16 32 38 42 44 48 70
if (((diceQ > 15) && (diceQ1 < 17) && (diceQ1 > 1)) || ((diceQ1 > 1) && (diceQ1 < 17) && ((diceQ == 5) || (diceQ == 13))  && (ctr < 9)) || ((diceQ1 > 1) && (diceQ1 < 17) && (diceQ == 12) && (ctr < 5)))
printf("\n");
if ((diceQ > 15) && (diceQ1 == 1) && (diceE <= 20) && (diceF <= 29) && (diceC <= 47) && (diceM <= 40))
printf("\n");
if ((diceQ1 == 1) && (diceE <= 20) && (diceF <= 29) && (diceC <= 47) && (diceM <= 40))
printf("     Keep your guard up!\n\n");
if (diceQ1 == 2)
printf("     Keep on Text Fighting!\n\n");
if (diceQ1 == 3)
printf("     Don't stop Text Fighting!\n\n");
if (diceQ1 == 4)
printf("     Don't give up yet!\n\n");
if (diceQ1 == 5)
printf("     Don't let it get to you!\n\n");
if (diceQ1 == 6)
printf("     There'll be other matches!\n\n");
if (diceQ1 == 7)
printf("     Develop your technique!\n\n");
if (diceQ1 == 8)
printf("     Good luck in the next bout!\n\n");
if (diceQ1 == 9)
printf("     Work on counter skills!\n\n");
if (diceQ1 == 10)
printf("     Work on attack methods!\n\n");
if (diceQ1 == 11)
printf("     Practise evasive moves!\n\n");
if (diceQ1 == 12)
printf("     Sharpen your skills!\n\n");
if (diceQ1 == 13)
printf("     Work on your counter!\n\n");
if (diceQ1 == 14)
printf("     Work on your attacks!\n\n");
if (diceQ1 == 15)
printf("     Improve your defence!\n\n");
if (diceQ1 == 16)
printf("     Make another attempt!\n\n");
}
printf("\n     Enter (0) to exit - any other key to continue\n\n\n");
scanf( " %d", &ans6);
while ( (getchar()) != '\n' );
{
Sleep (999);
system("cls");
}
if (contest > 1)
{
--contest;
}
if (ans6 == 0)
{
exit (0);
}
}
hypsp2 = 0;
spatt2 = 0;
supspatt2 = 0;
supspatt = 0;
hypsp = 0;
spatt = 0;
mspatt3 = 0;
mspatt4 = 0;
mspatt5 = 0;
mspatt = 0;
spoff = 0;
spoff2 = 0;
mgoff = 0;
magcom = 0;
if (playerhp > 0)
printf("\n\n     The next round begins!\n\n\n");
}while  (playerhp > 0);
if (torwnrt > wnrtrec)
{
wnrtrec = torwnrt;
++new5;
}
if (wnrtrec3 > torwnrt)
{
wnrtrec3 = torwnrt;
fghton3 = 0;
++new7;
}
if (enemyhp < 1)
{
++fghton2;
++fghton3;
++contest;
++wnct;
++wnct2;
++wnct3;
++wnct4;
++wnct5;
++wnct6;
++wnct8;
++new10;
if (cpuwn2 == 1)
cpuwn2 = 0;
if (cpuwn2 > 1)
cpuwn2 = 1;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
++new6;
}
if (wnct2 > wnctrec)
{
wnctrec = wnct2;
++new4;
}
wnrt = (float)wnct / (wnct + cpuwn) * 100.0;
if (wnrtrec3 > torwnrt)
wnrtrec3 = torwnrt;
wnrt5 = (float)wnct5 / (wnct5 + cpuwn5) * 100.0;
if (wnrtrec < wnrt5)
wnrtrec = wnrt5;
wnrt3 = (float)wnct3 / (wnct3 + cpuwn3) * 100.0;
torwnrt = wnrt3;
wnrt6 = (float)wnct6 / (wnct6 + cpuwn6) * 100.0;
if (wnrt6 > torwnrt3)
{
torwnrt3 = wnrt6;
}
if ((cpusp > cpusp3) && (cpusp > 1))
{
++new0;
cpusp3 = cpusp;
if (new0 > 2)
{
++new1;
}
}
}
enemyhp = 5 + (10 * (contest - 1));
playerhp = 5 + (5 * (contest - 1));
ctr2 = (ctr + ctr2);
consecvic = 0;
consecvic2 = 0;
consectr = 0;
ctr = 0;
spctrbon = 0;
ctrbonon = 0;
ctrbondef = 0;
enemspcombC = 0;
enspcomb1 = 0;
enspcomb2 = 0;
enspcomb3 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
magsp2 = 0;
normag = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
bonchn = 0;
bonchn2 = 0;
cpusp = 0;
cpusp2 = 0;
ultsp = 0;
++posdef;
magsp7 = 0;
ultsp4 = 0;
ultsp3 = 0;
magchn = 0;
mspatt = 0;
spatt = 0;
emgspcom = 0;
mspatt3 = 0;
mspatt2 = 0;
emgsupatt = 0;
emgspcom = 0;
mspatt3 = 0;
hypsp2 = 0;
spatt2 = 0;
emgspcom2 = 0;
supspatt2 = 0;
emgspcom4 = 0;
emgspcom5 = 0;
mspatt5 = 0;
enspcomb6 = 0;
bonrec = 0;
magrec = 0;
spmag3 = 0;
cpulow = 0;
dubon = 0;
posmag = 0;
cpmag = 0;
cpmag2 = 0;
c2 = 0;
magdup = 0;
magdup2 = 0;
magdup3 = 0;
magdup4 = 0;
spdup = 0;
supdup = 0;
supdup2 = 0;
ultdup = 0;
if (diflev < 6)
{
emagsup = 0;
emagsup5 = 0;
emagsup6 = 0;
}
if ((emagsup6 > 0) || (emagsup > 0))
{
diceT = (rand() % 2) + 1;
if (diceT == 1)
{
emagsup = 0;
emagsup5 = 0;
emagsup6 = 0;
}
}
if (diflev > 1)
{
enemyhp = (enemyhp) + (10 * diflev);
playerhp = (playerhp) + (5 * diflev);
}
} while (contest != 5);
if ((dmg2 < 2) && (dmg < 7))
{
printf("\n\n\n     ****************************************\n");
printf("     You won the Tournament! Congratulations!\n");
printf("     ****************************************\n\n");
printf("     You are the Text Level %d Champion!\n\n\n", dmg);
}
if (((dmg2 < 2) && (dmg > 6)) || ((dmg2 > 1) && (dmg > 6)))
{
printf("\n\n\n     **********************************************\n");
printf("     YOU WON THE GRAND TOURNAMENT! CONGRATULATIONS!\n");
printf("     **********************************************\n\n");
printf("     You have completed Text Fighter %d!\n\n\n", dmg2);
}
if ((dmg2 > 1) && (dmg < 7))
{
printf("\n\n\n     ****************************************\n");
printf("     You won the Tournament! Congratulations!\n");
printf("     ****************************************\n\n");
printf("     You are the Text Fighter %d - Text Level %d Champion!\n\n\n", dmg2, dmg);
}
if (torwnrt < 100)
printf("\n");
printf("     Tournament Win Rate: %.2f%%\n\n", torwnrt);
wnct6 = 0;
cpuwn6 = 0;
wnrt6 = 0;
wnct3 = 0;
cpuwn3 = 0;
wnrt3 = 0;
if (torwnrt < 100)
printf("     Tournament Win Rate High: %.2f%%\n\n", wnrtrec);
if (cpwncop > 0)
printf("     Tournament Win Rate Low: %.2f%%\n\n", wnrtrec3);
if ((cpwncop > 0) || (torwnrt < 100))
printf("\n");
if (diflev > 1)
{
printf("     Win Rate Last Tournament: %.2f%%\n\n", torwnrt2);
}
printf("     Win Rate Average: %.2f%%\n\n", wnrt);
if (diflev > 1)
printf("\n");
wnct4 = 0;
cpuwn4 = 0;
wnct5 = 0;
cpuwn5 = 0;
wnrt5 = 0;
cpwncop = 0;
printf("     Total Won/Lost: %d/%d\n\n", wnct, cpuwn);
printf("     Total Rounds Played: %d\n\n\n", ctr2);
if (new6 > 0)
{
printf("     NEW RECORD!\n");
new6 = 0;
}
printf("     Consecutive Matches Won: %d\n\n", wnctrec);
printf("     Consecutive Match Win Record: %d\n\n", wnctrec7);
if (cpusp3 > 1)
{
if (new1 > 0)
{
printf("     NEW RECORD!\n");
new1 = 0;
}
printf("     Special Round Chain Record: %d\n\n", cpusp3);
}
if (bonrec2 > 2)
{
if (new2 > 0)
{
printf("     NEW RECORD!\n");
new2 = 0;
}
printf("     Bonus Round Chain Record: %d\n\n", bonrec2);
}
if (magrec2 > 2)
{
if (new3 > 0)
{
printf("     NEW RECORD!\n");
new3 = 0;
}
printf("     Magic Bonus Round Chain Record: %d\n\n", magrec2);
}
printf("\n\n\n\n     GAME OVER!\n\n\n");
torwnrt2 = torwnrt;
torwnrt = 0;
wnrtrec = 0;
wnrtrec3 = 0;
cpuwnct = 0;
cpuwnrt = 0;
cpuwnrt2 = 0;
wnct8 = 0;
cpuwn8 = 0;
}
printf("\n     Enter (0) to exit - any other key to continue\n\n\n");
printf("  ");
scanf( " %c", &ans);
while ( (getchar()) != '\n' );
{
Sleep (999);
system("cls");
}
if (ans != '0')
{
printf("\n\n\n");
}
} while (ans != '0');
if (ans != '0')
{
return(main);
}
return(0);
}

