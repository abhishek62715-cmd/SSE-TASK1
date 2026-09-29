#include<iostream>
using namespace std;
int main(){
    string str;
    int upp_case=0,low_case=0,spec_char=0,white_space=0,digit=0;
    for(int i=1;;i++){
        char a;
        //cin>>a;               doesnt counts whitespaces
        cin.get(a);      // counts whitespaces too
        if (a=='$'){
            break;
        }
        else{
            int ascii;
            ascii=int(a);
            if ((ascii>=97)&&(ascii<=122)){
                low_case++;
    }
            else if((ascii>=65)&&(ascii<=90)){
                upp_case++;
    }
            else if((ascii>=48)&&(ascii<=57)){
                digit++;
    }
            else if((ascii==32)){
                white_space++;
            }
            else{
                spec_char++;
    }

        }
    }
    cout<<"White Spaces: "<<white_space<<endl<<"Special Characters: "<<spec_char<<endl<<"Upper Case Letters: "<<upp_case<<endl<<"Lower Case Letters: "<<low_case<<endl<<"Digits: "<<digit<<endl;
    return 0;
}