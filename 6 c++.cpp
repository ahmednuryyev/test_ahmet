#include<iostream>
#include<cmath>



bool isPowerOffFive(int num ){
    
    if (num<=o){
        return false;
        
    }
    
    double logResult = log(num) / log(5);
    return logResult ==int(logResult);
}

int main() {
    int p;
    std::cout <<"Введите натуральное число р: ";
    std::cin >>p;
    
    int a[p];
    int cout = 0;
    
    for (int i =0; i<p;i++) {
        std::cout <<"Введите число а"<<i+1<<": ";
        std::cin >>a[i];
        if(isPowerOffFive(a[i])) {
            
            count++;
        }
    
    std::cout <<"Колл-во чисел а[i], являющихся степенями пятерки:" <<cout<<std::endl;
    return0;
    
}