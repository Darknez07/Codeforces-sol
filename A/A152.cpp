#include <iostream>
#include <vector>
using namespace std;
int main(){
    int students,subjects;
    cin>>students>>subjects;
    vector<int> max_marks(subjects);
    int i=0;
    vector<string> s(students);
    while(i!=students){
        cin>>s[i];
        for(int j=0;j<subjects;j++){
            max_marks[j] = max(max_marks[j],s[i][j] - '0');
        }
        i++;
    }
    bool yes = false;
    int suc = 0;
    for(int i=0;i<students;i++){
        yes = false;
        for(int j=0;j<subjects;j++){
            if(s[i][j] - '0' == max_marks[j]){
                yes = true;
                break;
            }
        }
        suc+=yes;
    }
    cout<<suc;
    return 0;
}