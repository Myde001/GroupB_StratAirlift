/*

"""
←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
↓↓...........................................................................↓↓
↓↓..........................↓↓↓↓↓↓↓↓↓↓↓↓↓....................................↓↓
↓↓.......................↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓.................................↓↓
↓↓.....................↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓...............................↓↓
↓↓....................↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓..............................↓↓
↓↓...................↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓.↓↓...............................↓↓
↓↓...................↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓...↓↓..............................↓↓
↓↓...................↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓.↓↓...↓↓↓.............................↓↓
↓↓...................↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓..............................↓↓
↓↓....................↓↓↓↓↓↓↓↓↓↓↓↓↓.....↓↓↓↓↓↓↓↓↓............................↓↓
↓↓......................↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓..↓↓↓↓↓↓↓............................↓↓
↓↓...................................↓↓↓.....................................↓↓
↓↓.................↓↓................↓↓↓↓ ↓↓↓↓↓↓↓........↓...................↓↓
↓↓...............↓↓↓↓↓↓..............↓↓↓↓↓↓↓↓↓↓↓↓↓...↓↓↓↓↓↓..................↓↓
↓↓............↓↓↓↓..↓↓↓↓↓.........................↓↓↓↓↓↓↓↓↓..................↓↓
↓↓............↓↓↓↓...↓↓↓↓↓↓↓....................↓↓↓↓↓↓.↓↓.↓↓.................↓↓
↓↓...............↓↓↓↓↓↓↓↓↓↓↓↓↓↓............↓↓↓↓↓↓↓↓..........................↓↓
↓↓.........................↓↓↓↓↓↓↓↓↓...↓↓↓↓↓↓↓...............................↓↓
↓↓..............................↓↓↓↓↓↓↓↓↓↓...................................↓↓
↓↓..........................↓↓↓↓↓....↓↓↓↓↓↓↓↓↓...............................↓↓
↓↓............↓↓.↓↓↓↓↓↓↓↓↓↓↓↓↓............↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓..................↓↓
↓↓............↓↓.↓↓..↓↓↓↓.....................↓↓↓↓↓↓↓↓↓↓↓↓↓↓.................↓↓
↓↓..............↓↓↓↓↓↓............................↓↓.↓↓↓↓↓↓↓.................↓↓
↓↓..................                                   ......................↓↓
↓↓.................. ↑↑↑  ↑↑↑  ↑↑↑↑↑↑↑        ↑↑↑↑↑↑↑ .......................↓↓
↓↓.................. ↑↑↑  ↑↑↑  ↑↑↑   ↑↑↑↑     ↑↑↑   ↑↑↑↑.....................↓↓
↓↓.................. ↑↑↨  ↑↑↑  ↑↑↨   ↨↑↑      ↑↑↨   ↨↑↑......................↓↓
↓↓.................. ↨↑↨  ↑↨↑  ↨↑↨   ↨↑↨      ↨↑↨   ↨↑↨......................↓↓
↓↓.................. ↑↨↑  ↨↑↨  ↨↨↑↨↑↨↨↑↑↨     ↨↨↑↨↑↨↨↑↑↨.....................↓↓
↓↓.................. ↨↑↨  ↨↨↨  ↨↨↨      ↨↨↨   ↨↨↨     ↨↨↨....................↓↓
↓↓.................. :↨:  ↨↨:  ↨↨:      :↨↨   ↨↨:     :::....................↓↓
↓↓................... ::↨↨:↨   :↨:      :↨:   :↨:     :::....................↓↓
↓↓.................... ::::    :::      :::   :::     :::....................↓↓
↓↓...................... :      :        :      :::::::  ....................↓↓
↓↓...........................................................................↓↓
↓↓←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←↓↓
↓↓→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→↓↓
↓↓   check_main.c  Created by  Durodola Opemipo 2020                        ↓↓
↓↓            Personal Email : <opemipodurodola@gmail.com>                   ↓↓
↓↓                 Telephone Number: +2348182104309                          ↓↓
↓↓→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→↓↓
↓↓←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←↓↓
"""
*/
//
// Created by root on 10/5/20.
//

#include <check.h>
#include <string.h>
#include "../../include/calc_shortest_path.h"
#include "../../include/gen_locations.h"
#include "../../include/parse_airports.h"
#include "../../include/parse_config.h"
#include "../../include/strat_airlift_functions.h"
#include <stdlib.h>
#include <stdio.h>

START_TEST(test_calc_shortest_path) {
    printf("********************CALCULATE SHORTEST PATH TEST********************\n");

} END_TEST

START_TEST(test_stratairlift) {

} END_TEST
START_TEST(test_find_closest) {

} END_TEST
START_TEST(test_gen_locations) {
    printf("********************GENERATE LOCATIONS TEST********************\n");
    struct AIRPORT** set_gen_locations_airports() {
    struct AIRPORT **temp_airports;

    temp_airports=(struct AIRPORT**)malloc(sizeof(struct AIRPORT*)*7);
    for(int init=0;init<7;init++){
        temp_airports[init]=(struct AIRPORT*)malloc(sizeof(struct AIRPORT)*5);
        for(int fill=0;fill<5;fill++) {
            temp_airports[init][fill].id=calloc(10,sizeof(char));
            sprintf(temp_airports[init][fill].id,"ICAO %d",fill);
            temp_airports[init][fill].name=calloc(30,sizeof(char));
            sprintf(temp_airports[init][fill].name,"%s %d",continent_names[init],fill);
            temp_airports[init][fill].lat=44.0;
            temp_airports[init][fill].lon=-80.0;
            temp_airports[init][fill].cont="NA";
            temp_airports[init][fill].country="CA";
        }
        my_sizes->cont[init]=5;
    }

    return temp_airports;
}

    int rtn_val=0;                                      // The current state of the function to return

    /* Creates the initial structures which will be used for all function calls. */
    struct STATE *my_state=malloc(sizeof(struct STATE));
    struct AIRPORT **my_airports;

    if(!my_sizes){
        free(my_sizes);
    }
    /* Initalizes my_sizes to 0 for all dynamic arrays. */
    my_sizes=malloc(sizeof(struct SIZES));
    for(int init=0;init<7;init++){
        my_sizes->cont[init]=0;
    }
    my_sizes->locations=0;
    my_sizes->paths=0;

    my_airports=set_gen_locations_airports();
    my_state->dist_locations[AF]=0.142857143;
    my_state->dist_locations[AN]=0.142857143;
    my_state->dist_locations[AS]=0.142857143;
    my_state->dist_locations[EU]=0.142857143;
    my_state->dist_locations[NA]=0.142857143;
    my_state->dist_locations[OC]=0.142857143;
    my_state->dist_locations[SA]=0.142857143;
    my_state->num_locations=7;
    my_state->airport_list=NULL;

    printf("gen_locations test 1 - compare locations: \n");
    if(gen_locations(my_airports, my_state)!=0) {
        rtn_val=-1;
    }
    ck_assert_int_eq(my_state->num_locations,my_sizes->locations);

    printf("gen_locations test 2 - duplicate locations: \n");
    int test_dup[]={5,10,2,3,6,7};
    ck_assert_int_eq(check_used(6, 2,test_dup), -1);

    my_state->num_locations=50;
    printf("gen_locations test 3 - exceeds avaliable locations: \n");
    ck_assert_int_ne(gen_locations(my_airports, my_state), 0);

    free(my_sizes);
    free(my_state);
    free(my_airports);

    my_sizes=NULL;

} END_TEST
START_TEST(test_parse_config) {
    int rtn_val=CONFIG_OK;                      // The current state of the function to return
    int func_rtn_val;                           // the return value from called functions
    /* Creates the initial structures which will be used for all function calls. */
    struct STATE *my_state=malloc(sizeof(struct STATE));
    struct AIRPORT **my_airports;
    my_airports=(struct AIRPORT**)malloc(sizeof(struct AIRPORT*)*7);
    for(int init=0;init<7;init++){
        my_airports[init]=NULL;
    }

    if(!my_sizes){
        free(my_sizes);
    }
    /* Initalizes my_sizes to 0 for all dynamic arrays. */
    my_sizes=malloc(sizeof(struct SIZES));
    for(int init=0;init<7;init++) {
        my_sizes->cont[init]=0;
    }
    my_sizes->locations=0;
    my_sizes->paths=0;

    if(rtn_val==0 && parse_airports("../data/airports.csv",my_airports)!=0) {
        rtn_val=-1;
    }

    printf("********************PARSE_CONFIG TEST********************\n");

    printf("parse_config test 1 - my_state not NULL: ");
    func_rtn_val=parse_config(my_airports, "../tests/data/blank.cfg", NULL);
    ck_assert_int_eq(func_rtn_val, -2); // Using CHECK   CONFIG_STATE_ERROR

    printf("parse_config test 2 - Configuration file doesn’t exist: ");
    func_rtn_val=parse_config(my_airports, "dummy.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -1); // Using CHECK CONFIG_FILE_ERROR

    printf("parse_config test 3A - Invalid parameter / value pair: ");
    func_rtn_val=parse_config(my_airports, "../tests/data/3A.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -3); // Using CHECK CONFIG_KEY_ERROR

    printf("parse_config test 3B - Invalid parameter / value pair: ");
    func_rtn_val=parse_config(my_airports, "../tests/data/3B.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -3); // Using CHECK CONFIG_KEY_ERROR

    printf("parse_config test 4 - Blank line: \n");
    func_rtn_val=parse_config(my_airports, "../tests/data/4.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -3); // Using CHECK CONFIG_KEY_ERROR

    printf("parse_config test 5A - Invalid number_of_scenarios: \n");
    func_rtn_val=parse_config(my_airports, "../tests/data/5A.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -4); // Using CHECK CONFIG_SCENARIO_ERROR

    printf("parse_config test 5B - Invalid number_of_scenarios: \n");
    func_rtn_val=parse_config(my_airports, "../tests/data/5B.cfg", my_state);
   ck_assert_int_eq(func_rtn_val, -4); // Using CHECK CONFIG_SCENARIO_ERROR

    printf("parse_config test 6A - Invalid number_of_locations: \n");
    func_rtn_val=parse_config(my_airports, "../tests/data/6A.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -5); // Using CHECK CONFIG_LOCATION_ERROR


    printf("parse_config test 6B - Invalid number_of_locations: \n");
    func_rtn_val=parse_config(my_airports, "../tests/data/6B.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -5); // Using CHECK CONFIG_LOCATION_ERROR

    printf("parse_config test 7 - Invalid location_distribution continent code: \n");
    func_rtn_val=parse_config(my_airports, "../tests/data/7.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -6); // Using CHECK CONFIG_DISTRIBUTION_ERROR

    printf("parse_config test 8 - Invalid location_distribution sum: \n");
    func_rtn_val=parse_config(my_airports, "../tests/data/8.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -6); // Using CHECK CONFIG_DISTRIBUTION_ERROR

    printf("parse_config test 9 - Invalid connections list: \n");
    func_rtn_val=parse_config(my_airports, "../tests/data/9.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, -7); // Using CHECK CONFIG_BASE_ERROR

    printf("parse_config test 10 - Valid config file: \n");
    func_rtn_val=parse_config(my_airports, "../tests/data/10.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, 0); // Using CHECK CONFIG_OK

    printf("parse_config test 11 - Default values: \n\n");
    func_rtn_val=parse_config(my_airports, "../tests/data/blank.cfg", my_state);
    ck_assert_int_eq(func_rtn_val, 0); // Using CHECK CONFIG_OK

    #ifdef DEBUG_ENABLED
    print_state(my_state);
    #endif

    free(my_sizes);
    free(my_state);
    free(my_airports);

    my_sizes=NULL;
} END_TEST

START_TEST(test_parse_airport) {
    int rtn_val=0;                                      // The current state of the function to return
    int test_val=0;                                     // Keep track of the number of airports read in

    my_sizes=malloc(sizeof(struct SIZES));
    for(int init=0;init<7;init++){
        my_sizes->cont[init]=0;
    }

    struct AIRPORT **my_airports;
    my_airports=(struct AIRPORT**)malloc(sizeof(struct AIRPORT*)*7);
    for(int init=0;init<7;init++){
        my_airports[init]=NULL;
    }
    printf("********************PARSE_AIRPORTS TEST********************\n");
    printf("parse_airports test 1 - airport file doesn't exist: ");
    ck_assert_int_eq(parse_airports("garbage.txt",my_airports), -1);

    printf("parse_airports test 2 - airport file with different length rows: \n");
    ck_assert_int_eq(parse_airports("../tests/data/airports_diff_sizes.csv",my_airports), 0);


    printf("parse_airports test 3 - airport file with known number of airports: \n");

    ck_assert_int_eq(parse_airports("../tests/data/airports_known_number.csv",my_airports), 0);

    free(my_airports);
    free(my_sizes);

} END_TEST




Suite * stratairliftinit_suite(void) {
    Suite *s;
    TCase *tc_csp;
    TCase *tc_str;
    TCase *tc_fdc;
    TCase *tc_gnl;
    TCase *tc_psc;
    TCase *tc_psa;

    s = suite_create("StratAirlift");
    //    calc_shortest_path

    tc_csp = tcase_create("CSP");

    tcase_add_test(tc_csp, test_calc_shortest_path);
    suite_add_tcase(s, tc_csp);

    //    stratairlift
    tc_str = tcase_create("STR");

    tcase_add_test(tc_str, test_stratairlift);
    suite_add_tcase(s, tc_str);

    //    find_closest

    tc_fdc = tcase_create("FDC");

    tcase_add_test(tc_fdc, test_find_closest);
    suite_add_tcase(s, tc_fdc);



    //    gen_locations

    tc_gnl= tcase_create("GNL");

    tcase_add_test(tc_gnl, test_gen_locations);
    suite_add_tcase(s, tc_gnl);



    //    parse_config

    tc_psc = tcase_create("PSC");
    tcase_add_test(tc_psc, test_parse_config);
    suite_add_tcase(s, tc_psc);



    //    parse_airport

    tc_psa = tcase_create("PSA");
    tcase_add_test(tc_psa, test_parse_airport);
    suite_add_tcase(s, tc_psa);




  return s;
}

int main(void) {
  int no_failed = 0;
  Suite *s;
  SRunner *runner;

  s = stratairliftinit_suite();
  runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}