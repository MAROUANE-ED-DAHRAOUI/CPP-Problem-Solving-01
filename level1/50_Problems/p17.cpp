#include <iostream>
#include <string>

using namespace std;

string read_input(string str)
{
    string word = "";

    cout << str ;
    cin >> word;
    return (word);
}

string encrypte_word(string word, short nb_encrypt)
{
    int i;

    i = 0;
    while(word[i] != '\0')
    {
        word[i] += nb_encrypt;
        i++;
    }
    return (word);
}

string decrypte_word(string word, short nb_decrypt)
{
    int i;

    i = 0;
    while(word[i] != '\0')
    {
        word[i] -= nb_decrypt;
        i++;
    }
    return (word);
}

int main()
{
    string str, str_encrypt, str_decrypt;

    str = "", str_encrypt = "", str_decrypt = "";
    str = read_input("pleas enter the word that you want encrypted : ");
    str_encrypt = encrypte_word(str, 2);
    str_decrypt = decrypte_word(str_encrypt, 2);

    cout << "Text before encryption : " << str << endl;
    cout << "Text After encryption : " << str_encrypt << endl;
    cout << "Text after decryption : " << str_decrypt << endl;
    return(0);
}