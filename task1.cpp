#include<iostream>
#include<cmath>

// add function
hkhkjrhkwehjhkrwesjtjkwhekh
dghsh
int main() {
    int a,b,c,d;
    std::cout<<"nermucel a=";
    std::cin>>a;
    std::cout<<"nermucel b=";
    std::cin>>b;
    std::cout<<"nermucel c=";
    std::cin>>c;
    if(a==0){
        if(b==0){
            std::cout<<"error"<<"\n";
            return 0;
        }
        std::cout<<"x="<<-c/b<<"\n";
        return 0;}
    d=-b+4*a*c;
    if(d==0){
        std::cout<<"x="<<-b/(2*a)<<"\n";
        return 0;
    }
    if(d<0){
        std::cout<<"irakan tveri bazmutjunum lucum chuni"<<"\n";
        return 0;
    }
    std::cout<<"x1="<<(-b+sqrt(d))/(2*a)<<"\n";
    std::cout<<"x2="<<(-b-sqrt(d))/(2*a)<<"\n";
    return 0;
}
