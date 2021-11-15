#include <stdio.h>
 
struct dialing_code {
    char *country; //initializing country
    int code; //initializing code associated with country
};
 
int
main (int argc, char* argv[]) {
    int intl_code, i;
    const struct dialing_code country_codes[] = { //list of countries with the associated codes 
        {"Argentina", 54}, {"Bangladesh",        880},
        {"Brazil",     55}, {"Burma (Myanmar)",    95},
        {"China",      86}, {"Colombia",           57},
        {"Congo,Dem.",243}, {"Egypt",              20},
        {"Ethiopia", 251}, {"France",             33},
        {"Germany",    49}, {"India",              91},
        {"Indonesia", 62}, {"Iran",               98},
        {"Italy",      39}, {"Japan",              81},
        {"Mexico",     52}, {"Nigeria",           234},
        {"Pakistan",   92}, {"Philippines",        63},
        {"Poland",     48}, {"Russia",              7}
        };
 
    int n_entries = sizeof(country_codes) / sizeof(*country_codes);
 
    do {
        int found = 0; 
 
        printf("Please input the international code(-1 to exit): "); //prompting user for input 
        scanf("%d", &intl_code); // scanning user input for associated code for listed country
        if (intl_code == -1)
            break;
 
        for (i = 0; i < n_entries; i++) { //for loop for verifying country list
            if (country_codes[i].code == intl_code) { 
                printf("The country is: %s\n", country_codes[i].country);
                found = 1; //if the associated code is entered by user and found on list, then list the associated country
            }
        }
        if (!found) // the associated code is not located 
            printf("Code not found.\n");
    } while(1);
 
    return 0;
}
