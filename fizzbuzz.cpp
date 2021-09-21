#include <iostream>
#include <string>
#include <functional>

//The following functions are only used with some of the examples.
//this is actually more work than simply making it a standard function remove =[] its a function
auto tout = [](std::string a){std::cout<<a;return 0;};

void fb (int i){
    int a=0;
    a = (i%3==0)?tout("Fizz"):i;
    a = a & ((i%5==0)?tout("Buzz"):i);
    (a != 0)?tout(std::to_string(i)+"\n"):tout("\n");
}

void fb2(int i){
    (((i%3==0)?tout("Fizz"):i)&((i%5==0)?tout("Buzz"):i))!=0?tout(std::to_string(i)+"\n"):tout("\n");
}

//Does not require functions at top
//This is one of the worst ways to solve this problem.
//There are always better options to using "else if"
int main(){
    for(auto i=1;i<100;i++){
        //if(!(i%3) && !(i%5)) //would be better than using "==0"
        if(i%3==0 && i%5==0)
        {
            std::cout<<"FizzBuzz";
        }
        else if(i%3==0)
        {
            std::cout<<"Fizz";
        }
        else if(i%5==0)
        {
            std::cout<<"Buzz";
        }
        else{
            std::cout<<i;
        }
        std::cout<<"\n";
    }
    return 0;
}

/*
//This solution is better than the previous version in both performance and ability to maintain code.
//Does not require the functions at the top
int main(){
    for(auto i=1;i<100;i++){
        if(!(i%3)){std::cout<<"Fizz";}
        if(!(i%5)){std::cout<<"Buzz";}
        std::cout<<(!(i%3)|!(i%5)?"\n":std::to_string(i)+"\n");
    }
    return 0;
}
*/

/*
//Does not require functions at the top
int main(){
    std::string a="";
    for(auto i=1;i<100;i++){
        a += i%3==0?"Fizz":"";
        a += i%5==0?"Buzz":"";
        a = a!=""?a:std::to_string(i);
        std::cout<<a<<"\n";
        a="";
    }
    return 0
}
*/
/*
//Does not require functions at the top
int main(){
    std::string a="";
    for(auto i=1;i<100;i++){
        if(!(i%3)){a+="Fizz";}
        if(!(i%5)){a+="Buzz";}
        a = a!=""?a:std::to_string(i);
        std::cout<<a<<"\n";
        a="";
    }
    return 0;
}
*/
/*
//Requires functions at the top
int main()
{
    for(auto i=1;i<100;i++){
        //fb(i);
        fb2(i);
    }
    return 0;
}
*/
/*
//Requires functions at the top
int main()
{
    for(auto i=1;i<100;i++){
        (((i%3==0)?tout("Fizz"):i)&((i%5==0)?tout("Buzz"):i))!=0?tout(std::to_string(i)+"\n"):tout("\n");
    }
    return 0;
}
*/
/*
//Does not require functions at the top
int main()
{
    for(auto i=1;i<100;i++){
        std::cout<< ((i%3==0)?"Fizz"+(std::string)((i%5==0)?"Buzz\n":"\n"):(std::string)((i%5==0)?"Buzz\n":std::to_string(i)+"\n"));
    }
}
*/
/*
//Does not require functions at the top
int main()
{
    for(auto i=1;i<100;i++){
        std::cout<<(!(i%3)?"Fizz":"")<<(!(i%5)?"Buzz":"")<<(!(i%3)|!(i%5)?"\n":std::to_string(i)+"\n");
    }
    return 0;
}
*/
//These are the same just the following is condensed to a single line

//int main(){for(auto i=1;i<100;i++){std::cout<<(!(i%3)?"Fizz":"")<<(!(i%5)?"Buzz":"")<<(!(i%3)|!(i%5)?"\n":std::to_string(i)+"\n");}return 0;}


/*
//If you had a more complex version such as Fizz Buzz Splat this might be a better alternative
//The benefit of it is high performance and it is easy to understand.
//Does not require functions at the top
int main()
{
    int a=0;
    for(auto i=1;i<100;i++){
        a += (!(i%3))*1;
        a += (!(i%5))*2;
        switch (a){
        case 0:
            std::cout<<i<<"\n";
            break;
        case 1:
            std::cout<<"Fizz\n";
            break;
        case 2:
            std::cout<<"Buzz\n";
            break;
        case 3:
            std::cout<<"FizzBuzz\n";
            break;
        }
        a=0;
    }
    return 0;
}
*/
