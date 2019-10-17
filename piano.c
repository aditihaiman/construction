#include <stdio.h>
#include <stdlib.h>


struct piano {
    int price;
    char *brand; //by making a pointer, it's not storing the brand string in the struct, it's somewhere else in memory
    //char brand[50];
};

struct piano pExample() {
    srand(time(NULL));
    struct piano e;
    e.price = rand() % 1000000;
    if(rand()%2==0) e.brand = "Yamaha";
    else e.brand = "Steinway";
    return e;
}

void getVars(struct piano x){
    printf("Price: %d\n", x.price);
    printf("Brand: %s\n", x.brand);
}

void setPrice(struct piano *x, int p){
    (*x).price = p;
}

void setBrand(struct piano *x, char *b){
    (*x).brand = b;
}

int main() {
    struct piano a;
    a.price = 1000000;
    a.brand = "Yamaha";
    a = pExample();
    printf("Testing pExample() to get an example struct piano:\n");

    printf("Current price of piano a: %d\n", a.price);
    printf("Current brand of piano a: %s\n\n", a.brand);

    printf("Testing getVariables(a):\n");
    getVars(a);
    printf("\n");
    
    printf("Testing setPrice(&a, 123456):\n");
    setPrice(&a, 123456);
    printf("Current price of piano a: %d\n\n", a.price);

    printf("Testing setBrand(&a, Baldwin):\n");
    setBrand(&a, "Baldwin");
    printf("Current brand of piano a: %s\n\n", a.brand);

    
}
