#include <iostream>
#include "SHA512.h"
using namespace std;
  
int main(int argc, char *argv[]) {
    string plain_text = "This is a  SHA215 example";
    string sha512_code = sha512(plain_text);
    cout << plain_text << "通过sha512获得的摘要值：" << sha512_code << endl;
    system("pause");
    return 0;
}