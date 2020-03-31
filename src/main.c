/**
 * @file main.c
 * @author Rob Barwell, Olumide Akinola
 * @date 15 Mar 2020, Last Updated 27 Mar 2020
 * @brief This file contains the main function.
 */

#include <stdio.h>
#include <stdlib.h>

#include "../include/data_types.h"
#include "../include/common_functions.h"
#include "../include/strat_airlift_functions.h"
#include "../include/parse_airports.h"

/**
 * @brief my_sizes is used to store the sizes of the dynamic arrays used throughout the program.
 */
struct SIZES *my_sizes;

/**
 * @brief The main function to run the strategic airlift input generator.
 *
 * The following are valid command line arguments:
 * TBD - by Edwin
 *
 * @return 0 if the application executed successfully.  Any other number if their was an error.
 */
int main() {
       
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
    my_airports=(struct AIRPORT**)malloc(sizeof(struct AIRPORT*)*7);
    for(int init=0;init<7;init++){
        my_airports[init]=NULL;
    }
    struct PATH *my_paths=NULL;

    if(rtn_val==0 && parse_airports("./data/airports.csv",my_airports)) {
        rtn_val=-1;
    }
    #ifdef DEBUG_ENABLED
    printf("Airports per Continent\n");
    for(int print_size=0;print_size<7;print_size++) {
        printf("Continent %d Airports: %d\n",print_size,my_sizes->cont[print_size]);
    }
    #endif

    /* Release 1 of parse_config uses the default values specified in the requirements document. */    
    if(rtn_val==0 && parse_config(my_airports, "", my_state)!=0) {
        rtn_val=-2;
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