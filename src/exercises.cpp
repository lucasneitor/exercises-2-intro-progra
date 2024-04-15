
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
    for(int i = 0; i <= str.size(); ++i){
        if(str[i] == ' '){
            cout << i << endl;
        }
    }
    cout << str.size() << endl;

}

void exercise_2(string s1) {
}

void exercise_3(string s1) {
  int i=0;
    while(i < 20){  
      if(cake[i]='1') {
          cout << "Om-nom-nom :P" << endl;
          i = i + 1;
          }
      else if(cake[i] == '0') {
          cout << "No cake :(" << endl;
          break; 
      }
      else {
        i = i + 1;
      }
}

void exercise_4(int n) {
  int k = 1;
  int x = 1;
  if(n < 0){
    cout << "El numero es negativo. Intentelo de nuevo" << endl;
  }
  else if (n > 14) {
    cout << "El numero es muy grande. Intentelo de nuevo" << endl;
  }
  else if (n >= 0 && n <= 14) {
    while(k <= n) {
      x *= k;
      ++k;
    }
    cout << x << endl;
  }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  cin >> n; 
      int suma = 0;
      while(n > 0){
        suma = suma + n%10;
        n = n/10;
      }
  return suma;
}

void exercise_7(int n) {
  cin >> n;
  double result = 0;
  for(int i = 1; i <= n; i++){
    result += pow( -1, i+1)/i;

  }
  cout << result << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  cin >> n;
  cin >> k;
  int r = 0;
  for(int i = 1; i <= n; i++ ){
    r += pow(i,k);
  }
  return r;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}