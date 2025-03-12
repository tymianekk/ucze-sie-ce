#include <stdio.h>

int main() {
    char name[20];
    char lastName[20];
    const int rok = 2025;
    int rokUrodzenia;
    int wiek;

    printf("Witaj uytkowniku! Wpisz swoje dane:\n");
    printf("Imię: ");
    scanf("%s", name);
    printf("Nazwisko: ");
    scanf("%s", lastName);
    printf("Rok urodzenia: ");
    scanf("%d", &rokUrodzenia);

    wiek = rok - rokUrodzenia;

    printf("Nazywasz się %s %s. ", name, lastName);
    printf("Masz %d lat ", wiek);

    if (wiek < 0)
    {
        printf("(jeszcze się nie urodziłeś)\n");
    } else if (wiek < 18 & wiek > 0) {
        printf("(dzieciok)\n");
    } else {
        printf("(staruch)\n");
    };
    
    return 0;
};