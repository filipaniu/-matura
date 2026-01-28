// #include <vector>
// #include <string>
// #include <iostream>
// #include <fstream>
//
// using namespace std;
//
// //zad 3_1
//
// string readFileDane() {
//     ifstream plik("../dane.txt");
//     string item;
//     getline(plik, item);
//     return item;
// }
//
// bool isNumber(char l) {
//     if(l >= 48 && l <= 57) {
//         return true;
//     }
//     return false;
// }
//
// vector<string> findNumbers(string txt) {
//     vector<string> result;
//
//     int j = 0;
//     string x;
//     for(int i = 0; i < txt.length(); i++) {
//         if(isNumber(txt[i])) {
//             x.push_back(txt[i]);
//             j++;
//         }else {
//             if(j > 0) {
//                 result.push_back(x);
//             }
//             j = 0;
//             x = "";
//         }
//     }
//     return result;
// }
//
//
// int main1() {
//     //zadanie 3_1
//     vector<string> wynik = findNumbers(readFileDane());
//
//     vector<string> found;
//
//     for(int i = 0; i < wynik.size(); i++) {
//         if(wynik[i][0] == '5' && wynik[i][1] == '0') {
//             found.push_back(wynik[i]);
//         }
//     }
//
//     cout << found.size() << endl;
//
      //zad 3_2
//
//     map<char, int> ranking;
//     string result = readFileDane();
//     for(char c : result) {
//         if(c >= 48 && c <= 57) {
//             if(!ranking.contains(c)){
//                 ranking[c] = 1;
//             }else{
//                 ranking[c]++;
//             }
//         }
//     }
//
//     char max_key = 0;
//     int max_count = 0;
//
//     for(const auto & [key, count] : ranking) {
//         cout << key << ": " << count << endl;
//         if(count > max_count) {
//             max_key = key;
//             max_count = count;
//         }
//     }
//
//     cout << "max: "<< max_key << " : " << max_count << endl;
//
//
//     return 0;
// }

