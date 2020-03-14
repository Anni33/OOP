#include <iostream.h>
#include <fstream.h>
#include <string.h>
int main()
{
   string ifile;
   cout << "Vvedite im`a faila glia sortirovki:";
   cin >> ifile;
   // сконструировать объект класса ifstream для ввода из файла
   ifstream infile( ifile.c_str() );
   if ( ! infile ) {
      cerr << "oshibka: ne mogu otkrit vhodnoi fail:" << ifile << endl;
           getchar();
      return -1;
   }
   string ofile = ifile + ".sort";
   // сконструировать объект класса ofstream для вывода в файл
   ofstream outfile( ofile.c_str() );
   if ( ! outfile) {
      cerr <<"oshibka: ne mogu otkrit vhodnoi fail:" << ofile <<endl;
                getchar();
      return -2;
   }
  string buffer;
   while ( infile >> buffer ) {
       //  text.push_back( buffer );
        outfile<<buffer << "\n" ;
   }
    getchar();
   return 0;
}

