#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <chrono>

using namespace std;

bool alpaOrder(pair<string, int>& a, pair<string, int>& b){
    if (a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
     auto start = std::chrono::high_resolution_clock::now();
    ifstream fin;
    ifstream finTwo;
    string line;
    string word;

    int testcases;

    vector<vector<pair<string, int>>> finalArr;

    fin.open("Add file path here");
    if (!fin) {
        cout << "The question file did not open." << endl
             << "Please check the file and try again. Exiting." << endl;
        return -1;
    }

    finTwo.open("C:\\Users\\cueva\\Documents\\GreenProgramming\\test.out");
    if (!fin) {
        cout << "The question file did not open." << endl
             << "Please check the file and try again. Exiting." << endl;
        return -1;
    }

    //Get # of testcases
    getline(fin, line);

    if (line.length() > 0){
        int testcases = stoi(line);
        if (testcases > 0 && testcases <= 40){

            for (int i = 0; i < testcases; ++i){

                int nums[3];
                int n = 0;

                //Get next 3 numbers
                getline(fin, line);
                stringstream x(line);

                while (x >> word){
                    for (char ch: word){
                        if (!isdigit(ch)){
                            cout << "There is a letter in the 3 numbers." << endl;
                            return -1;
                        }
                    }
                    nums[n++] = stoi(word);
                }

                int L = nums[0];
                int a = nums[1];
                int b = nums[2];

                if (L > 300){
                    cout << "L is greater than 300." << endl;
                    return -1;
                }else if(a < 1 || b < 1 || a > b || a > 100 || b > 100){
                    cout << "a or b is out of the limit." << endl;
                    return -1;
                }

                //get words
                unordered_map<string, int> mp;

                for (int j = 0; j < L; ++j){
                    getline(fin, line);
                    stringstream y(line);

                    while (y >> word){
                        mp[word]++;
                    }
                }

                int s = mp.size();
                pair<string, int> arr[s];
                int k = 0;

                for (auto p: mp){
                    arr[k++] = make_pair(p.first, p.second);
                }

                sort(arr, arr+s, alpaOrder);

                vector <pair<string, int>> vec;

                for (int m = a-1; m < b; ++m){
                    vec.push_back(arr[m]);
                }

                finalArr.push_back(vec);
            }

        }else{
            cout << "Number of test cases is over 40. Please lower the number of test cases to 40 or less.";
            return -1;
        }
    }else{
        cout << "Did not get the number of test cases in the file. Please provide it";
        return -1;
    }

    fin.close();

    //Print results to new txt file

    ofstream fout;
    fout.open("testcases.txt");

    if (!fout) {
        cout << "The txt file was not created." << endl
             << "Please check the file and try again. Exiting." << endl;
        return -1;
    }

    int num = 1;

    for (auto v: finalArr){
        fout << "Testcase #"  << num << ":"<< endl;
        for (auto u: v){
            fout << u.first << ": " << u.second << endl;
        }
        fout << endl;
        ++num;
    }

    fout.close();
    finTwo.close();
    cout << "Check file" << endl;
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start); 
    // Output the runtime 
    cout << "Runtime: " << duration.count() << "microseconds" << endl;

    return 0;
}
