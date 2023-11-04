#include <stdio.h>


int main() {
    
    char a = 'C';           //single character      %c
    char b[] = "Carlos";    //array for characters  %s
    printf("char %c\n", a);
    printf("characters %s\n", b);
    
    float c = 3.141592;             //4 byttes 6 - 7 digits %f
    printf("float %f\n", c);
    
    double d = 3.141592653589793;   //8 bytes 15 - 16 digits %lf
    printf("double %lf\n", d);
    
    
    bool e = true;              //1 byte (true or false) %d
    printf("bool %d\n", e);
    
    char f = 100;                //1 byte (-128 to +127) %d or %c
    printf("char %d\n", f);      // char ez numeric value
    
    unsigned char g = 255;              //1byte (0 to +255) %d or %c
    printf("insigned char %d\n", g);    //unsigned character as numeric value
    
    short int h = 32767;                //2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535;       //2 bytes (0 to +65,535) %d
    printf("short %d\n", h);
    printf("unsigned short %d\n", i);
    
    int j = 214748364;                  //4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295L;       //4 bytes (0 to +4,294,967,295) %u
    printf("int %d\n", j);
    printf("unsigned int %u\n", k);
    
    long long int l = 9223372036854775807;                //8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U;     //8 bytes (0 to +18 quintillion) %llu
    printf("long long int %lld\n", l);
    printf("unsigned long long int %llu\n", m);
    
    
    return 0;
}