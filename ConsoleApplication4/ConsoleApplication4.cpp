#include <iostream>
#include<iomanip>
#include"getBmi.h"
#include"getObesity.h"
using namespace std;

int main()
{
    double height;  
    double weight;  
    double bmi = 0;   

    cout << "身長(cm)を入力してください";
    cin >> height;

    cout << "体重(kg)を入力してください";
    cin >> weight;

    bmi = getBmi(height, weight);
    cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;

    switch (getObesity(bmi)) {
    case -1:
        cout << "低体重です。";
        break;
    case 0:
        cout << "普通体重です。";
        break;
    case 1:
        cout << "肥満(1度）です。";
        break;
    case 2:
        cout << "肥満(2度）です。";
        break;
    case 3:
        cout << "肥満(3度）です。";
        break;
    case 4:
        cout << "肥満(4度）です。";
        break;
    default:
        break;
    }

    return 0;
}