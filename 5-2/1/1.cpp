#include <iostream>
#include <stdio.h>

using namespace std;

void getNum( int n1 , int n2, int n3, int& sum){
    cout << "PLEASE ENTER FIRST NUM: ";
    cin >> n1;
    cout << "PLEASE ENTER SECOND NUM: ";
    cin >> n2;
    cout << "PLEASE ENTER THIRD NUM: ";
    cin >> n3;

    //Adding nums
    sum = n1 + n2 + n3;
    cout << "Total: " << sum;
}

void getStr( int s1 , int s2, int s3, int& total){
    //Variables
    int str1, str2, str3;
    int tot;
    
    cout << "PLEASE ENTER FIRST WORD: ";
    cin >> s1;
    cout << "PLEASE ENTER SECOND WORD: ";
    cin >> s2;
    cout << "PLEASE ENTER THIRD WORD: ";
    cin >> s3;
    
    //Converting string to int
    str1 = atoi(s1);
    str2 = atoi(s2);
    str3 = atoi(s3);
    tot = atoi(total);

    //Adding nums
    total = s1 + s2 + s3;
    cout << "Total: " << total;
}

int main(int argc, char** argv) {
    //Variables
    int n1, n2, n3;
    int sum;
    int s1, s2, s3;
    int total;
    string str1, str2, str3;
    string tot;
    
    //Call getNum function
    getNum(n1, n2, n3, sum);
    
    //Call getStr function
    getStr(s1, s2, s3, total);
    
    return 0;
}
