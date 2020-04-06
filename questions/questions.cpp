
#include <iostream>
using namespace std;

int main()
{
/*Toplama */
    /*
  int a, b;
  double toplam = 0;
  cout << "Lutfen sayi giriniz:";
  cin >> a;
  cout << "Lutfen sayi giriniz:";
  cin >> b;
  if (a==b)
  {
      toplam = a + b;

  }
  else
  {
      cout << "Pas gec:";
  }
  cout << "Toplam : " << toplam;

*/

/*Kulanicinin girdigi kaddaki kelime sayisini bulma*/
    /*
string code;

cout << "Enter the code: ";
cin >> code;

for (int i = 0; i < code.length(); i++) {
    int count = 1;

    while (code[i] == code[i + 1] && i < code.length() - 1) {
        count++;
        i++;
    }

    cout << "Run Length Encoding is:" << code[i] << count << endl;
}
return 0;
*/

/*Ekrana kare cizen algoritma.*/
    /*
int  boyut;
cout << "Boyutu giriniz:";
cin >> boyut;
 for (int i = 0; i <= boyut; i++)
 {
     for (int j = 0; j < boyut -1; j++)
     {
         cout << "";
     }
     for (int k = 0; k < 2 * i - 1; k++)
     {
         cout << "*";
     }
     cout << endl;
 }
 return 0;
 */

/*kulanicidan 5×5 Boyutunda bir matris tanýmlayýp ana köþegendeki elemanlara 1, köþegen üstündeki elemanlara 2, köþegen altýndaki elemanlara 0 deðerini atayýnýz*/
    /*
    int matris1;
    int matris2;
    cout << "lutfen birinci degeri giriniz:";
    cin >> matris1;
    cout << "lutfen birinci degeri giriniz:";
    cin >> matris2;
    for (int i = 0; i < matris1; i++)
    {
        for (int j = 0; j < matris2; j++)
        {
            if (i == j)
            {
                cout << "1";
            }
            else if (i < j)
            {
                cout << "2";
            }
            else if (i > j)
            {
                cout << "0";
            }
        }
        cout << " " << endl;
    }
   */

/*Klavyeden rastgelen girilen 2 tane sayýnýn karelerinin toplamýný ekrana yazan programý c++ dilinde yazýnýz.*/
    /*
    int sayi1, sayi2;
    cout << "Sayi 1 giriniz:";
    cin >> sayi1;
    cout << "Sayi 2 giriniz:";
    cin >> sayi2;
    double toplam = pow(sayi1, 2) + pow(sayi2, 2);
    cout << "Sayilarin karlerin toplami:" << toplam;
   */

/*Klavyeden girilen 6 tane sayýnýn toplamýný ekrana yazan programý c++ dilinde yazýnýz.*/
     /*int toplam = 0;
    int sayi;
    cout << "Lutfen sayi giriniz:";
    cin >> sayi;
    for (int i = 0; i < sayi; i++)
    {
        toplam = toplam + i;
    }
    cout << "Sayilarin toplami:" << toplam;*/

/*1 ile 100 arasýndaki sayýlarý toplamýný ekrana yazan programý c++ dilinde yazýnýz.*/
    /*
    int toplam = 0;
for (int i = 1; i < 100; i++)
{
    toplam = toplam + i;
}
cout << "Sayilarin toplami:" << toplam;
    */

/*1 ile 100 arasýndaki 3 ve 5 ‘in katlarýný ekrana yazan programý c++  dilinde yazýnýz.*/
    /*
    for (int i = 0; i < 100; i++)
{
    if ((i%5 == 0) && (i%3 == 0))
    {
        cout << "Bolunen sayilar:" << i << endl;
    }
}
    */

/*Klavyeden girilen bir sayýnýn asal sayý olup olmadýðýný ekrana yazan programý c++ dilinde yazýnýz.*/
    /*
    int sayi;
    cout << "Lutfen sayi giriniz:";
    cin >> sayi;
    for (int  i = 2; i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            cout << "Sayi asaldir:" << i << endl;
            continue;
        }
        else if (sayi % i != 0)
        {
            cout << "Sayi asal degildir.:" << i << endl;
            break;
        }
    }
    */

/*Girilen sayýnýn kaç basamak olduðunu ekrana yazan programý c++ dilinde yazýnýz.*/
    /*
    int sayi, basamak = 0;
    cout << "Sayi giriniz:";
    cin >> sayi;
    while (sayi>0)
    {
        sayi = sayi / 10;
        basamak++;

    }
    cout << "Basamak sayisi:" << basamak;
    */

/*Girilen sayýya kadar olan 7 ve 3’ün katý olan sayýlarý ekrana yazan programý c++ dilinde yazýnýz.*/
    /*
    int sayi, toplam = 0;
    cout << "Lutfen sayi giriniz:";
    cin >> sayi;
    for (int i = 0; i < sayi; i++)
    {
        if ((i%7 == 0) && (i%3 == 0))
        {
            toplam = toplam + i;
        }
        else if ((i % 7 != 0) && (i % 3 != 0))
        {
            i++;
        }
    }

    cout << "Sayilar.:" << toplam << endl;


    */

/*Girilen sayýnýn mutlak deðerini ekrana yazan programý c++ dilinde yazýnýz.*/
    /*
    int sayi;
    cout << "Sayi giriniz:";
    cin >> sayi;
    if (sayi<0)
    {
       // sayi = sayi * -1;
       // toplam = sayi;
        abs(sayi);
    }
    cout << "Toplam: " << sayi;
    */

/* n tane girilen sayý içerisinden pozitif, negatif sayýlarýn ve 0 sayýsýnýn adedini ekrana yazan programý c++ dilinde yazýnýz.*/
    /*
    int sayi, neg = 0, poz = 0, sifir  = 0, n;
    cout << "Kaç sayi gireceksiniz:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sayi = i;
        if (sayi == 0)
        {
            sifir++;
        }
        else if (sayi > 0)
        {
            poz++;
        }
        else if (sayi <0)
        {
            neg++;
        }
    }

    cout << "Sayilarimiz:" << sayi << endl;
    cout << "Pozitif sayilari yaz:" << poz << endl;
    cout << "Negatif sayilari yaz:" << neg << endl;
    cout << "Sifir sayilari yaz:" << sifir << endl;
    */

/*////////////////Rastgele girilen n tane sayý içerisinde tek sayýlarý 1 arttýrýp karelerini alýp toplayan, çift sayýlarýn kareköklerini alýp toplayan ve tek ve çift sayýlarýn adetlerini ekrana yazan programý c++ dilinde yazýnýz.*/
    /*
    int n, sayi, tadet, cadet;
    float ttop = 0, ctop = 0;
    cout << "Lutfen sayigiriniz:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sayi = i;
        if (sayi%2 != 0)
        {
           ttop += pow(sayi + 1, 2);
            tadet++;

        }
        else if (sayi%2 == 0)
        {
           ctop += sqrt(sayi);
            cadet++;
        }
    }
    cout << "Tek sayilarin toplami: " << ttop << endl;
    cout << "Tek sayilarin adeti: " << tadet << endl;
    cout << "Cift sayilarin toplami: " << ctop << endl;
    cout << "Cift sayilarin adeti: " << cadet << endl;
    */

/*//////////////Girilen sayýnýn Tau sayý olup olmadýðýný ekrana yazan programý c++ dilinde yazýnýz.*/
    /*
    int sayi;
    int bolen = 0;
    cout << "Tau sayisini giriniz:";
    cin >> sayi;
    for (int  i = 1; i <= sayi; i++)
    {
        if (sayi%i == 0)
        {
            bolen++;
        }
    }
    if (sayi% bolen == 0)
    {
        cout << "Sayi tau sayisidir.:" << sayi << endl;
    }
    else
    {
        cout << "Sayi tau sayisi degildir.:" << sayi << endl;
    }
    */

/*Girilen aralýklardaki heterometrik sayýlarý ekrana yazan programý c++  dilinde yazýnýz.*/
    /*
    int n;
    int alt, ust, toplam = 0;
    cout << "Alt sayi giriniz:";
    cin >> alt;
    cout << "Ust sayi giriniz:";
    cin >> ust;
    if (alt<ust)
    {
        toplam = alt * (alt + 1);
        alt++;
    }
    cout << "Heterometrik sayi" << toplam << endl;
    */

/*Girilen bir sayýnýn palidrom sayý olup olmadýðýný ekrana yazan programý c++ dilinde yazýnýz*/






}

