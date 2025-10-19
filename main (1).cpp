/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
float toplama(int sayi1, int sayi2){
return sayi1+sayi2;
}
  float cikarma(int sayi1, int sayi2){
return sayi1-sayi2;  
  }
   float carpma(int sayi1, int sayi2){
return sayi1*sayi2;
} 
  float bolme(int sayi1, int sayi2){
return sayi1/sayi2;
}  
    
int main()
{
    string islemler[4]= {"topla","cikar","bol","carp"};
    cout<<"lutfen yapmak istediğiniz işlemi yazın" <<endl;
    cout<<"topla,cikar,bol,carp "<< endl  ;
    string secilenislem;
    cin>> secilenislem;
    int sayi1,sayi2;
    if(secilenislem==islemler[0]){
        cin>>sayi1;
        cin>>sayi2;
        cout<<"sonuc= "<< toplama(sayi1,sayi2)<<endl;
    }
   else if(secilenislem==islemler[1]){
        cin>>sayi1;
        cin>>sayi2;
        cout<<"sonuc= "<< cikarma(sayi1,sayi2)<<endl;
    }
    else if(secilenislem==islemler[3]){
        cin>>sayi1;
        cin>>sayi2;
        cout<<"sonuc= "<< carpma(sayi1,sayi2)<<endl;
    }
    else if(secilenislem==islemler[2]){
        cin>>sayi1;
        cin>>sayi2;
        cout<<"sonuc= "<< bolme(sayi1,sayi2)<<endl;
    }
    else{
        cout<<"tekrar deneyin";
    }
    

    return 0;
}