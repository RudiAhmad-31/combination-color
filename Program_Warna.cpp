#include <iostream>
#include <iomanip>
using namespace std;

int chooseColor, anlgs1, anlgs2, comp, sComp1, sComp2, triComp1, triComp2, teComp1, teComp2, teComp3;
char choosePerpaduan, opsi;

//Perpaduan warna Anlogus
void perpaduan1(){
    if(chooseColor == 1){
        anlgs1 = 13 - chooseColor;
        anlgs2 = 1 + chooseColor;
    } else if(chooseColor == 12){
            anlgs1 = chooseColor - 1 ;
            anlgs2 = 13 - chooseColor;
        } else if(chooseColor > 1 && chooseColor < 12){
                anlgs1 = chooseColor - 1;
                anlgs2 = chooseColor + 1;
            } else{}
    cout << "Perpaduan Warna Analogus = " << anlgs1 << "," << chooseColor << anlgs2;
}
// Perpaduan warna Complementary
void perpaduan2(){
    if(chooseColor <= 6 && chooseColor != 0){
        comp = chooseColor + 6;
    } else if(chooseColor > 6 && chooseColor <= 12){
            comp = chooseColor - 6;
        } else{}
    cout << "Perpaduan Warna Complementary = " << chooseColor << "," << comp;
}

// Perpaduan Warna Split Complementary
void perpaduan3(){
    if(chooseColor == 7 && chooseColor == 6){
        sComp1 = chooseColor + 5;
        sComp2 = chooseColor - 5;
    } else if(chooseColor < 6 && chooseColor != 0){
            sComp1 = chooseColor + 5;
            sComp2 = chooseColor + 7;
        } else if(chooseColor > 7 && chooseColor <= 12){
                sComp1 = chooseColor - 7;
                sComp2 = chooseColor - 5;
            } else{}
    cout << "Perpaduan Warna Split Complementary = " << chooseColor << "," << sComp1 << "," << sComp2;
}

// Perpaduan Warna Triadic Complementary
void perpaduan4(){
    if(chooseColor >= 5 && chooseColor <= 8){
        triComp1 = chooseColor - 4;
        triComp2 = chooseColor + 4;
    } else if(chooseColor > 8 && chooseColor <= 12 ){
            triComp1 = chooseColor - 8;
            triComp2 = chooseColor - 4;
        } else if(chooseColor < 5 && chooseColor != 0){
                triComp1 = chooseColor + 4;
                triComp2 = chooseColor + 8;
            } else{}
    cout << "Perpaduan Warna Triadic Complementary = " << chooseColor << "," << triComp1 << "," << triComp2;
}

// Perpaduan Warna Tetrad Complementary
void perpaduan5(){
    if(chooseColor >= 1 && chooseColor <= 3){
        teComp1 = chooseColor + 3;
        teComp2 = chooseColor + 6;
        teComp3 = chooseColor + 9;
    } else if(chooseColor >= 4 && chooseColor <= 6){
            teComp1 = chooseColor - 3;
            teComp2 = chooseColor + 3;
            teComp3 = chooseColor + 6;
        } else if(chooseColor >= 7 && chooseColor <= 9){
                teComp1 = chooseColor - 6;
                teComp2 = chooseColor - 3;
                teComp3 = chooseColor + 3;
            } else if(chooseColor >= 10 && chooseColor <= 12){
                    teComp1 = chooseColor - 9;
                    teComp2 = chooseColor - 6;
                    teComp3 = chooseColor - 3;
                } else{}
    cout << "Perpaduan Warna Tetrad Complementary = " << chooseColor << "," << teComp1 << "," << teComp2 << "," << teComp3;
}
int main() {
    do{
        system("cls");
    cout << setw(70) << left << setfill('-') << " " << endl;
    cout << "\tNama\t: Ahmad Nuruddin Muslim" << endl;
    cout << "\tNIM\t: 124230076"<< endl;
    cout << setw(70) << left << setfill('-') << " " << endl;
    cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis" << endl;
    cout << "Warna-Warna : " << endl;
    cout << "1. Orange \t 2. Red-Orange \t 3. Red" << endl;
    cout << "4. Red-Violet \t 5. Violet \t 6. Blue-Violet" << endl;
    cout << "7. Blue \t 8. Blue-Green \t 9. Green" << endl;
    cout << "10. Yellow-Green 11. Yellow \t 12. Yellow-Orange" << endl;
    cout << setw(70) << left << setfill('-') << " " << endl;

    cout << "\nPilihan Warna Nomer : ";
    cin >> chooseColor;
		do{
        system("cls");
    switch (chooseColor)
    {
    case 1:
        cout << "Warna : Orange" << endl;
        cout << "Notasi Warna : Sekunder" << endl;
        cout << "Sifat Warna : Hangat" << endl;
        break;
    case 2:
        cout << "Warna : Red-Orange" << endl;
        cout << "Notasi Warna : Tersier" << endl;
        cout << "Sifat Warna : Hangat" << endl;
        break;
    case 3:
        cout << "Warna : Red" << endl;
        cout << "Notasi Warna : Primer" << endl;
        cout << "Sifat Warna : Hangat" << endl;
        break;
    case 4:
        cout << "Warna : Red-Violet" << endl;
        cout << "Notasi Warna : Tersier" << endl;
        cout << "Sifat Warna : Hangat" << endl;
        break;
    case 5:
        cout << "Warna : Violet" << endl;
        cout << "Notasi Warna : Sekunder" << endl;
        cout << "Sifat Warna : Hangat" << endl;
        break;
    case 6:
        cout << "Warna : Blue-Violet" << endl;
        cout << "Notasi Warna : Tersier" << endl;
        cout << "Sifat Warna : Hangat" << endl;
        break;
    case 7:
        cout << "Warna : Blue" << endl;
        cout << "Notasi Warna : Primer" << endl;
        cout << "Sifat Warna : Sejuk" << endl;
        break;
    case 8:
        cout << "Warna : Blue-Green" << endl;
        cout << "Notasi Warna : Tersier" << endl;
        cout << "Sifat Warna : Sejuk" << endl;
        break;
    case 9:
        cout << "Warna : Green" << endl;
        cout << "Notasi Warna : Sekunder" << endl;
        cout << "Sifat Warna : Sejuk" << endl;
        break;
    case 10:
        cout << "Warna : Yellow-Green" << endl;
        cout << "Notasi Warna : Tersier" << endl;
        cout << "Sifat Warna : Sejuk" << endl;
        break;
    case 11:
        cout << "Warna : Yellow" << endl;
        cout << "Notasi Warna : Primer" << endl;
        cout << "Sifat Warna : Sejuk" << endl;
        break;
    case 12:
        cout << "Yellow-Orange" << endl;
        cout << "Notasi Warna : Tersier" << endl;
        cout << "Sifat Warna : Sejuk" << endl;
        break;
    }
    
    cout << "\nPerpaduan Warna Harmonis" << endl;
    cout << "a. Perpaduan Warna Analogus" << endl;
    cout << "b. Perpaduan Warna Complementary" << endl;
    cout << "c. Perpaduan Warna Split Complementary" << endl;
    cout << "d. Perpaduan Warna Triadic Complementary" << endl;
    cout << "e. Perpaduan Warna Tetrad Complementary" << endl;
    cout << "Pilihan : ";
    cin >> choosePerpaduan;

    if (choosePerpaduan == 'a' || choosePerpaduan == 'A'){
        perpaduan1();
    } else if (choosePerpaduan == 'b' || choosePerpaduan == 'B'){
            perpaduan2();
        } else if (choosePerpaduan == 'c' || choosePerpaduan == 'C'){
                perpaduan3();
            } else if (choosePerpaduan == 'd' || choosePerpaduan == 'D'){
                    perpaduan4();
                } else if (choosePerpaduan == 'e' || choosePerpaduan == 'E'){
                        perpaduan5();
                    } else{}
            cout << "\nIngin Mengganti Warna Perpaduan? (y/n) : ";
            cin >> opsi;
        } while(opsi == 'y' || opsi == 'Y');
        cout << "Ingin Mengganti Warna? (y/n) : ";
        cin >> opsi;
    } while(opsi == 'y' || opsi == 'Y');
}
