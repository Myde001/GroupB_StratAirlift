set(SOURCE_FILES
        main.c parse_config.c parse_airports.c gen_locations.c find_closest.c common_functions.c calc_shortest_path.c export.c
        ../include/calc_shortest_path.h ../include/common_functions.h ../include/data_types.h ../include/gen_locations.h
        ../include/main.h ../include/parse_airports.h ../include/parse_config.h ../include/strat_airlift_functions.h
        )


add_executable(StratAirliftInit ${SOURCE_FILES})

target_link_libraries(StratAirliftInit m)
