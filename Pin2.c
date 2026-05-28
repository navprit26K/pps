// Name- Navprit Karade
// PRN no-2503033111372039

  #include <stdio.h>
int main() {
    int pin=1111,E;
    printf("Enter Pin: ");
    scanf("%d",&E);

    if (E==pin){
        printf("correct Pin\n you may withdraw cash");
    }
    else {
        printf("incorrect pin");
    }
    return 0;
}
