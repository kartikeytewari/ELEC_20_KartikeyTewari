// author: Kartikey Tewari
// date:  02-02-2020  15:47:16
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.precision(10);
    
    system ("figlet decrypter module");
    system ("openssl aes-256-cbc -base64 -d -in encrypted_message.txt -out message.txt");
    return 0;
}