#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

char letter(int a){
    switch (a){
    case 0:
        /* code for A */
        for (int i=1;i<=13;i++){  
            for (int j=13-i;j>0;j--){  
                cout<<" ";

            }
            
            cout<<"A";

            for (int j=1;j<i;j++){
                if (i==7)
                {   
                    cout<<"A ";
                }

                else{
                    cout<<"  ";
                }
            }
            cout<<"A";

            cout<<endl;
        }

        break;
    
    case 1:
        /* code for B */
        for (int i=1;i<=13;i++){
            cout<<"\tB";

            if (i<=3){   
                for (int j=1;j<=i*2;j++){
                    cout<<" ";
                }
            }

            else if (i>=4 && i<=6){
                for (int j=i;j<=6;j++){
                    cout<<"  ";
                }
            }

            if (i==7||i==8||i==9||i==10){   
                for (int j=1;j<=(i-7)*2;j++){
                    cout<<" ";
                }
            }

            else if (i>=11 && i<=13){
                for (int j=i;j<=13;j++){
                    cout<<"  ";
                }
            }

            if (i==2||i==5||i==9||i==12){
                cout<<" ";
            }

            cout<<"B";
            cout<<endl;
        }
        break;

    case 2:
        /* code for C */
        for (int i=1;i<=13;i++){
            cout<<"\t";
            
            if (i<4){
                for (int j=i;j<=3;j++){
                    cout<<"  ";
                }
            }

            else if (i>10){
                for (int j=i;j>=11;j--){
                    cout<<"  ";
                }
            }
            
            cout<<"C";

            if (i==1 || i==13){
                cout<<"  C  C  ";
            }

            else if (i==2 || i==12){
                for ( int j=1; j<=10;j++){
                    cout<<" ";
                }
                cout<<"C";
            }

            else if (i==3 ||  i==11){
                cout<<"\t";
                for ( int j=1; j<=8;j++){
                    cout<<" ";
                }
                cout<<"C";
            }
            
            cout<<endl;
        }
        break;

    case 3:
        /* code for D */
        for (int i=1; i<=13; i++){
            cout<<"\tD ";

            if (i>1 && i<13){
                
                if (i>1 && i<5){
                    for (int j=i; j<=i*3; j++){
                        cout<<" ";
                    }
                }

                else if (i>9 && i<13){
                    for (int j=i;j<14;j++){
                        cout<<"  ";
                    }
                    cout<<" ";
                }
                
                else{
                    cout<<"\t   ";
                    if (i>=5 || i<=9){
                        cout<<" ";
                    }
                }

            }
            else{
                cout<<"D ";
            }

            cout<<"D";
            cout<<endl;
        }

        break;

    case 4:
        /* code for E */
        for (int i=1;i<=13;i++){
            cout<<"\tE";
            
            if (i==1 || i==7 || i==13){
                for (int i=1;i<8;i++){
                cout<<" E";
                }
            }

            cout<<endl;
        }

        break;
    
    case 5:
        /* code for F */
        for (int i=1;i<=13;i++){
            cout<<"\tF";
            
            if (i==1 || i==7){
                for (int i=1;i<8;i++){
                cout<<" F";
                }
            }

            cout<<endl;
        }
        break;   

    case 6:
        /* code for G */
        for (int i=1;i<=13;i++){
            if (i<4){
                for (int j=0;j<(4-i)*2;j++){    
                    cout<<" ";
                }  
            }

            if (i==4 || i==10){
                cout<<" ";
            }

            if (i>10){
                for (int j=0;j<(i-10)*2;j++){    
                    cout<<" ";
                }  
            }           
            cout<<"G";
            
            if (i==3 || i>8 && i<12){
                cout<<"\t\tG ";
                if(i==9){
                    for (int j=0;j<4;j++){
                        cout<<"G ";
                    }
                }
                
                if (i==10 || i==11){
                    for (int j=0;j<5;j++){
                        cout<<" ";
                    }
                    cout<<" G";
                }
                
                
            }

            if (i==2 || i==12){
                for (int j=0;j<10;j++){
                    cout<<" ";
                }
                cout<<"G";
            }

            if (i==1 || i==13){
                cout<<"  G  G";     
            }

            if (i==12||i==13){
                for (int j=0;j<=7;j++){
                    cout<<" ";
                }
                if (i==13){
                    cout<<"\t";
                }
                cout<<"G";
            }

            cout<<endl;
        }
        break;

    case 7:
        /* code for H*/
        for (int i=1;i<=13;i++){
            cout<<"\tH ";
            if (i==7){
                for (int j=0;j<8;j++){
                    cout<<"H ";
                }
                cout<<endl;
            }
            else{
                cout<<"\t\tH"<<endl;
            }
        }
        break;

    case 8:
        /* code for I */
        for (int i=1;i<=13;i++){
            cout<<"\t";
            if (i==1 || i==13){
                for (int j=0;j<9;j++){
                    cout<<"I ";
                }
            }
            else{
                for (int j=0;j<8;j++){
                    cout<<" ";
                }
                cout<<"I";
            }
            cout<<endl;
        }
        break;

    case 9:
        /* code for J */
        for (int i=1;i<=13;i++){
            
            if (i==1){
                for (int j=0;j<14;j++){
                    cout<<" J";
                }
                cout<<endl;
            }
            
            else{
                if (i>1 && i<9){
                    cout<<"\t";
                    for (int j=0;j<6;j++){
                        cout<<" ";
                    }
                    cout<<"J"<<endl;
                }
                
                else if (i==9 || i==10){
                    cout<<"J\t";
                    for (int j=0;j<6;j++){
                        cout<<" ";
                    }
                    cout<<"J"<<endl;
                }
                else{
                    int j=i-10,k=0;
                    while(j>1){
                        k+=j;
                        j--;
                        while (k>0){
                            cout<<" ";
                            k--;
                        }
                    }
                    cout<<"J";

                    

                    if (i!=13){
                        cout<<"\t";
                        for (int j=2*(13-i);j>0;j--){
                        cout<<" ";
                        }
                    }
                    cout<<" J"<<endl;
                    }
                }
        }
        break;

    case 10:
        /* code for K */
        for (int i=1;i<=13;i++){
            cout<<"\tK ";
            for (int j=7-i;j>0;j--){
                cout<<"  ";
            }
            for (int j=i-7;j>0;j--){
                cout<<"  ";
            }
            cout<<"K"<<endl;
        }
        break;

    case 11:
        /* code for L */
        for (int i=1;i<=13;i++){
            cout<<"\tL";
            if (i==13){
                for (int j=0;j<9;j++){
                    cout<<" L";
                }
            }
            cout<<endl;
        }
        break;

    case 12:
        /* code for M */
        for (int i=1;i<=13;i++){
            cout<<"M ";
            if(i>8){
                cout<<"\t\t\t\t";
            }
            else if (i==8){
                cout<<"\t\tM\t\t";
            }
            
            else{
                for (int j=0;j<i-1;j++){
                    cout<<"  ";
                }
                cout<<"M ";
                for (int j=2*(7-i)+1;j>0;j--){
                    cout<<"  ";
                }
                cout<<"M ";
                for (int j=0;j<i-1;j++){
                    cout<<"  ";
                }
                
            }
            cout<<"M"<<endl;
        }
        break;

    case 13:
        /* code for N */
        for (int i=1;i<=13;i++){
            cout<<"\tN";
            for (int j=i-1;j>0;j--){
                cout<<" ";
            }
            cout<<"N";
            for (int j=13-i;j>0;j--){
                cout<<" ";
            }
            cout<<"N"<<endl;
        }
        break;

    case 14:
        /* code for O */
        for (int i=1;i<=13;i++){
            if (i==1 || i==13){
                for (int j=0;j<10;j++){
                    cout<<" ";
                }
                for (int j=0;j<3;j++){
                    cout<<"O  ";
                }
            }
            
            else if ((i>1 && i<6) || (i>8 && i<13)){
                if (i==5 || i==9){
                    cout<<" O";
                    for (int j=0;j<14;j++){
                        cout<<" ";
                    }
                }
                else{
                    if (i<5){
                        for (int j=4;j>=i;j--){
                        cout<<"  ";
                        }
                        cout<<"O";
                        for (int j=i-1;j>0;j--){
                            cout<<"    ";
                        }
                    }
                    else{
                        for (int j=i;j>=10;j--){
                        cout<<"  ";
                        }
                        cout<<"O";
                        for (int j=i;j<=12;j++){
                            cout<<"    ";
                        }
                    }
                }
                for (int j=1;j<9;j++){
                    cout<<" ";
                }
                cout<<" O";
            }
        
            else{
                cout<<"O ";
                for (int j=0;j<23;j++){
                    cout<<" ";
                }
                cout<<" O";
            }
            cout<<endl;
        }
        break;

    case 15:
        /* code for P */
        for (int i=1;i<=13;i++){
            cout<<"\tP";
            if (i<7){
                if (i==3 || i==4){
                    for (int j=0;j<6;j++){
                        cout<<" ";
                    }
                }
                else{
                    int temp = i;
                    if (i>4){
                        i=7-i;
                    }
                    for (int j=i*i;j>=0;j--){
                        cout<<" ";
                    }
                    i=temp;
                }
                cout<<"P";
            }
            cout<<endl;   
        }
        
        break;

    case 16:
        /* code for Q */
        for (int i=1;i<=13;i++){
            if (i==1 || i==12){
                for (int j=0;j<5;j++){
                    cout<<" ";
                }
                for (int j=0;j<3;j++){
                    cout<<"  Q";
                }
                if (i==12){
                    cout<<" Q";
                }
            }
            
            else if (i>1 && i<5){
                int j=pow(2,4-i);
                while (j>0){
                    cout<<" ";
                    j--;
                }
                cout<<"Q";
                for (int j=0;j<12;j++){
                    cout<<" ";
                }
                if (i>2){
                    int j=i+(i-2);
                    while(j>0){
                        cout<<" ";
                        j--;
                    }
                }
                cout<<"Q";
            }

            else if (i>4 && i<9){
                cout<<"Q";
                for (int j=0;j<20;j++){
                    cout<<" ";
                }
                cout<<"Q";
            }

            else if(i>8 && i<12){
                int j= pow (2,i-9);
                while (j>0){
                    cout<<" ";
                    j--;
                }
                cout<<"Q";
                for (int j=0;j<9;j++){
                    cout<<" ";  
                }
                if (i!=11){
                    cout<<" ";
                }
                cout<<"Q ";
                if (i<11){
                    int j=2*(11-i)+1;
                    while(j>0){
                        cout<<" ";
                        j--;
                    }
                }
                cout<<" Q";
            }
            
            else if (i==13){
                for (int j=0;j<16;j++){
                    cout<<" ";
                }
                cout<<"Q";
            }
            cout<<endl;
        }
        break;

    case 17:
        /* code for R */
        for (int i=1;i<=13;i++){
            cout<<"\tR";
            if (i<7){
                if (i==3 || i==4){
                    for (int j=0;j<6;j++){
                        cout<<" ";
                    }
                }
                else{
                    int temp = i;
                    if (i>4){
                        i=7-i;
                    }
                    for (int j=i*i;j>=0;j--){
                        cout<<" ";
                    }
                    i=temp;
                }
                cout<<"R";
            }
            else{
                for (int j=1;j<=i-6;j++){
                    cout<<" ";
                }
                cout<<"R";
            }
            
            cout<<endl;
        }
        break;

    case 18:
        /* code for S */
        for (int i=1;i<=13;i++){
            if (i==1 || i==7 || i==13){
                for (int j=0;j<7;j++){
                    cout<<" ";
                }
                cout<<"S  S";
            }

            if (i>1 && i<7){
                for (int j=0;j<4;j++){
                    cout<<" ";
                }
                if (i==2 || i==6){
                    cout<<" ";
                }
                cout<<"S";
                if (i<4){
                    for (int j=0;j<6;j++){
                        cout<<" ";
                    }
                    if(i==3){
                        cout<<"  ";
                    }
                    cout<<"S";
                }
                
            }

            if (i>7 && i<11){
                for (int j=0;j<12;j++){
                    cout<<" ";
                }
                if(i!=8){
                    cout<<" ";
                }
                cout<<"S";
            }

            if (i==11 || i==12){
                int j=i-7;
                while(j>0){
                    cout<<" ";
                    j--;
                }
                cout<<"S";
                for (int j=0;j<6;j++){
                    cout<<" ";
                }
                if (i==11){
                    cout<<"  ";
                }
                cout<<"S";
            }
            cout<<endl;
        }
        break;

    case 19:
        /* code for T */
        for (int i=1;i<=13;i++){
            cout<<"\t";
            if (i==1){
                for (int j=0;j<10;j++){
                    cout<<"T ";
                }
            }
            else{
                for (int j=0;j<5;j++){
                    cout<<"  ";
                }
            }
            cout<<"T"<<endl;
        }
        break;

    case 20:
        /* code for U */
        for (int i=1;i<=13;i++){
            cout<<"\t";
            if (i<11){
                cout<<"U";
                for (int j=0;j<17;j++)
                cout<<" ";
                cout<<"U";
            }
            else{
                for (int j=0;j<2*(i-11)+1;j++){
                    cout<<" ";
                }
                if (i!=13){
                    cout<<"U";
                    for (int j=0;j<11;j++){
                        cout<<" ";
                    }
                    if (i==11){
                        for (int j=0;j<4;j++){
                            cout<<" ";
                        }
                    }
                    cout<<"U";
                }
                else{
                    for (int j=0;j<3;j++)
                        cout<<" U ";
                }

            }
            cout<<endl;
        }
        break;

    case 21:
        /* code for V */
        for (int i=1;i<=13;i++){
            for (int j=1;j<i;j++){
                cout<<" ";
            }
            cout<<"V";
            for (int j=2*(13-i);j>0;j--){
                cout<<" ";
            }
            cout<<"V"<<endl;
        }
        break;

    case 22:
        /* code for W */
        for (int i=1;i<=13;i++){
            cout<<"\tW";
            if (i<6){
                for (int j=0;j<15;j++){cout<<" ";}
            }
            else{
                for (int j=13-i;j>0;j--){
                    cout<<" ";
                }
                cout<<"W";

                if(i!=6){
                    int j=2*(i-7)+1;
                    while(j>0){
                        cout<<" ";
                        j--;
                    }
                    cout<<"W";
                }

                for (int j=13-i;j>0;j--){
                    cout<<" ";
                }
            }
            cout<<"W"<<endl;
        }
        break;

    case 23:
        /* code for X */
        for (int i=1;i<=13;i++){
            cout<<"\t";
            if (i<7){
                for(int j=i-1;j>0;j--){cout<<" ";}
                cout<<"X";
                for (int j=2*(6-i)+1;j>0;j--){cout<<" ";}
            }

            else if (i==7){
                for (int j=1;j<i;j++){cout<<" ";}
            }
            
            else{
                for(int j=13-i;j>0;j--){cout<<" ";}
                cout<<"X";
                for (int j=0;j<2*(i-8)+1;j++){cout<<" ";}
            }
            cout<<"X"<<endl;
        }
        
        break;

    case 24:
        /* code for Y */
        for (int i=1;i<=13;i++){
            cout<<"\t";
            if (i<8){
                for (int j=i-1;j>0;j--){cout<<" ";}
                cout<<"Y";
                for (int j=2*(7-i)+1;j>0;j--){cout<<" ";}
            }

            else{
                for (int j=0;j<7;j++){cout<<" ";}
            }
            cout<<"Y"<<endl;
        }
        break;

    case 25:
        /* code for Z */
        for (int i=1;i<=13;i++){
            if (i==1 || i==13){
                for (int j=0;j<11;j++){
                    cout<<"Z ";
                }
            }
            else{
                int j=2*(12-i)+1;
                while (j>0){
                    cout<<" ";
                    j--;
                }
            }
            cout<<"Z "<<endl;
        }
        break;

    default:
        break;
    }
}

int main(){
    string name;
    cout<<"Enter your Name in CAPS: ";
    getline(cin,name);

    int size = name.length();

    char alpha[]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    for (int i = 0; i<size; i++){
        for (int j=0;j<26;j++){
            if (name[i]==alpha[j]){
                cout<<endl<<endl;
                letter (j);
            }
        }
    }
    return 0;
}