/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/war/basic/war.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x55d6f9d26e00 ---------A   01010 PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    0x55d6f9d26ed0 ---------A   01020 REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    0x55d6f9d26f50 ---------A   01030 REM
    0x55d6f9d27140 ---------A   01040 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x55d6f9d27260 ---------A   01050 PRINT "AS S-7 FOR SPADE 7.  "
    0x55d6f9d273c0 ---------A T 01060 PRINT "DO YOU WANT DIRECTIONS"
    0x55d6f9d27520 ---------A   01070 INPUT B$
    0x55d6f9d27710 ---------A   01080 IF B$="N" THEN 1150
    0x55d6f9d27900 ---------A   01090 IF B$="Y" THEN 1120
    0x55d6f9d272b0 ---------A   01100 PRINT "Y OR N, PLEASE.  ";
    0x55d6f9d27b40 ---------A   01110 GO TO 1060
    0x55d6f9d2bf00 ---------A T 01120 PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    0x55d6f9d2c080 ---------A   01130 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    0x55d6f9d2c1d0 ---------A   01140 PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x55d6f9d2c240 ---------A T 01150 PRINT
    0x55d6f9d2c2b0 ---------A   01160 PRINT
    0x55d6f9d2c620 ---------A   01170 DIM A$(52), L(54)
    0x55d6f9d2c9b0 ---------A   01180 FOR I=1 TO 52
    0x55d6f9d2caf0 ---------A   01190 READ A$(I)
    0x55d6f9d2cb90 ---------A   01200 NEXT I
    0x55d6f9d2cc10 ---------A   01210 RANDOM
    0x55d6f9d2ceb0 ---------A   01220 FOR J=1 TO 52
    0x55d6f9d2d370 ---------A   01230 LET L(J)=INT(52*RND+1)
    0x55d6f9d2d6b0 ---------A   01240 FOR K=1 TO J-1
    0x55d6f9d2d8f0 ---------A   01250 IF L(K)<>L(J) THEN 1280
    0x55d6f9d2db10 ---------A   01260 LET J=J-1
    0x55d6f9d2db80 ---------A   01270 GO TO 1290
    0x55d6f9d2dc20 ---------A T 01280 NEXT K
    0x55d6f9d2dce0 ---------A T 01290 NEXT J
    0x55d6f9d2df80 ---------A T 01300 LET P=P+1
    0x55d6f9d2e190 ---------A   01310 LET M1=L(P)
    0x55d6f9d2e3a0 ---------A   01320 LET P=P+1
    0x55d6f9d2e5b0 ---------A   01330 LET M2=L(P)
    0x55d6f9d2e830 ---------A   01340 PRINT
    0x55d6f9d2e8c0 ---------A   01350 PRINT
    0x55d6f9d2ecc0 ---------A   01360 PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    0x55d6f9d2f0e0 ---------A   01370 LET N1=INT((M1-.5)/4)
    0x55d6f9d2f500 ---------A   01380 LET N2=INT((M2-.5)/4)
    0x55d6f9d2f670 ---------A   01390 IF N1>=N2 THEN 1430
    0x55d6f9d2f930 ---------A   01400 LET A1=A1+1
    0x55d6f9d2fcc0 ---------A   01410 PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    0x55d6f9d2fd30 ---------A   01420 GO TO 1480
    0x55d6f9d2fe90 ---------A T 01430 IF N1=N2 THEN 1470
    0x55d6f9d300d0 ---------A   01440 LET B1=B1+1
    0x55d6f9d303e0 ---------A   01450 PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    0x55d6f9d30460 ---------A   01460 GO TO 1480
    0x55d6f9d30590 ---------A T 01470 PRINT "TIE. N SCORE CHANGE."
    0x55d6f9d30890 ---------A T 01480 IF L(P+1)= 0 THEN 1550
    0x55d6f9d30a00 ---------A   01490 PRINT "DO YOU WANT TO CONTINUE";
    0x55d6f9d30b60 ---------A T 01500 INPUT V$
    0x55d6f9d30d50 ---------A   01510 IF V$="Y" THEN 1300
    0x55d6f9d30f40 ---------A   01520 IF V$="NO" THEN 1590
    0x55d6f9d310a0 ---------A   01530 PRINT"Y OR NO, PLEASE.  ";
    0x55d6f9d31110 ---------A   01540 GO TO 1500
    0x55d6f9d31170 ---------A T 01550 PRINT
    0x55d6f9d312d0 ---------A   01560 PRINT" "
    0x55d6f9d314b0 ---------A   01570 PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    0x55d6f9d31820 ---------A   01580 PRINTTAB(40);"PDP-10--";A1
    0x55d6f9d31990 ---------A T 01590 PRINT"THANKS FOR PLAYING. IT WAS FUN."
    0x55d6f9d32570 ---------A   01600 DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    0x55d6f9d33150 ---------A   01610 DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    0x55d6f9d33c60 ---------A   01620 DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    0x55d6f9d342d0 ---------A   01630 DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    0x55d6f9d34320 ---------A   01640 STOP
    0x55d6f9d34380 ---------A   01650 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01060      01110T
     01120      01090T
     01150      01080T
     01280      01250T
     01290      01270T
     01300      01510T
     01430      01390T
     01470      01430T
     01480      01420T, 01460T
     01500      01540T
     01550      01480T
     01590      01520T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x55d6f9d26e00   0x55d6f9d26e00   0x55d6f9d34380   0x55d6f9d34380 


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01650 - 10000    8360 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/war/basic/war.bas'
 *
    A$    Array    String      {0,53} 
    A1             Integer 
    B$             String  
    B1             Integer 
    I              Integer 
    INT   Function Integer     args=1, float 
    J              Integer 
    K              Integer 
    L     Array    Integer     {0,55} 
    M1             Integer 
    M2             Integer 
    N1             Integer 
    N2             Integer 
    P              Integer 
    RND   Function Integer     args=1, int   
    TAB   Function String      args=1, 
    V$             String  

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/war/basic/war.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x55d6f9d26e00 ---------A   01000 PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    0x55d6f9d26ed0 ---------A   01010 REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    0x55d6f9d26f50 ---------A   01020 REM
    0x55d6f9d27140 ---------A   01030 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x55d6f9d27260 ---------A   01040 PRINT "AS S-7 FOR SPADE 7.  "
    0x55d6f9d273c0 ---------A T 01050 PRINT "DO YOU WANT DIRECTIONS"
    0x55d6f9d27520 ---------A   01060 INPUT B$
    0x55d6f9d27710 ---------A   01070 IF B$="N" THEN 1140
    0x55d6f9d27900 ---------A   01080 IF B$="Y" THEN 1110
    0x55d6f9d272b0 ---------A   01090 PRINT "Y OR N, PLEASE.  ";
    0x55d6f9d27b40 ---------A   01100 GO TO 1050
    0x55d6f9d2bf00 ---------A T 01110 PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    0x55d6f9d2c080 ---------A   01120 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    0x55d6f9d2c1d0 ---------A   01130 PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x55d6f9d2c240 ---------A T 01140 PRINT
    0x55d6f9d2c2b0 ---------A   01150 PRINT
    0x55d6f9d2c620 ---------A   01160 DIM A$(52), L(54)
    0x55d6f9d2c9b0 ---------A   01170 FOR I=1 TO 52
    0x55d6f9d2caf0 ---------A   01180 READ A$(I)
    0x55d6f9d2cb90 ---------A   01190 NEXT I
    0x55d6f9d2cc10 ---------A   01200 RANDOM
    0x55d6f9d2ceb0 ---------A   01210 FOR J=1 TO 52
    0x55d6f9d2d370 ---------A   01220 LET L(J)=INT(52*RND+1)
    0x55d6f9d2d6b0 ---------A   01230 FOR K=1 TO J-1
    0x55d6f9d2d8f0 ---------A   01240 IF L(K)<>L(J) THEN 1270
    0x55d6f9d2db10 ---------A   01250 LET J=J-1
    0x55d6f9d2db80 ---------A   01260 GO TO 1280
    0x55d6f9d2dc20 ---------A T 01270 NEXT K
    0x55d6f9d2dce0 ---------A T 01280 NEXT J
    0x55d6f9d2df80 ---------A T 01290 LET P=P+1
    0x55d6f9d2e190 ---------A   01300 LET M1=L(P)
    0x55d6f9d2e3a0 ---------A   01310 LET P=P+1
    0x55d6f9d2e5b0 ---------A   01320 LET M2=L(P)
    0x55d6f9d2e830 ---------A   01330 PRINT
    0x55d6f9d2e8c0 ---------A   01340 PRINT
    0x55d6f9d2ecc0 ---------A   01350 PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    0x55d6f9d2f0e0 ---------A   01360 LET N1=INT((M1-.5)/4)
    0x55d6f9d2f500 ---------A   01370 LET N2=INT((M2-.5)/4)
    0x55d6f9d2f670 ---------A   01380 IF N1>=N2 THEN 1420
    0x55d6f9d2f930 ---------A   01390 LET A1=A1+1
    0x55d6f9d2fcc0 ---------A   01400 PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    0x55d6f9d2fd30 ---------A   01410 GO TO 1470
    0x55d6f9d2fe90 ---------A T 01420 IF N1=N2 THEN 1460
    0x55d6f9d300d0 ---------A   01430 LET B1=B1+1
    0x55d6f9d303e0 ---------A   01440 PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    0x55d6f9d30460 ---------A   01450 GO TO 1470
    0x55d6f9d30590 ---------A T 01460 PRINT "TIE. N SCORE CHANGE."
    0x55d6f9d30890 ---------A T 01470 IF L(P+1)= 0 THEN 1540
    0x55d6f9d30a00 ---------A   01480 PRINT "DO YOU WANT TO CONTINUE";
    0x55d6f9d30b60 ---------A T 01490 INPUT V$
    0x55d6f9d30d50 ---------A   01500 IF V$="Y" THEN 1290
    0x55d6f9d30f40 ---------A   01510 IF V$="NO" THEN 1580
    0x55d6f9d310a0 ---------A   01520 PRINT"Y OR NO, PLEASE.  ";
    0x55d6f9d31110 ---------A   01530 GO TO 1490
    0x55d6f9d31170 ---------A T 01540 PRINT
    0x55d6f9d312d0 ---------A   01550 PRINT" "
    0x55d6f9d314b0 ---------A   01560 PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    0x55d6f9d31820 ---------A   01570 PRINTTAB(40);"PDP-10--";A1
    0x55d6f9d31990 ---------A T 01580 PRINT"THANKS FOR PLAYING. IT WAS FUN."
    0x55d6f9d32570 ---------A   01590 DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    0x55d6f9d33150 ---------A   01600 DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    0x55d6f9d33c60 ---------A   01610 DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    0x55d6f9d342d0 ---------A   01620 DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    0x55d6f9d34320 ---------A   01630 STOP
    0x55d6f9d34380 ---------A   01640 END
 */

//---------------------------------------------------------------------------
// $Header$ 
//
// NOTE: This program has been automatically tranlated by b2c
//
// $Log$ 
// 
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
char* data_01590s[]={"S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3","S-4","H-4","C-4","D-4","S-5","H-5","C-5"};
char* data_01600s[]={"D-5","S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7","S-8","H-8","C-8","D-8","S-9","H-9"};
char* data_01610s[]={"C-9","D-9","S10","H-10","C-10","D-10","S-J","H-J","C-J","D-J","S-Q","H-Q","C-Q","D-Q"};
char* data_01620s[]={"S-K","H-K","C-K","D-K","S-A","H-A","C-A","D-A"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1590, 15,data_01590s},
    { 1600, 15,data_01600s},
    { 1610, 14,data_01610s},
    { 1620,  8,data_01620s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char* A_str_arr[53];// Comments?
int   A1_int;       // Comments?
char* B_str;        // Comments?
int   B1_int;       // Comments?
int   I_int;        // Comments?
int   J_int;        // Comments?
int   K_int;        // Comments?
int   L_int_arr[55];// Comments?
int   M1_int;       // Comments?
int   M2_int;       // Comments?
int   N1_int;       // Comments?
int   N2_int;       // Comments?
int   P_int;        // Comments?
char* V_str;        // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    b2c_fprintf(stdout,"BASIC LIBRARY--'WAR'--18-JUL-70"); b2c_fprintf(stdout,"\n");
    // 01010 REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    b2c_fprintf(stdout,"THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"); b2c_fprintf(stdout,"\n");
    // 01040 PRINT "AS S-7 FOR SPADE 7.  "
    b2c_fprintf(stdout,"AS S-7 FOR SPADE 7.  "); b2c_fprintf(stdout,"\n");

  Lbl_01050:
    // 01050 PRINT "DO YOU WANT DIRECTIONS"
    b2c_fprintf(stdout,"DO YOU WANT DIRECTIONS"); b2c_fprintf(stdout,"\n");
    // 01060 INPUT B$
    // Start of Basic INPUT statement 01060
    printf(" ? ");
    char inpbuf_01060[100];
    if(fgets(inpbuf_01060,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01060=strtok(inpbuf_01060," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01060==nullptr){
            B_str = "";
        }else{
            B_str = ps_01060;
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF B$="N" THEN 1140
    if(strcmp(B_str,"N")==0)goto Lbl_01140;
    // 01080 IF B$="Y" THEN 1110
    if(strcmp(B_str,"Y")==0)goto Lbl_01110;
    // 01090 PRINT "Y OR N, PLEASE.  ";
    b2c_fprintf(stdout,"Y OR N, PLEASE.  "); 
    // 01100 GO TO 1050
    goto Lbl_01050;

  Lbl_01110:
    // 01110 PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    b2c_fprintf(stdout,"THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "); b2c_fprintf(stdout,"\n");
    // 01120 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    b2c_fprintf(stdout,"(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"); b2c_fprintf(stdout,"\n");
    // 01130 PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    b2c_fprintf(stdout," TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."); b2c_fprintf(stdout,"\n");

  Lbl_01140:
    // 01140 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01150 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01160 DIM A$(52), L(54)
    // 01170 FOR I=1 TO 52
    for(I_int=1;I_int<=52;I_int++){
        // 01180 READ A$(I)
        A_str_arr[(int)I_int] = Get_Data_String();
        // 01190 NEXT I
        int dummy_1190=0; // Ignore this line.
    }; // End-For(I_int)
    // 01200 RANDOM
    RANDOMIZE();
    // 01210 FOR J=1 TO 52
    for(J_int=1;J_int<=52;J_int++){
        // 01220 LET L(J)=INT(52*RND+1)
        L_int_arr[(int)J_int] = INT(52*RND()+1);
        // 01230 FOR K=1 TO J-1
        for(K_int=1;K_int<=J_int-1;K_int++){
            // 01240 IF L(K)<>L(J) THEN 1270
            if(L_int_arr[(int)K_int]!=L_int_arr[(int)J_int])goto Lbl_01270;
            // 01250 LET J=J-1
            J_int = J_int-1;
            // 01260 GO TO 1280
            goto Lbl_01280;

  Lbl_01270:
            // 01270 NEXT K
            int dummy_1270=0; // Ignore this line.
        }; // End-For(K_int)

  Lbl_01280:
        // 01280 NEXT J
        int dummy_1280=0; // Ignore this line.
    }; // End-For(J_int)

  Lbl_01290:
    // 01290 LET P=P+1
    P_int = P_int+1;
    // 01300 LET M1=L(P)
    M1_int = L_int_arr[(int)P_int];
    // 01310 LET P=P+1
    P_int = P_int+1;
    // 01320 LET M2=L(P)
    M2_int = L_int_arr[(int)P_int];
    // 01330 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01340 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01350 PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    b2c_fprintf(stdout,"YOU: %s@PDP-10: %s@",A_str_arr[(int)M1_int],A_str_arr[(int)M2_int]); 
    // 01360 LET N1=INT((M1-.5)/4)
    N1_int = INT((M1_int-0.5)/4);
    // 01370 LET N2=INT((M2-.5)/4)
    N2_int = INT((M2_int-0.5)/4);
    // 01380 IF N1>=N2 THEN 1420
    if(N1_int>=N2_int)goto Lbl_01420;
    // 01390 LET A1=A1+1
    A1_int = A1_int+1;
    // 01400 PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    b2c_fprintf(stdout,"PDP-10 WINS. YOU HAVE %d ; PDP-10 HAS %d ",B1_int,A1_int); b2c_fprintf(stdout,"\n");
    // 01410 GO TO 1470
    goto Lbl_01470;

  Lbl_01420:
    // 01420 IF N1=N2 THEN 1460
    if(N1_int==N2_int)goto Lbl_01460;
    // 01430 LET B1=B1+1
    B1_int = B1_int+1;
    // 01440 PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    b2c_fprintf(stdout,"YOU WIN.  YOU HAVE %d ; PDP-10 HAS %d ",B1_int,A1_int); b2c_fprintf(stdout,"\n");
    // 01450 GO TO 1470
    goto Lbl_01470;

  Lbl_01460:
    // 01460 PRINT "TIE. N SCORE CHANGE."
    b2c_fprintf(stdout,"TIE. N SCORE CHANGE."); b2c_fprintf(stdout,"\n");

  Lbl_01470:
    // 01470 IF L(P+1)= 0 THEN 1540
    if(L_int_arr[(int)P_int+1]==0)goto Lbl_01540;
    // 01480 PRINT "DO YOU WANT TO CONTINUE";
    b2c_fprintf(stdout,"DO YOU WANT TO CONTINUE"); 

  Lbl_01490:
    // 01490 INPUT V$
    // Start of Basic INPUT statement 01490
    printf(" ? ");
    char inpbuf_01490[100];
    if(fgets(inpbuf_01490,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01490=strtok(inpbuf_01490," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01490==nullptr){
            V_str = "";
        }else{
            V_str = ps_01490;
        };
    }; // End of Basic INPUT statement 01490
    // 01500 IF V$="Y" THEN 1290
    if(strcmp(V_str,"Y")==0)goto Lbl_01290;
    // 01510 IF V$="NO" THEN 1580
    if(strcmp(V_str,"NO")==0)goto Lbl_01580;
    // 01520 PRINT"Y OR NO, PLEASE.  ";
    b2c_fprintf(stdout,"Y OR NO, PLEASE.  "); 
    // 01530 GO TO 1490
    goto Lbl_01490;

  Lbl_01540:
    // 01540 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01550 PRINT" "
    b2c_fprintf(stdout," "); b2c_fprintf(stdout,"\n");
    // 01560 PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    b2c_fprintf(stdout,"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU-- %d ",B1_int); b2c_fprintf(stdout,"\n");
    // 01570 PRINTTAB(40);"PDP-10--";A1
    b2c_fprintf(stdout,"%sPDP-10-- %d ",TAB(40),A1_int); b2c_fprintf(stdout,"\n");

  Lbl_01580:
    // 01580 PRINT"THANKS FOR PLAYING. IT WAS FUN."
    b2c_fprintf(stdout,"THANKS FOR PLAYING. IT WAS FUN."); b2c_fprintf(stdout,"\n");
    // 01590 DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    // 01600 DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    // 01610 DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    // 01620 DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    // 01630 STOP
    exit(1);
    // 01640 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
