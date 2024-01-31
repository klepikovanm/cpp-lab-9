#include <iostream>
using namespace std;

template <typename T>
T sum(T* list, int size) {
    T result_num = 0;
    for (int i=0; i<size; i++) {
        result_num += list[i];
    }
    return result_num;   
}
template<>
string sum(string* list, int size) {
    string result_str{};
    for (int i=0; i<size; i++) {
        result_str += list[i];
    }
    return result_str;  
}

int main() {
    
    cout << "Создайте список целых чисел" << endl;
    cout << "Количество элементов: " << endl;
    int n;
    cin >> n;
    int* Z = new int[n];
    cout << "Элементы: " << endl; 
    for (int i=0; i<n; i++) {
        int z;
        cin >> z;
        Z[i]= z;
    }
    cout << "Сумма всех элементов: " << sum(Z, n) << endl; 
    
    cout << "Создайте список вещественных чисел" << endl;
    cout << "Количество элементов: " << endl;
    int m;
    cin >> m;
    double* R = new double[m];
    cout << "Элементы: " << endl; 
    for (int i=0; i<m; i++) {
        double r;
        cin >> r;
        R[i]= r;
    }
    cout << "Сумма всех элементов: " << sum(R, m) << endl; 
    
    cout << "Создайте список строк" << endl;
    cout << "Количество элементов: " << endl;
    int k;
    cin >> k;
    string* S = new string[k];
    cout << "Элементы: " << endl; 
    for (int i=0; i<k; i++) {
        string s;
        cin >> s;
        S[i]= s;
    }
    cout << "Сумма всех элементов: " << sum(S, k) << endl; 
    
    delete[] Z;
    delete[] R;
    delete[] S;

    return 0;
}

/*
1)Шаблонная функция - подхватывает тип данных на ходу
2)template - ключевое слово для шаблонных функций
3)typename - ключевое слово, которое указывает один из вариантов типов, с которым может работать функция
4)T - наименование, условное название того типа, который нужно принять(не может одновременно быть двух типов)
5)все это указывает на то, что функция шаблонная
6){} - пустая строка
*/