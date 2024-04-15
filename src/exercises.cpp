
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
    for(int i = 0; i <= s1.size(); ++i){
        if (s1[i] == ' '){
            cout << i << endl;
        }
    }
    cout << s1.size() << endl;
}

void exercise_2(string s1) {
    char word;
    if (s1 == ""){
        cout << "";
    }
    else{
    cout << "[";
        for(int i = 0; i < s1.size(); ++i){
        if (s1[i] != ' '){
            word = s1[i];
            cout << word;
        }
        if (s1[i] == ' '){
            cout << "]" << endl; 
            cout << "[";
        }
    }
    cout << "]" << endl;
    }
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
    string space1;
    switch(n){
        case 1:
            space1 =  " "s;
            break;
        case 2:
            space1 =  "  "s;
            break;
        case 3:
            space1 =  "     "s;
            break;
        case 4:
            space1 =  "        "s;
            break;
        case 5:
            space1 =  "           "s;
            break;
        case 6:
            space1 =  "              "s;
            break;
        case 7:
            space1 =  "                 "s;
            break;
    }
    
    string _i;
    for(int i = 1; i<=k; ++i){
        int s = 20;
        int r = 0;
        while(r<=14){
            if(space1.size()== s+(s*r) + r){
                space1= space1 + '\n';
                break;
            }
            ++r;
        }
        if(n==1 && space1.size()==1){
            space1 = space1 + to_string(i);
        }
        else if(to_string(i).size()==1 && space1[space1.size()-1]!='\n'){
            _i = "  " + to_string(i);
            space1 = space1 + _i;
        }else if(to_string(i).size()==1 && space1[space1.size()-1]=='\n'){
            _i = " " + to_string(i);
            space1 = space1 + _i;
        
        }else if(to_string(i).size()==2 && space1[space1.size()-1]!='\n'){
            _i = " " + to_string(i);
            space1 = space1 + _i;
        }else if(to_string(i).size()==2 && space1[space1.size()-1]=='\n'){
            space1 = space1 + to_string(i);
        }
        
    }
    cout << space1 << " " << endl;
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
  int i;
  string x, y, z;
  for (int i=0; i<s.size(); i++){
      x = s[i];
      if (x==" "){
          y = y;
      }
      else{
      y = y + x;
      }
  }
  for (int i=y.size()-1; i<y.size(); i--){
      x = y[i];
      z = z + x;
  }
  if (y==z){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
}

void exercise_9(string s) {
int t = 0; 
int count = 0;
for(int i = 1; i < s.size(); i++){
    switch(s[i]){
        case 'f': t++; 
    }
}
    if(t <= 0){
        cout << "-2" << endl;
    }
    else if(t == 1){
        cout << "-1" << endl;
    }
    else if(t == 2){
        for(int i = 0; i <= s.size(); ++i){
        if (s[i] == 'f'){
            count = i;
            }
        }
            cout << count << endl;
    } 
}
int exercise_10(int n, int n2) {
   while (n2 != 0) {
        int x = n2;
        n2 = n%n2;
        n = x;
    }
  return n;
}

void exercise_11() {
    double n = 1;
      cout << "U0 = 1"<< endl;
        for(int i=1; 10>=i; ++i){
            double result = n/(i +1);
                cout << "U" << i << " = " << n << endl;
                n = result;
    }
}

void exercise_12() {
    double l = 1;
      cout << "U" << l << " = " << l << " V" << l << " = " << l << endl;
          for(int i = 1; i < 10; i++){
            l = l / (i + 1);
            int n;
              n = i + 1;
                cout << "U" << n << " = " << l << " V" << n << " = " << "1" << endl;
    }
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
    string x, i, u, t;
      x = to_string(n);
        for (int i = x.size() -1 ; i>=0; i--){
          u = u + x[i];
    }
        if (x == u){
            t = "Es palindrome";
    }
        else{
            t = "No es palindrome";
    }
  return t;
}

void exercise_15(int decimal) {
    cin >> decimal;
      int b = 0;
      int r;
        for(int i = 0; decimal > 0; i ++){
            r = decimal % 2;
            decimal = decimal / 2;
            b = b + r * pow(10,i);
    }
    cout << bin << endl;
}

void exercise_16(int divident, int divider) {
    int c = 0;
    int rest = divident;
    int i = 0;
        if(divider!=0){
              for(i; rest-divider >= 0; ++i){
                rest = rest - divider;
            
        }
    c = i;
    
    cout << c << " ";
    cout << rest << endl;
    }
}

void exercise_17(int n) {
    int i = 0; 
    int  w = 2; 
    
    while (n > i) {
        bool ep = true;
        
        for (int i = 2; i <= w/2; ++i) {
            if (w % i == 0) {
                ep = false;
                break; 
            }
        }
        
        if (ep) {
            cout << w << " "; 
            ++i; 
        }
        
        ++w; 
    }
}

void exercise_18_19(int debut, int fin) {
    int n = 0;
    if (debut <= 0){
        cout << "El numero debe de ser positivo y mayor a zero" << endl;
    }
    else if (debut > fin){
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
    }
    else{
        for(int i = debut; i <= fin; i++){
            cout << i << "->";
            game(i)
        }
    }
}