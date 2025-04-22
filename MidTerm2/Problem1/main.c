#include <iostream>

 int main() 
 {
     int score;
    
     cout << "본인의 예상 점수를 입력하세요: ";
     cin >> score;

     if (PassOrFail(score)) {
         cout << "재시험 없습니다!" << endl;
     }
     else {
         cout << "재시험 있습니다" << endl;
     }

     return 0;
 }