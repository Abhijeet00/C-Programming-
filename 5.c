#include <stdio.h>

int main() 
{

    printf
    (
        "Hello World\n" /*THIS IS A STRING LITERAL*/
    );

    return 0;
    /*code is broken into individual tokens here
    YOU CAN USE ANY AMOUNT OF SPACE BETWEEN ANY 2 TOKENS , compiler will ignore the spaces and tabs and new lines
    But you need atleast 1 widespace character between 2 tokens to separate them , otherwise compiler will give error in return0
    ( is a token where as soon as compiler see's it , it knows its a seperate token so even if you don't give a space it will not give error but in 
     return0 compiler will give error because it doesn't know where return ends and 0 starts so you need to give a space between them)
     Symbols like (, ;, +, - → no, these can never be part of a name → so it automatically stops and starts a new token

    keywords : reserved c programming language words , you can't make constant / variable / identifiers / function with the name of keywords

    There are 32 keywords in c language , they are : auto , break , case , char , const
     , continue , default , do , double , else , enum , extern , float , for , goto , if ,
      int , long , register , return , short , signed , sizeof , static , struct , switch ,
       typedef , union ,unsigned , void , volatile and while

     if you name any function / variable or other entities will be called identifiers 
     , identifiers are user defined names and can be of any length but should not be a keyword. 
     but you can't use punctuation characters in identifiers except underscore (_)

     Also C is a case sensitive language , so for example "int" and "Int" are different identifiers
    
    
    
    */
}