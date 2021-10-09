#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int t,n;
    bool no;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        if(s.length() == 1){
            if(s == "?"){
                cout<<"a"<<endl;
                continue;
            }else{
                cout<<s<<endl;
                continue;
            }
        }
        vector<char> ch(s.begin(), s.end());
        n = ch.size();
        if(ch[0] == '?'){
            if(ch[1] == 'a'){
                ch[0] = 'b';
            }else if(ch[1] == 'b'){
                ch[0] = 'a';
            }else if(ch[1] == 'c'){
                ch[0] = 'a';
            }else if(ch[1] == '?'){
                ch[0] = 'a';
            }
        }
        for(int i=1;i<n - 1;i++){
            if(ch[i] == '?'){
                if(ch[i - 1] == 'a' && ch[i + 1] == 'b'){
                    ch[i] = 'c';
                }else if(ch[i - 1] == 'a' && ch[i + 1] == 'a'){
                    ch[i] = 'b';
                }else if(ch[i - 1] == 'a' && ch[i + 1] == 'c'){
                    ch[i] = 'b';
                }else if(ch[i - 1] == 'a' && ch[i + 1] == '?'){
                    ch[i] = 'c';
                }else if(ch[i - 1] == 'b' && ch[i + 1] == 'a'){
                    ch[i] = 'c';
                }else if(ch[i - 1] == 'b' && ch[i + 1] == 'b'){
                    ch[i] = 'a';
                }else if(ch[i - 1] == 'b' && ch[i + 1] == 'c'){
                    ch[i] = 'a';
                }else if(ch[i - 1] == 'b' && ch[i + 1] == '?'){
                    ch[i] = 'c';
                }else if(ch[i - 1] == 'c' && ch[i + 1] == 'a'){
                    ch[i] = 'b';
                }else if(ch[i - 1] == 'c' && ch[i + 1] == 'b'){
                    ch[i] = 'a';
                }else if(ch[i - 1] == 'c' && ch[i + 1] == 'c'){
                    ch[i] = 'b';
                }else if(ch[i - 1] == 'c' && ch[i + 1] == '?'){
                    ch[i] = 'b';
                }
            }
        }
        if(ch[n - 1] == '?'){
            if(ch[n - 2] == 'a'){
                ch[n - 1] = 'b';
            }else if(ch[n - 2] == 'b'){
                ch[n - 1] = 'a';
            }else if(ch[n - 2] == 'c'){
                ch[n - 1] = 'a';
            }
        }
        no = false;
        for(int i=1;i<n;i++){
            if(ch[i] == ch[i - 1]){
                no = true;
                break;
            }
        }
        if(no){
            cout<<-1<<endl;
            continue;
        }
        string str(ch.begin(), ch.end());
        cout<<str<<endl;
    }
    return 0;
}