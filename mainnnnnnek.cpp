#include <iostream>
#include <fstream>

 int liczba;

     ofstream wyj�cie;
     wyj�cie.open("wyj.txt")

     ifstream wejscie;
     wejscie.open("wej.txt");
     wejscie.open("c:\a.txt");
     ofstream wyjscie;

     ifstream plik2;
     plik2.open("c:\a.txt");
     if(plik.good())
     while (!eof(wej�cie))
 {
        wejscie>>liczba;
            if(liczba%2==0)
                wyjscie<<liczba<<" ";
    }

    wejscie.close();
    wyjscie.close();
    return 0;
}



