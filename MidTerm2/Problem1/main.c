#include <iostream>

 int main() 
 {
     int score;
    
     cout << "������ ���� ������ �Է��ϼ���: ";
     cin >> score;

     if (PassOrFail(score)) {
         cout << "����� �����ϴ�!" << endl;
     }
     else {
         cout << "����� �ֽ��ϴ�" << endl;
     }

     return 0;
 }