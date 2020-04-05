
#include <iostream>
using namespace std;

int main()
{
    //Toplama 
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

    //Kulanicinin girdigi kaddaki kelime sayisini bulma
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

    //Ekrana kare cizen algoritma.
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

    //kulanicidan 5×5 Boyutunda bir matris tanýmlayýp ana köþegendeki elemanlara 1, köþegen üstündeki elemanlara 2, köþegen altýndaki elemanlara 0 deðerini atayýnýz
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








}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
