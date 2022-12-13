#include <iostream>
using namespace std;
bool check_odd(int a){
    if (a % 2 == 0){
        return false;
    }
    else{
        return true;
    }
}
int check_prime(int a){
    for (int j = 2; j < a; j++){
        int f = 0;
        if (a % j == 0){
            f = 1;
            return false;
            break;
        }
        if (f == 0){
            return true;
        }
    }
}
int tedade_maghsoomalyah(int a){
    int m = 0;
    for (int i = 1; i <= a; i++){
        if (a % i == 0){
            int g = 1;
            for (int j = 2; j < i; j++){
                if (i % j == 0){
                    g = 0;
                    break;
                }
            }
            if (g == 1){
                m++;
            }
        }
    }
    return m;
}
int check_adadekhoshgel(int a){
    int u = tedade_maghsoomalyah(a) - 1;
    for (int i = 1; i < a; i++){
        if (a % i == 0 && check_prime(i) == true){
            if (u == i){
                return true;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int sum = 0;
    int f = 0;
    for (int i = 2; i <= n; i++){
        if (check_adadekhoshgel(i) == true && check_odd(i) == trueظ){
            f = 1;
            sum += i;
        }
    }
    if (f == 1){
        cout << sum;
    }
    else if (f == 0){
        cout << "NOT FOUND!";
    }
}
