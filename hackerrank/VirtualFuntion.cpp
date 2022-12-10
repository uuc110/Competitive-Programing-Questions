#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Professor: public Person{
public:
    int publications;
    int cur_id = 1;
    void getdata(){
        cin >> name >> age >> publications;
    }

    void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }

};

class Student: public Person{
public:
    int marks[6];
    int cur_id;
    int sum = 0;

    void getdata(){
        cin >> name >> age;
        for (int i = 0; i < 6; ++i) {
            cin >> marks[i];
            sum += marks[i];
        }
    }

    void putdata(){
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};


int main() {
    Professor Pr;
    Student S;
    int obj, code;
    cin >> obj;
    while(obj--){
        cin >> code;
        if(code == 1){
            Pr.getdata();
            Pr.putdata();
            Pr.cur_id++;

        }
        else if(code == 2){
            S.getdata();
            S.putdata();
            S.cur_id++;
        }
    }


    return 0;
}
