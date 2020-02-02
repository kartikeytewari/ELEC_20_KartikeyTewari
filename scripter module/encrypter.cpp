// author: Kartikey Tewari
// date:  02-02-2020  15:30:49
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.precision(10);

    system ("figlet encrypter module");
    system ("openssl aes-256-cbc -base64 -in message.txt -out encrypted_message.txt");
    return 0;
}