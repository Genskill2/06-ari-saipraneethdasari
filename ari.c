#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

typedef struct {
   int score;
   string age;
   string gradelevel;

} Grade;


string ari(string s){

  int characters = 0, words = 0, sente = 0;
  for(int i = 0; i < strlen(s); i++){
    if( isalnum(s[i]) ){
     characters += 1;
     }
     if(s[i] == ' '){
     words += 1;
     }
     if(s[i] == '.' || s[i] == '?' || s[i] == '!' ){
     sente += 1;
     }
    
  }
 
 
  float a = 4.71 * characters/words  + 0.5 * words/sente - 21.43;
  float b = a - (int)a;
    if ( b < 1 && b > 0 ){
       a = (int)a+1;
       }else{
       a = (int)a;
       }                             
 
 Grade g[14] = {
         {.score = 1 , .age = "5 to 6"   , .gradelevel = "Kindergarten"} ,
       {.score = 2 , .age = "6 to 7"   , .gradelevel = "First/Second Grade"}, 
            {.score = 3 , .age = "7 to 9"   , .gradelevel = "Third Grade"} ,
            {.score = 4 , .age = "9 to 10"  ,.gradelevel = "Fourth Grade"} ,
            {.score = 5 , .age = "10 to 11" , .gradelevel = "Fifth Grade"} ,
            {.score = 6 , .age = "11 to 12" , .gradelevel = "Sixth Grade"} ,
           {.score = 7  , .age = "12 to 13" , .gradelevel = "Seventh Grade"}, 
            {.score = 8  , .age = "12 to 13" , .gradelevel = "Eighth Grade"}, 
            {.score = 9  , .age = "12 to 13" , .gradelevel = "Ninth Grade"} ,
            {.score = 10 , .age = "12 to 13" , .gradelevel = "Tenth Grade"} ,
          {.score = 11 , .age = "12 to 13" , .gradelevel = "Eleventh Grade"}, 
           {.score = 12 , .age = "12 to 13" , .gradelevel = "Twelfth Grade"}, 
         {.score = 13 , .age = "12 to 13" , .gradelevel = "College student"}, 
            {.score = 14 , .age = "12 to 13" , .gradelevel = "Professor"} 
                                                                              
    } ;
 
 for(int i = 0; i<14 ; i++){
   if (a == g[i].score){
    return g[i].gradelevel;
   }
 
 }
 
 }
