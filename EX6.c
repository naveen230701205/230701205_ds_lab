#include <stdio.h>
#include <string.h>
#define MAX 20 
int Stack[MAX], top = -1; 
char expr[MAX]; 
void Push(int ele); 
int Pop(); 
int main() 
{ 
int i, a, b, c, e;
printf("Enter the postfix expression : "); 
gets(expr); 
for(i = 0; i < strlen(expr); i++) 
 { 
 if(expr[i]=='+'||expr[i]=='-'||expr[i]=='*'||expr[i]=='/') 
 { 
 b = Pop(); 
 a = Pop(); 
 switch(expr[i]) 
 { 
 case '+': 
 c = a + b; 
 Push(c); 
 break; 
 case '-': 
 c = a - b; 
 Push(c); 
 break; 
 case '*': 
 c = a * b; 
 Push(c); 
 break; 
 case '/': 
 c = a / b; 
 Push(c); 
 break; 
 } 
 } 
 else
 { 
 printf("Enter the value of %c : ", expr[i]); 
 scanf("%d", &e); 
 Push(e); 
 } 
 } 
printf("The result is %d", Pop()); 
return 0; 
} 
void Push(int ele) 
{ 
 top = top + 1; 
 Stack[top] = ele; 
} 
int Pop() 
{ 
int e; 
 e = Stack[top]; 
 top = top - 1; 
return e; 
}
