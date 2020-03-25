/**
 * @file main.c
 * @author Rob Barwell
 * @date 15 Mar 2020
 * @brief This file contains the main function.
 */

#include <stdio.h>
#include <stdlib.h>

#include "../include/data_types.h"
#include "../include/helper_functions.h"
#include "../include/parse_airports.h"
#include "../include/common_functions.h"
#include "../include/strat_airlift_functions.h"

/**
 * @brief my_sizes is used to store the sizes of the dynamic arrays used throughout the program.
 */
struct SIZES *my_sizes;

/**
 * @brief TO BE REMOVED - Will be removed when Olu adds his parse_airports function.
 */
struct AIRPORT** set_temp_airports() {
    struct AIRPORT **temp_airports;
    
    temp_airports=(struct AIRPORT**)malloc(sizeof(struct AIRPORT*)*7);
    for(int init=0;init<7;init++)
    {
        temp_airports[init]=NULL;
    }
    
    temp_airports[NA]=(struct AIRPORT*)malloc(sizeof(struct AIRPORT));
    temp_airports[EU]=(struct AIRPORT*)malloc(sizeof(struct AIRPORT));
    
    temp_airports[NA][0].id="CYTZ";
    temp_airports[NA][0].name="CFB Trenton";
    temp_airports[NA][0].lat=44.1189003;
    temp_airports[NA][0].lon=-77.52809906;
    temp_airports[NA][0].cont="NA";
    temp_airports[NA][0].country="CA";  

    temp_airports[EU][0].id="EDDK";
    temp_airports[EU][0].name="Cologne Bonn Airport";
    temp_airports[EU][0].lat=50.86589813;
    temp_airports[EU][0].lon=7.142739773;
    temp_airports[EU][0].cont="EU";
    temp_airports[EU][0].country="DE";  
    
    my_sizes->cont[NA]=1;
    my_sizes->cont[EU]=1;
    
    return temp_airports;
}

/**
 * @brief The main function to run the strategic airlift input generator.
 *
 * The following are valid command line arguments:
 * TBD - by Edwin
 *
 * @return 0 if the application executed successfully.  Any other number if their was an error.
 */
int main() {
    
    /* get 2D array of objects */

    int size[7] ;

    char line[N];
    
    char fileName[100];
    
    printf("Enter the filename: ");
    
    scanf("%s",fileName);

    struct AIRPORT** arr = get_2D_array(size, line, fileName);

    int num_of_airports =parse_airports(arr, line);
    printf("%d\n\n",num_of_airports);
    
    int rtn_val=0;                                      // The current state of the function to return
    
    #ifdef DEBUG_ENABLED
    printf("Debug Enabled\n");
    #endif

    /* Initalizes my_sizes to 0 for all dynamic arrays. */
    my_sizes=malloc(sizeof(struct SIZES));
    for(int init=0;init<7;init++)
    {
        my_sizes->cont[init]=0;
    }
    my_sizes->locations=0;
    my_sizes->paths=0;

    /* Creates the initial structures which will be used for all function calls. */
    struct STATE *my_state=malloc(sizeof(struct STATE));
    struct AIRPORT **my_airports;
    struct PATH *my_paths=NULL;
    
    /* Release 1 of parse_config uses the default values specified in the requirements document. */    
    if(rtn_val==0 && parse_config(my_airports, "", my_state)!=0) {
        rtn_val=-1;
    }

    if(rtn_val==0 && calc_shortest_path(my_state, &my_paths)!=0) {
        rtn_val=-5;
    }
    
    free(my_sizes);
    free(my_state);
    free(my_airports);
    free(my_paths);
    
    return rtn_val;
    
    /* Release 1 of parse_config uses the default values specified in the requirements document. */    
    if(parse_config(my_airports, "", my_state)) {
        #ifdef DEBUG_ENABLED
        print_state(my_state);
        #endif
    }

    free(my_sizes);
    free(my_state);
    free(my_airports);

    return 0;
}
