/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>

using namespace std;

const int MAX = 10;

int main() {
  int A[MAX];
  for (int C=0; C<MAX; C++) {
    // mengisi nilai ke dalam A[C]
    A[C] = C * 10;
    // menampilkan nilai A[C]
    cout<<A[C]<<endl;
  }

  return 0;
}
