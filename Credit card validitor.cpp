#include<iostream>
using namespace std;
int singleNum(int x){
    if(x>9){
        int sum=0,m;
        while(x>0){
            m=x%10;
            sum=sum+m;
            x=x/10;
        }
        return sum;
    }
    else{
        return x;

    }

}
void cardValidation(int x, int y,int z){

    if((x+y)%10==0&&(z==13||z==16)){
        cout<<"The card is valid";
    }
    else{
        cout<<"The card is not valid";
    }

}
int main(){

int x=0, i, doueveryadd=0, doubleNum=0, oddNumAdd=0;
string number;
//input
cout<<"Enter your Card number: ";
cin>>number;
int arrlen=number.length();
x=arrlen;
int cardNum[arrlen];
for(int i=0;i<arrlen;i++){
    cardNum[i]=number[i]-48;
}


//Double every second digit:
for(i=x-2;i>=0;i=i-2){
    doubleNum=2*cardNum[i];
    doueveryadd=doueveryadd+singleNum(doubleNum);
    }


//Add all digits in the odd places
for(i=x-1;i>=0;i=i-2){
    oddNumAdd=oddNumAdd+cardNum[i];
}

cardValidation(doueveryadd, oddNumAdd, x);

return 0;
}
